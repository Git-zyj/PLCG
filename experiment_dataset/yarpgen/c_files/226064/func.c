/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226064
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
    var_15 = ((/* implicit */_Bool) ((((long long int) (-(1048572U)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) ((((_Bool) arr_1 [i_0])) ? (max((((/* implicit */long long int) var_8)), (((var_2) + (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : (((/* implicit */long long int) var_14))));
        arr_2 [i_0] [(_Bool)0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 4293918712U)))) ? (((/* implicit */unsigned int) var_14)) : (((unsigned int) arr_1 [15LL]))));
        var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) (+(((/* implicit */int) var_1))))) * (((long long int) var_1))))));
    }
    for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        var_18 = ((((4293918720U) << (((4293918735U) - (4293918716U))))) | (var_4));
        var_19 = ((/* implicit */long long int) (!(var_10)));
        arr_6 [i_1] [i_1] = ((((/* implicit */long long int) 3124725842U)) ^ ((-9223372036854775807LL - 1LL)));
    }
    for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
    {
        var_20 = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (-198535200)));
        var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((unsigned int) var_8)), (((/* implicit */unsigned int) ((int) -198535200)))))), (((((/* implicit */long long int) var_9)) / (min((arr_1 [i_2]), (((/* implicit */long long int) var_5))))))));
        arr_9 [i_2] = ((/* implicit */unsigned int) (-(arr_7 [i_2 + 1])));
        arr_10 [i_2] = ((/* implicit */short) arr_0 [i_2 + 2]);
    }
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        for (long long int i_4 = 1; i_4 < 23; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                        var_23 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6] [i_3] [i_3])) ? (arr_15 [17LL] [i_6] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) || (((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4] [i_4])));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) arr_17 [i_3] [i_4 - 1] [i_4 - 1] [i_7]);
                        var_25 = ((/* implicit */short) ((int) arr_14 [i_5] [i_7]));
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (short)-23127))));
                    }
                    for (int i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) ((((((/* implicit */int) var_10)) < (((/* implicit */int) arr_22 [i_5])))) || (((_Bool) var_12))));
                        var_28 = (!(((/* implicit */_Bool) arr_27 [i_5] [i_3] [i_5] [i_8])));
                    }
                    for (long long int i_9 = 3; i_9 < 22; i_9 += 1) 
                    {
                        arr_30 [i_5] [i_5] = ((/* implicit */_Bool) (~((((!(((/* implicit */_Bool) var_5)))) ? (min((((/* implicit */long long int) 1048587U)), (arr_24 [i_3] [i_3]))) : (((/* implicit */long long int) var_3))))));
                        arr_31 [i_3] [i_3] [i_5] [i_3] = ((/* implicit */short) var_2);
                    }
                    var_29 = ((/* implicit */unsigned int) min((var_29), (4293918712U)));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((14U) | (3124725842U))) > (min((var_4), (((/* implicit */unsigned int) var_11)))))))));
}
