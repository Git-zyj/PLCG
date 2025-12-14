/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26149
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_18 = ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)5924))))) - (((arr_1 [i_0]) - (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))));
        arr_3 [i_0] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0 + 1]) : (((/* implicit */int) (short)30526)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) ((unsigned int) -1754255723));
            var_20 = ((/* implicit */signed char) arr_5 [i_1]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_3 = 1; i_3 < 19; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 2; i_4 < 21; i_4 += 1) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_9 [i_3]))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3 + 2])) ? (((/* implicit */unsigned int) 841166664)) : (0U)));
                }
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_4))));
            }
            var_24 ^= (-(((/* implicit */int) (unsigned char)245)));
        }
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
        {
            var_25 -= (-(((((/* implicit */int) (_Bool)0)) + ((+(((/* implicit */int) (unsigned char)24)))))));
            var_26 = ((/* implicit */long long int) ((((((unsigned int) var_6)) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) 524287LL)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (signed char)3))))))) - (((/* implicit */unsigned int) (((~(var_0))) ^ (arr_8 [i_1]))))));
            var_27 = ((/* implicit */unsigned char) arr_4 [i_5]);
            var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_11 [14U] [i_1] [(unsigned short)18] [i_5])))))));
            /* LoopNest 3 */
            for (signed char i_6 = 1; i_6 < 21; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (int i_8 = 3; i_8 < 21; i_8 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) ((signed char) (~(arr_13 [i_6] [(signed char)17] [i_8 - 1]))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_16 [i_6 + 1] [i_1])) / (((/* implicit */int) arr_5 [i_1]))))))) ? (min((-1043418672015619278LL), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((arr_4 [i_5]) % (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) > (((6598954415365990830LL) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))))))));
                            var_31 = ((/* implicit */int) var_4);
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
        {
            var_32 ^= ((/* implicit */unsigned short) max((max((arr_12 [i_1] [i_1] [i_9]), ((~(arr_17 [i_1] [i_1] [i_1] [i_1]))))), (((/* implicit */int) min((arr_15 [i_1] [i_9]), (arr_15 [i_1] [i_1]))))));
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                arr_28 [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 21U)))))) * (arr_20 [i_1] [(signed char)0] [i_9] [i_9])));
                /* LoopSeq 3 */
                for (unsigned int i_11 = 4; i_11 < 21; i_11 += 3) 
                {
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) arr_8 [i_1]))));
                    var_34 -= ((/* implicit */int) var_11);
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    var_35 = ((/* implicit */int) arr_21 [i_9] [i_9] [i_9] [i_9] [i_12]);
                    arr_33 [i_1] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) arr_23 [i_1] [10] [10] [i_12] [i_12]);
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        var_36 = (+(arr_8 [i_1]));
                        arr_37 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)74))));
                        arr_38 [i_1] [i_1] [i_9] [i_10] [i_9] [i_13] = ((/* implicit */signed char) arr_17 [i_1] [i_9] [i_10] [i_1]);
                        var_37 = ((/* implicit */signed char) 1525319303);
                    }
                    var_38 = ((/* implicit */short) ((arr_12 [i_10] [i_1] [i_1]) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_12] [i_10] [i_10] [(signed char)11] [i_1] [(signed char)11]))) <= (var_15))))));
                }
                for (signed char i_14 = 0; i_14 < 22; i_14 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_15 = 2; i_15 < 19; i_15 += 1) 
                    {
                        var_39 = ((/* implicit */int) min((var_7), (((/* implicit */unsigned int) (signed char)23))));
                        arr_47 [i_1] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_9 [i_9])) % (-2147483639))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                        var_40 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -3639012484309985012LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) -1321883935)) & (-757469335705189599LL)))) ? (arr_34 [i_15 + 3] [i_9] [i_15 - 1] [i_9] [i_15]) : (((/* implicit */long long int) (+(arr_12 [i_10] [i_1] [i_1])))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_31 [i_1] [i_1] [i_1] [(signed char)19])), (((((/* implicit */unsigned int) 1573026675)) | (arr_30 [i_9] [i_9] [i_15]))))))));
                    }
                    for (unsigned int i_16 = 1; i_16 < 21; i_16 += 3) 
                    {
                        arr_50 [2] [2] [i_9] [10U] [i_9] [i_16] [11U] = -1945089508;
                        arr_51 [i_16] [i_9] [i_14] [i_10] [i_9] [(short)0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_14 [i_16 + 1])) ? (arr_8 [i_9]) : (((/* implicit */int) arr_31 [i_1] [i_9] [i_10] [21U])))), (((((((/* implicit */_Bool) -9223372036854775801LL)) ? (var_0) : (((/* implicit */int) (unsigned short)42775)))) ^ ((~(((/* implicit */int) var_2))))))));
                    }
                    for (int i_17 = 1; i_17 < 20; i_17 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))), (max((((/* implicit */unsigned int) var_0)), (531402947U)))))));
                        arr_55 [i_9] [i_14] [i_1] [i_1] [i_9] = ((/* implicit */short) var_9);
                    }
                    var_42 = ((/* implicit */unsigned int) var_16);
                }
            }
            var_43 = ((/* implicit */int) min((var_43), (((((((/* implicit */_Bool) (unsigned char)152)) ? (-1971450863) : (((/* implicit */int) (short)32753)))) % ((((_Bool)1) ? (((/* implicit */int) (signed char)9)) : (-2072726978)))))));
        }
        for (unsigned int i_18 = 0; i_18 < 22; i_18 += 3) /* same iter space */
        {
            var_44 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (max((((/* implicit */unsigned long long int) arr_16 [i_1] [i_1])), (arr_40 [i_18] [5] [i_18] [(short)5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6)))));
            arr_59 [i_18] [i_18] [i_18] = ((/* implicit */signed char) ((((arr_21 [4] [4] [i_18] [i_18] [i_18]) || (arr_21 [4U] [i_18] [i_18] [i_18] [i_18]))) ? ((~(((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) (signed char)15))));
            arr_60 [i_18] [i_18] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -1992270579))))) && (((/* implicit */_Bool) min((((/* implicit */int) arr_22 [i_1] [i_18] [i_1] [i_1])), (var_0)))))) || (((/* implicit */_Bool) 2523619316676170147LL))));
        }
        var_45 ^= ((int) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) (unsigned short)49736)) : (((/* implicit */int) arr_15 [13U] [0]))))));
        /* LoopSeq 1 */
        for (long long int i_19 = 0; i_19 < 22; i_19 += 1) 
        {
            arr_63 [i_19] [i_19] = (-(((((/* implicit */long long int) ((/* implicit */int) var_6))) - (min((((/* implicit */long long int) 805306368U)), (arr_34 [i_1] [i_19] [i_1] [i_19] [i_19]))))));
            var_46 = ((/* implicit */int) (signed char)48);
            arr_64 [i_19] [i_19] = 4294967273U;
            var_47 = ((/* implicit */signed char) min((var_47), (var_12)));
            /* LoopNest 2 */
            for (short i_20 = 4; i_20 < 20; i_20 += 2) 
            {
                for (short i_21 = 0; i_21 < 22; i_21 += 1) 
                {
                    {
                        arr_69 [i_19] [i_19] [i_20] [i_19] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_7)))) ? (max((var_15), (((/* implicit */long long int) arr_41 [i_19] [i_19] [i_20 - 3] [i_21] [i_19] [i_19])))) : (((/* implicit */long long int) var_0)))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_22 [i_20 - 1] [i_20 - 3] [i_20 - 1] [i_20 - 1])) : (((601390247) + (((/* implicit */int) var_13)))))))));
                        /* LoopSeq 3 */
                        for (signed char i_22 = 0; i_22 < 22; i_22 += 2) 
                        {
                            arr_74 [i_20] [i_19] [10U] [i_19] [i_19] [i_22] = (!(((((/* implicit */_Bool) (signed char)57)) || (((/* implicit */_Bool) arr_68 [(short)1] [i_19] [(short)1] [(short)1])))));
                            arr_75 [i_22] [i_21] [i_19] [(signed char)8] [i_19] [i_1] [8U] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_43 [i_19] [i_20 - 2] [(_Bool)1] [i_20 - 2] [i_20 - 2] [i_20 - 2] [i_20 - 2])) ? (1214420419) : (((/* implicit */int) arr_43 [i_1] [i_19] [17U] [i_19] [i_19] [i_1] [i_20 - 4])))) + (var_10)));
                            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (arr_52 [i_19] [i_20 + 1] [i_20 - 1] [i_21] [i_22] [i_20 + 1])))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1429530166U)) ? (-734736081) : (((/* implicit */int) (unsigned char)218))))) && ((!(((/* implicit */_Bool) (unsigned short)65535))))))));
                            var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) var_17))));
                            arr_76 [i_1] [i_19] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)56)) && (((/* implicit */_Bool) (signed char)0))));
                        }
                        /* vectorizable */
                        for (unsigned short i_23 = 4; i_23 < 20; i_23 += 3) /* same iter space */
                        {
                            var_50 = ((/* implicit */short) arr_5 [i_1]);
                            arr_79 [i_1] [17U] [i_19] [15] [i_23 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_20 - 4] [i_19] [i_23 - 1] [8U])) ? (((/* implicit */long long int) var_0)) : (arr_42 [i_19])));
                            var_51 = ((/* implicit */int) ((signed char) (~(var_15))));
                            var_52 = ((/* implicit */short) arr_19 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_23 + 2]);
                            var_53 = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-75))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9478))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3)))));
                        }
                        for (unsigned short i_24 = 4; i_24 < 20; i_24 += 3) /* same iter space */
                        {
                            var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) arr_34 [(short)12] [i_1] [i_21] [i_21] [i_21]))));
                            var_55 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_16 [i_19] [i_20 + 2])) : (((/* implicit */int) var_4)))));
                            arr_82 [i_1] [i_19] [i_19] [i_1] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)15154)) - (((/* implicit */int) (short)-30087))));
                            var_56 = (~(((/* implicit */int) var_9)));
                            arr_83 [i_1] [i_1] [(unsigned short)16] &= ((/* implicit */int) (+((-(3237466605907513805LL)))));
                        }
                        var_57 = (-((((-(((/* implicit */int) var_4)))) % (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) <= (var_14)))))));
                        var_58 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_54 [i_1] [i_19] [i_19] [i_20 - 4] [i_21])) + (min((1949313293), (((/* implicit */int) (signed char)44))))))) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) (signed char)-69))))));
                    }
                } 
            } 
        }
        arr_84 [i_1] = max(((~(8257536))), (((/* implicit */int) (short)-32740)));
        var_59 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_13 [i_1] [i_1] [i_1]) - (var_15))) + (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? (var_15) : (((/* implicit */long long int) (+(arr_62 [i_1] [i_1]))))));
    }
    var_60 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_2)))) && ((!(((/* implicit */_Bool) max((var_10), (((/* implicit */int) var_12)))))))));
}
