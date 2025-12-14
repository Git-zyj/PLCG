/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227095
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
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), ((~((+(var_3)))))));
                var_18 = ((((1125899906842623ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? ((~(((7804566180335546254ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) 2305843008676823040ULL)) ? (7804566180335546255ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) > (((/* implicit */int) arr_1 [i_1] [i_0])))))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (_Bool)1))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2]))));
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 3])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1])) >> (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 3])))))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [7ULL] [i_3] [i_1] [(_Bool)1])) ? (((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_4 [i_4] [(_Bool)1] [i_0]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : ((((_Bool)1) ? (18445618173802708993ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((5893340882520868107ULL) + (arr_0 [i_1] [i_5])))) ? (((18445618173802708975ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_5] [1ULL] [(_Bool)1] [i_0])))))))) ? (arr_2 [i_0 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) <= (min((var_2), (((/* implicit */unsigned long long int) var_4))))))))));
                        var_25 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((_Bool)0), ((_Bool)1)))), (max((15768325616218794321ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_16 [i_6] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (((unsigned long long int) var_2)))))));
                        var_26 *= ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 9762521434612968059ULL)))))) - (max((((/* implicit */unsigned long long int) var_6)), (12553403191188683509ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))));
                        var_27 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (1125899906842637ULL));
                    }
                    arr_17 [i_0 - 2] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((_Bool) var_5)))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_8 [i_3] [(_Bool)1] [i_3] [i_1]))) & (max((var_5), (arr_0 [6ULL] [i_1])))))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_6), (var_10)))), (var_11)));
}
