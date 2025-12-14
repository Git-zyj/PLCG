/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210870
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
    var_10 = (+(((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2)))))))));
    var_11 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) (_Bool)0)), (-9141688562105671534LL))), (((/* implicit */long long int) var_0))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] [(unsigned short)5] = ((/* implicit */signed char) (-(-9141688562105671534LL)));
            var_12 -= ((/* implicit */_Bool) var_6);
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) + (9141688562105671533LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_8))))) : ((~(-9141688562105671522LL)))));
            var_13 &= ((/* implicit */unsigned short) 2139038311);
            /* LoopNest 2 */
            for (unsigned short i_3 = 2; i_3 < 9; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            arr_15 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_5] [i_2] [i_0 - 1])) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_3 - 2]))));
                            var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
                            var_15 = ((/* implicit */long long int) ((unsigned int) arr_1 [i_5]));
                            arr_16 [i_0] [i_2] [i_3 - 1] [i_2] [i_5] = ((/* implicit */unsigned short) (_Bool)1);
                            arr_17 [i_0 + 1] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */unsigned int) var_9)) : (((((/* implicit */_Bool) var_8)) ? (var_0) : (var_0)))));
                        }
                        for (long long int i_6 = 2; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_3] [i_4] [i_6 + 2])) ? (((/* implicit */int) arr_10 [i_4] [i_2] [i_3 + 2] [i_4])) : (((/* implicit */int) var_8))))))));
                            var_17 = ((/* implicit */short) var_4);
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_9)) < (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_2]))) ^ (9141688562105671533LL)))));
                            var_19 *= ((/* implicit */signed char) (+(330742209U)));
                            arr_21 [i_6] [i_6] [i_6] [i_6] [(unsigned char)2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) (signed char)-96)) + (100)))));
                        }
                        for (long long int i_7 = 2; i_7 < 11; i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) (unsigned short)4907)))));
                            var_20 = (!(((/* implicit */_Bool) arr_22 [i_0 + 2] [i_3] [i_0 + 2] [i_4] [i_7] [(signed char)3] [i_2])));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [3LL] [i_2] [i_0])) : (((/* implicit */int) var_6))))) * (((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                        }
                        var_22 = ((/* implicit */long long int) var_8);
                        arr_26 [i_2] [i_3 + 3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_0 - 1]))));
                    }
                } 
            } 
        }
        arr_27 [i_0] = ((/* implicit */signed char) min((((arr_4 [i_0 - 1] [i_0 + 2]) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */long long int) min((1488665213U), (((/* implicit */unsigned int) arr_19 [i_0 - 1] [i_0 + 1] [i_0 + 2] [2ULL] [i_0 - 1])))))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                {
                    arr_34 [5LL] [i_8] [(unsigned short)11] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_31 [i_8] [(signed char)1]))))))) >> (((((/* implicit */int) var_1)) - (51)))));
                    arr_35 [i_0 + 2] [i_8] [i_9] = ((/* implicit */signed char) (~(arr_0 [i_0 + 1] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                        {
                            {
                                arr_40 [i_0] [i_0] [i_11] [i_9] [i_9] [(unsigned char)0] [i_11] = ((/* implicit */unsigned int) max(((+(((((/* implicit */_Bool) var_6)) ? (2389815714234011301LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))), (((/* implicit */long long int) min((arr_32 [i_8]), (arr_32 [i_10]))))));
                                var_23 = (!(((/* implicit */_Bool) min((6034619884163980320LL), (((/* implicit */long long int) ((((/* implicit */int) var_2)) <= (928127570))))))));
                                arr_41 [i_11] = ((unsigned int) min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) arr_2 [i_9])))))));
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_8])) ? (arr_18 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)73)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0 - 1] [i_9] [i_9] [i_0 - 1]))) : (((((/* implicit */_Bool) 3469594881U)) ? (5933251385661845ULL) : (((/* implicit */unsigned long long int) 1051866025))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)22282))) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)49406))))), (var_0))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_12 = 2; i_12 < 13; i_12 += 2) 
    {
        arr_44 [i_12] [i_12] = ((/* implicit */int) arr_43 [i_12 + 1]);
        var_25 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_43 [i_12 + 1])) ? (((/* implicit */int) arr_42 [i_12])) : (((((/* implicit */_Bool) arr_42 [i_12])) ? (((/* implicit */int) arr_42 [i_12 - 1])) : (((/* implicit */int) var_3)))))));
    }
}
