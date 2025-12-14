/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191780
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
    var_13 = ((/* implicit */int) (unsigned char)32);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_14 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */_Bool) 3912946384U)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (unsigned char)69)))) * (((/* implicit */int) arr_2 [i_0] [i_0] [i_2]))))) - (arr_3 [i_0])));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            arr_11 [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */signed char) max((511ULL), (((/* implicit */unsigned long long int) var_9))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_2 - 2]);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_2 - 1] [i_2] [i_2]))));
                            var_16 *= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)203))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) arr_8 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 - 2]);
                            var_17 = ((/* implicit */unsigned long long int) ((arr_17 [i_0] [i_0] [i_0] [i_3]) ? (((long long int) arr_5 [i_0] [i_2 + 1] [i_2] [i_3])) : ((-(9223372036854775807LL)))));
                            var_18 *= ((/* implicit */unsigned short) arr_7 [i_0]);
                        }
                        /* LoopSeq 1 */
                        for (long long int i_7 = 3; i_7 < 11; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) (!(max(((!(((/* implicit */_Bool) var_1)))), ((!(((/* implicit */_Bool) (unsigned char)66))))))));
                            arr_23 [i_7] [i_7] [i_7 - 3] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((short) -8285905946799633388LL)))) ^ (((/* implicit */int) arr_7 [i_0]))));
                            arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (unsigned char)248))))))));
                            var_20 += ((/* implicit */long long int) ((((/* implicit */int) ((arr_9 [i_0] [i_2 - 2] [i_0] [i_7] [i_0] [i_7 + 1]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 1] [i_2] [i_2] [i_1] [i_0])))))) << (((min((((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_7]))))), (((/* implicit */unsigned int) (signed char)-87)))) - (1519058511U)))));
                        }
                        var_21 *= ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_14 [i_0]) : (((/* implicit */unsigned long long int) var_1))))))))) * (max((((((/* implicit */_Bool) var_4)) ? (6821859125570492926LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_1] [i_2 - 2]))))), (((/* implicit */long long int) arr_16 [i_2] [i_2 - 2] [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1])))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            var_22 = ((/* implicit */signed char) min((((unsigned char) (unsigned char)7)), (min((arr_5 [i_2 - 1] [i_8] [i_2 - 1] [i_9]), (((/* implicit */unsigned char) arr_16 [i_9] [i_2 - 1] [i_2 - 2] [i_2] [i_2] [i_2 - 1]))))));
                            var_23 ^= ((/* implicit */unsigned char) ((unsigned int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57))) ^ (arr_9 [i_9] [i_8] [i_2] [i_1] [i_0] [i_0]))))));
                            var_24 = ((/* implicit */unsigned char) ((max((14436112652009871123ULL), (((/* implicit */unsigned long long int) max((2704154393U), (((/* implicit */unsigned int) arr_17 [i_0] [i_1] [i_2] [i_1]))))))) - (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)27289)) - (((/* implicit */int) arr_17 [i_1] [i_1] [i_8] [i_9])))) + (((/* implicit */int) (unsigned char)254)))))));
                        }
                        arr_30 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)55)))) < (((/* implicit */int) (!(((((/* implicit */long long int) var_7)) >= (var_1))))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) min((min((var_11), (((/* implicit */long long int) (short)26876)))), (((/* implicit */long long int) (short)10297))));
                                var_26 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_21 [i_2 - 2] [i_2] [i_2] [i_2 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16211)) || (((/* implicit */_Bool) arr_0 [i_0])))))) : (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) - (((arr_31 [i_0] [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_11] [i_10] [i_2 - 2] [i_11])))))))));
                                arr_38 [i_1] [i_1] |= ((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_0] [i_0] [i_2 - 2] [i_11] [i_0]);
                                var_27 = ((/* implicit */signed char) var_0);
                                arr_39 [i_11] [i_1] [i_2 - 2] [i_2 - 1] [i_11] = arr_37 [i_2];
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (signed char)126)))) ? (((/* implicit */unsigned long long int) var_7)) : (min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])), (var_12))))))));
            arr_43 [i_12] [i_12] = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_12]);
            var_29 = ((/* implicit */unsigned short) var_4);
            arr_44 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) var_3)), (max((var_2), (var_2))))), (((/* implicit */unsigned int) (!((_Bool)1))))));
        }
        /* LoopNest 3 */
        for (long long int i_13 = 1; i_13 < 11; i_13 += 2) 
        {
            for (short i_14 = 2; i_14 < 9; i_14 += 4) 
            {
                for (signed char i_15 = 4; i_15 < 9; i_15 += 1) 
                {
                    {
                        arr_55 [i_13 + 1] [i_14] [i_13 + 1] [i_15] [i_14] |= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_2)))))))));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (short)12288))));
                        arr_56 [i_14 + 3] [i_14] [i_14] [i_14] [i_14] [i_14 - 2] |= ((/* implicit */_Bool) min((((min((((/* implicit */unsigned int) arr_19 [i_0] [i_13 + 1] [i_0])), (4209774687U))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_10))))))), (((/* implicit */unsigned int) min((arr_46 [i_13] [i_13]), (arr_16 [i_0] [i_0] [i_13 - 1] [i_15] [i_15 - 4] [i_14]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (2562805280U)))) * (arr_59 [i_0] [i_0] [i_0] [i_0] [i_14] [i_0] [i_14]))), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) 1349537920)), (2370058319U))) / (((((/* implicit */_Bool) -1534466705)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_13] [i_15]))) : (var_0)))))))))));
                            var_32 = ((/* implicit */signed char) min((var_32), (arr_45 [i_13] [i_14])));
                        }
                    }
                } 
            } 
        } 
    }
}
