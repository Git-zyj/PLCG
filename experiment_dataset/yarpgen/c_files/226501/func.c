/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226501
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
    var_16 = var_14;
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */int) arr_3 [i_0 - 1]);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
                    {
                        arr_13 [i_0] [i_2] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((((_Bool) arr_5 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        arr_14 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_9 [i_0 + 1] [i_1] [(_Bool)0] [(_Bool)0]) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) 254465141)) ? (((/* implicit */long long int) 254465153)) : (7441600044008009710LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -7441600044008009710LL)) ? (((/* implicit */int) var_7)) : (var_8))))));
                        arr_15 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((int) ((signed char) var_15)));
                    }
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_1] [i_4] [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_5 [i_0])));
                            var_18 = ((/* implicit */int) arr_19 [i_0]);
                            var_19 *= ((/* implicit */_Bool) ((unsigned int) arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0] [i_0 + 1])) && (((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0] [i_0 + 1]))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]) / (((/* implicit */int) var_14)))))));
                            arr_26 [i_6] [i_0] [3U] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)179)) >= (((/* implicit */int) arr_11 [i_0] [i_0] [(signed char)5] [i_0] [i_4] [i_6]))))) : (((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [i_4] [i_0]))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 3; i_7 < 17; i_7 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((long long int) var_9));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((unsigned short) -920160033)))));
                            arr_29 [i_0 - 1] [i_0] [i_2] [i_2] [9ULL] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_27 [i_0] [i_0] [i_2] [i_4] [(short)4])))) ? (((/* implicit */int) arr_20 [i_0] [i_2] [i_2] [i_0] [i_0] [i_1] [i_2])) : (arr_0 [i_0])));
                        }
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) min((min((((/* implicit */long long int) max((((/* implicit */int) var_9)), (254465119)))), (-7441600044008009710LL))), (((long long int) arr_25 [i_0] [i_0] [i_4] [i_1] [i_2] [i_2] [i_2])))))));
                        arr_30 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_22 [i_0] [i_0] [i_1] [i_1] [i_1] [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_8 [0] [i_0] [i_2])))) ? (arr_0 [i_0]) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_7)))))) : (((unsigned int) var_7))));
                    }
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) ((unsigned char) max((254465153), (arr_28 [i_0] [i_8] [i_0] [i_8] [i_1] [i_2])))))));
                        arr_34 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_13)), (arr_19 [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [(_Bool)1]))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), (var_14))))) % (((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_2] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_5 [i_0])))))) : ((-((+(var_0)))))));
                        var_26 *= ((/* implicit */unsigned int) var_4);
                    }
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        for (signed char i_10 = 4; i_10 < 17; i_10 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */int) arr_39 [i_1] [i_10] [i_9] [i_1] [i_1] [i_1] [i_0]);
                                var_28 = max((((((/* implicit */_Bool) 920160036)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned char)240)))), (((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned short) var_14))))) ? (((/* implicit */int) ((((/* implicit */int) arr_35 [i_2] [i_0] [i_2] [i_0 + 1] [i_0] [i_0 + 1])) <= (((/* implicit */int) arr_39 [i_0 + 1] [i_0 + 1] [i_9] [i_0 + 1] [i_10] [i_0 - 1] [i_0 + 1]))))) : (((/* implicit */int) ((_Bool) arr_6 [i_9]))))));
                            }
                        } 
                    } 
                    arr_41 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((unsigned int) max((var_0), (((/* implicit */unsigned long long int) ((short) var_14))))));
                }
                arr_42 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_1)))))) ? (((/* implicit */int) ((-254465126) >= (((/* implicit */int) arr_10 [i_1] [i_0] [i_1] [i_0] [i_1]))))) : (min((var_10), (((((/* implicit */_Bool) var_6)) ? (arr_7 [(unsigned char)3] [i_1] [(unsigned char)3] [i_1]) : (((/* implicit */int) arr_25 [i_0 + 1] [i_0 + 1] [i_0] [(short)15] [i_0 + 1] [i_1] [(short)5]))))))));
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_29 = arr_28 [i_1] [(_Bool)0] [i_1] [i_1] [(unsigned char)8] [(unsigned char)8];
                    var_30 = ((/* implicit */signed char) ((_Bool) (-(max((arr_40 [i_0 - 1] [i_0 - 1] [17U] [i_1] [i_0] [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_28 [i_0] [i_1] [i_0] [i_1] [i_0 - 1] [i_11])))))));
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) var_6)), (var_0))), (((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_1] [i_1]))))))));
                    arr_45 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [7ULL])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_11] [i_0] [i_0])))))) ? (((unsigned int) 7441600044008009710LL)) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_9 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]) >= (arr_9 [2U] [2U] [i_11] [i_11]))))))));
                }
            }
        } 
    } 
}
