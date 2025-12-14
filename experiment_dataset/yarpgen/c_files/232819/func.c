/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232819
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
    var_19 = ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 ^= min(((unsigned short)32672), (((/* implicit */unsigned short) ((signed char) arr_3 [i_1]))));
                var_21 = ((/* implicit */signed char) ((unsigned long long int) (-2147483647 - 1)));
                var_22 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_1])) >= (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [10U])) : (((/* implicit */int) var_16)))))) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) : (706172376)));
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_0 [(signed char)13]), (arr_0 [i_0]))))));
            }
        } 
    } 
}
