/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243706
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [6U] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_14 [i_3] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((int) arr_2 [i_1 - 1]))), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [6ULL])))))) | (((unsigned int) arr_8 [i_3] [i_1]))))));
                            arr_15 [i_3] [i_2] [i_3] = ((_Bool) ((arr_12 [i_0] [i_1] [i_3]) % (((/* implicit */long long int) (~(-2095899266))))));
                            arr_16 [i_3] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_13 [i_3] [i_2] [i_0] [i_1] [i_1] [i_0])), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) var_3)) : (1640973148591854782ULL)))));
                            var_11 = ((/* implicit */long long int) min((max((var_1), (((/* implicit */unsigned int) arr_11 [i_3])))), (((/* implicit */unsigned int) (!((_Bool)1))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (((((/* implicit */_Bool) 3261593175885444014LL)) ? (-1533243185) : (1794009058))) : (((((/* implicit */int) arr_1 [i_0] [i_1])) | (-2090133351)))))), (arr_5 [i_0])));
                var_13 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13827090169967672333ULL)) ? (((/* implicit */unsigned long long int) -1174526438598315683LL)) : (4619653903741879282ULL)))))))));
                /* LoopSeq 3 */
                for (int i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    var_14 = ((/* implicit */unsigned int) ((((_Bool) min((arr_10 [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_4))))) ? (((/* implicit */unsigned long long int) (+(var_2)))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_4 + 2] [i_0]))))), (((16805770925117696838ULL) / (var_0)))))));
                    arr_20 [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_13 [i_4 + 2] [(_Bool)1] [i_4 + 4] [i_4] [i_4 + 4] [i_1 - 1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_15 &= ((/* implicit */unsigned long long int) 3314422687U);
                                var_16 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_13 [i_4 + 1] [i_4 + 1] [i_4 + 4] [i_4 + 2] [i_4 + 4] [i_4])) ? (0ULL) : (((/* implicit */unsigned long long int) -13)))), (((/* implicit */unsigned long long int) arr_22 [i_0] [(_Bool)1] [13U] [i_6]))));
                                arr_27 [i_0] [i_0] [i_4 + 4] [i_5] [i_6] [3ULL] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_1 [0ULL] [0ULL]))))));
                                arr_28 [i_5] [i_0] [i_4] [i_1] [i_0] [i_5] = arr_10 [12U] [12U] [i_0];
                                var_17 = ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [10] [11LL])), (8955429714053996110ULL))), (((/* implicit */unsigned long long int) (+(2333229787670623112LL))))))) ? (((/* implicit */long long int) 2916355361U)) : (((((/* implicit */_Bool) arr_13 [i_0] [1U] [i_1] [i_4] [1U] [i_6])) ? (((/* implicit */long long int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((/* implicit */int) arr_8 [i_0] [i_1]))))) : (max((arr_12 [i_0] [14LL] [i_5]), (-4705798015874429738LL))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) (_Bool)1);
                }
                for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 1; i_8 < 11; i_8 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1])))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1]))))))))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) arr_5 [i_0]);
                }
                for (int i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    arr_36 [i_0] [i_0] [14U] [i_9] = min((((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (arr_2 [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9] [i_1 - 1] [i_9]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0])) + (((/* implicit */int) arr_30 [i_0] [i_1 - 1] [i_0]))))));
                    var_22 = ((/* implicit */long long int) arr_31 [(_Bool)1] [i_1] [i_1] [(_Bool)1]);
                    var_23 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(18444492273895866368ULL))))))));
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_1 - 1] [i_1 - 1]) ? (((/* implicit */unsigned int) -824952236)) : (arr_35 [i_1 - 1] [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))) : (((unsigned long long int) var_6))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_2);
}
