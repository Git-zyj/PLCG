/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45732
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                arr_7 [i_0] [i_0] [(signed char)8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)21)))))))) ? (var_9) : (((/* implicit */int) var_7))));
            }
        } 
    } 
    var_15 = (!(((/* implicit */_Bool) ((long long int) ((unsigned long long int) 4294967279U)))));
    var_16 = ((/* implicit */_Bool) (unsigned char)169);
    var_17 = ((/* implicit */short) (~(((/* implicit */int) var_4))));
}
