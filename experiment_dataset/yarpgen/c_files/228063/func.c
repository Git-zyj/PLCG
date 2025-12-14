/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228063
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) var_0)), (var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 31ULL)))) : ((-(min((var_12), (((/* implicit */long long int) var_13))))))));
    var_20 = ((/* implicit */unsigned char) (-(var_6)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_21 += ((/* implicit */long long int) ((unsigned long long int) var_10));
                var_22 ^= ((/* implicit */long long int) (~(((unsigned long long int) arr_1 [(unsigned char)4] [i_1]))));
            }
        } 
    } 
}
