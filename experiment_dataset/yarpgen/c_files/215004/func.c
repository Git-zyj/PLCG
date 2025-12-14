/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215004
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    arr_7 [i_0] [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_1 [i_0]))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))) ? (var_7) : (((/* implicit */int) (!(((/* implicit */_Bool) 279100827)))))));
                }
                var_20 = ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -7377100547936148923LL)))))) ^ (var_10)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) max((var_13), (((/* implicit */int) var_8))))))));
    var_22 = ((/* implicit */_Bool) min(((short)20), ((short)0)));
}
