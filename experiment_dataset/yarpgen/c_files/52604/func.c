/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52604
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 = (+(((var_7) & (arr_2 [i_0] [i_1] [i_1 + 1]))));
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1 + 2])) ? (arr_2 [i_0] [i_1] [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? ((-(arr_2 [6LL] [i_1] [i_1 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 3; i_2 < 17; i_2 += 4) 
                {
                    var_17 = ((/* implicit */int) max((var_17), (((int) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_7))))));
                    var_18 = ((/* implicit */long long int) arr_5 [i_2 + 3] [i_1 + 1]);
                    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_1 + 1]))));
                }
                var_20 = ((/* implicit */signed char) (+(((/* implicit */int) var_13))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) (short)255);
                var_22 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((var_5) | (((/* implicit */long long int) var_3)))) - (((long long int) var_4))))) : (((((/* implicit */_Bool) -1620258188)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_6))));
                var_23 = ((unsigned long long int) var_8);
            }
        } 
    } 
}
