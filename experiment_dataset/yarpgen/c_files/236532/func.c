/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236532
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_10 = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0]))));
        var_11 = ((/* implicit */int) ((short) max((((((/* implicit */_Bool) (short)23822)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (8676059756887968884LL))), (((/* implicit */long long int) var_6)))));
        arr_3 [i_0] [(unsigned short)0] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) + (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (5ULL)))));
        var_12 = ((/* implicit */short) arr_0 [i_0] [i_0]);
        var_13 = ((/* implicit */int) 8676059756887968880LL);
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_2 [i_1])), ((+(arr_7 [i_3] [i_3] [(signed char)3]))))) >= ((+(arr_7 [i_1] [i_2] [i_3])))));
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((var_5), (arr_4 [i_2]))))));
                        var_16 = (((+((+(((/* implicit */int) var_2)))))) ^ (((/* implicit */int) (unsigned char)31)));
                    }
                    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        arr_16 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (((18446744073709551613ULL) % (arr_7 [i_3] [i_2] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                        /* LoopSeq 4 */
                        for (signed char i_6 = 3; i_6 < 10; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_12 [i_1] [(signed char)2] [(signed char)2] [(signed char)2] [i_5] [i_6])), (((long long int) min((((/* implicit */unsigned long long int) (signed char)0)), (arr_7 [i_1] [(short)7] [i_6 - 1]))))));
                            var_18 |= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((_Bool) min((8676059756887968884LL), (((/* implicit */long long int) (signed char)28)))))), (max((min((8676059756887968900LL), (((/* implicit */long long int) (unsigned char)35)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) arr_11 [i_5] [i_5])))))))));
                            var_19 *= ((/* implicit */signed char) arr_18 [i_1] [i_3] [4] [i_6 - 3]);
                            arr_20 [i_6] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)128))));
                            arr_21 [i_1] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
                        }
                        for (int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) arr_9 [(signed char)11] [(signed char)11] [i_2] [i_2]))))))))))));
                            var_21 += ((/* implicit */unsigned int) ((arr_10 [i_1] [i_2] [i_1] [i_1]) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (58720256LL) : (arr_14 [i_1] [i_2])))) ? (arr_22 [i_7] [i_2] [i_3] [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))));
                            var_22 |= ((/* implicit */short) (+(arr_24 [i_1] [i_1] [i_7])));
                        }
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            arr_27 [i_8] [i_2] [i_8] [i_5] [(unsigned short)5] [(unsigned short)0] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 1312947299U)) || (((/* implicit */_Bool) var_1))))))))));
                            var_23 += ((/* implicit */int) (unsigned short)0);
                            arr_28 [i_1] [i_8] [i_3] [i_1] [i_8] = ((/* implicit */unsigned short) max((arr_6 [i_1] [i_1]), (((/* implicit */unsigned int) ((signed char) (_Bool)1)))));
                            var_24 = ((/* implicit */unsigned char) (~(((arr_9 [i_8 - 1] [i_8 - 1] [i_8 - 1] [11U]) ? (((/* implicit */int) arr_9 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8])) : (((/* implicit */int) (_Bool)1))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_25 = (+(((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)123), (((/* implicit */unsigned char) var_7)))))))));
                            var_26 = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_6)) ? (889787115076816213ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))))))));
                            var_27 = ((/* implicit */unsigned int) ((_Bool) arr_26 [i_9] [i_9] [i_5] [i_3] [i_2] [i_1]));
                            var_28 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned char) arr_2 [i_1]))), (((2998003777994488977LL) >> (((max((((/* implicit */unsigned int) (unsigned char)101)), (1312947299U))) - (1312947265U)))))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_10 = 1; i_10 < 8; i_10 += 2) 
                        {
                            var_29 |= ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), ((unsigned short)42514)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_14 [i_3] [i_5]) >> (((/* implicit */int) (unsigned char)61))))) ? (((/* implicit */int) ((_Bool) var_5))) : ((~(((/* implicit */int) (signed char)(-127 - 1)))))))) : (((arr_6 [i_10 + 4] [i_10 + 3]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
                            var_30 = ((/* implicit */signed char) (unsigned char)117);
                        }
                        for (short i_11 = 2; i_11 < 11; i_11 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) arr_15 [i_11 + 1] [i_11 - 2] [i_11 - 2] [i_11] [i_11 - 2] [i_11])))));
                            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) (unsigned char)0)))));
                            arr_37 [i_11] [(signed char)10] [i_3] [i_5] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)243)) ^ (((/* implicit */int) (_Bool)1))));
                            var_33 = ((/* implicit */int) ((unsigned int) var_3));
                        }
                    }
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        var_34 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8)))) * (18446744073709551615ULL));
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 1569332849)) * (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [(unsigned short)3]))))) / (arr_26 [i_1] [i_2] [i_2] [i_2] [i_2] [i_12])))));
                        arr_40 [i_1] [i_2] [0] [i_1] = ((/* implicit */unsigned int) ((max((max((((/* implicit */unsigned long long int) arr_32 [i_12] [i_2])), (arr_22 [i_1] [i_2] [i_3] [i_1] [i_2]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_17 [i_3] [i_3] [(unsigned char)0])), (7425093597607573932LL)))))) >= (((/* implicit */unsigned long long int) arr_14 [i_1] [i_1]))));
                    }
                    var_36 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_4 [(unsigned short)7])), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-32756)), (2076279590U)))) ? (((/* implicit */unsigned long long int) (+(1351285404U)))) : (arr_10 [i_3] [i_3] [i_3] [i_3])))));
                    arr_41 [i_2] [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) arr_14 [i_2] [i_1])))))), (var_4)));
                }
            } 
        } 
        arr_42 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_1]))));
        var_37 -= max((arr_10 [i_1] [(signed char)3] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    for (int i_13 = 3; i_13 < 12; i_13 += 1) 
    {
        var_38 = ((/* implicit */unsigned int) (~(((arr_0 [(unsigned short)2] [i_13 - 1]) & (((/* implicit */int) arr_44 [i_13 + 3]))))));
        var_39 = ((/* implicit */int) (_Bool)1);
    }
    var_40 = ((/* implicit */short) var_5);
    var_41 = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)188))))))));
}
