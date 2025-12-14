/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229711
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
    var_15 = ((/* implicit */short) var_7);
    var_16 = ((/* implicit */unsigned short) var_6);
    var_17 = ((/* implicit */unsigned short) min((((signed char) var_9)), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_9)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) 3454218330U)))))))));
                        var_19 = ((/* implicit */long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */long long int) var_14)) : (arr_9 [i_2] [(signed char)11]))) == (((/* implicit */long long int) arr_2 [i_0])))))));
                        var_20 = ((/* implicit */signed char) var_0);
                    }
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                    {
                        arr_16 [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_13 [i_0 - 3] [i_1] [1U] [1U])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 2])) ? (((arr_2 [i_0]) + (((/* implicit */unsigned int) var_5)))) : ((-(var_10))))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned int) ((unsigned char) min((arr_0 [i_2]), (arr_0 [i_4]))))))));
                        arr_17 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((var_0) & (((/* implicit */long long int) ((/* implicit */int) arr_12 [(_Bool)1] [i_0]))))) : (((/* implicit */long long int) var_5))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) var_1);
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-107)) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2])))))), (min((((/* implicit */long long int) arr_0 [i_2])), (var_6))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */int) max((arr_11 [i_2]), (arr_7 [i_0 - 2] [i_1] [i_2] [i_5])))) : (((/* implicit */int) arr_20 [i_0 - 3] [i_0 - 2]))))))))));
                        var_24 = ((long long int) ((arr_19 [i_0] [i_1] [i_0] [i_0]) / (min((((/* implicit */long long int) (signed char)106)), (var_0)))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_25 -= ((/* implicit */long long int) arr_2 [i_2]);
                            var_26 *= ((/* implicit */unsigned long long int) arr_26 [(signed char)0] [i_1] [i_0] [i_1] [i_0]);
                        }
                        for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            arr_30 [i_0] [i_0] [i_0 - 3] [i_1] [(short)17] [i_6] [i_8] = (~(min((((/* implicit */int) (signed char)122)), (-572009893))));
                            arr_31 [i_0] = min((min((((/* implicit */unsigned int) arr_11 [i_0 - 1])), (min((((/* implicit */unsigned int) var_14)), (arr_8 [(unsigned short)16] [i_1] [i_6] [i_8]))))), (((/* implicit */unsigned int) (~(arr_13 [i_0] [(signed char)7] [i_0 - 1] [i_6])))));
                            var_27 *= ((/* implicit */unsigned short) arr_21 [i_0] [i_8] [i_2] [0U]);
                            arr_32 [i_8] [i_6] [i_0] [i_0] [(short)17] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-76)) || (((/* implicit */_Bool) -420886912))))) / (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_25 [i_0 + 1] [i_0 + 1] [i_2] [i_6] [i_8])))))))));
                        }
                        var_28 -= arr_22 [i_2] [i_6] [i_6] [i_6];
                        arr_33 [i_0] [i_0] = (~(max((((unsigned int) (signed char)122)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */int) (unsigned short)36606))))))));
                        arr_34 [i_0] [16LL] [i_1] [i_1] [16LL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_6] [i_2] [i_2] [i_2] [i_1] [i_0]))) <= (2251228051U)))) << ((((-(var_9))) - (647174915)))))) ? ((((~(((/* implicit */int) var_11)))) - (((/* implicit */int) arr_28 [i_0] [i_0] [(_Bool)1] [i_0 - 2] [i_1] [i_0 - 2] [i_0])))) : (((/* implicit */int) min((arr_7 [i_0] [i_1] [i_0] [i_6]), (arr_7 [i_6] [i_0] [i_0] [i_0]))))));
                    }
                    var_29 = ((/* implicit */unsigned int) (((-(var_0))) / (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_1] [i_0 + 1])) * (((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1])))))));
                    arr_35 [i_0 + 1] [i_0] [i_2] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_28 [i_0] [i_1] [14] [i_2] [14] [i_0 - 2] [i_0])))) / (((/* implicit */int) min((arr_28 [(signed char)3] [i_1] [i_1] [(unsigned char)20] [i_0] [i_0 - 3] [i_0]), (arr_28 [i_1] [i_1] [i_2] [i_1] [i_1] [i_0 + 1] [i_0]))))));
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 20; i_9 += 2) 
                    {
                        for (long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((arr_14 [i_0] [i_0] [i_2] [i_9] [2U]) ? (((/* implicit */int) arr_15 [i_1] [i_9] [6U] [i_2] [i_1] [i_0])) : (((/* implicit */int) (signed char)-123)))))))));
                                var_31 = ((/* implicit */unsigned long long int) var_8);
                                arr_42 [i_10] [(signed char)19] [i_0] [i_0] [i_0 - 2] [i_0 - 3] = ((/* implicit */unsigned int) arr_11 [i_0 + 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
