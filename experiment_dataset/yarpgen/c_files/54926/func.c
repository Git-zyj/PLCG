/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54926
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (arr_1 [i_0 - 1] [i_1 - 1]) : (((/* implicit */unsigned int) -457657319))))), (max((((/* implicit */long long int) arr_1 [i_0 + 1] [i_1 - 2])), (arr_0 [i_0 + 2])))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) ? (457657318) : (max((arr_10 [i_0 - 1] [i_0 + 3] [i_0 - 2]), (arr_10 [i_0 + 2] [i_0 + 2] [i_0 - 2])))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */long long int) min((var_13), (((/* implicit */unsigned int) arr_8 [i_1 + 2] [i_3] [i_1 + 2] [i_4]))));
                            arr_14 [i_1] [i_3] [i_3] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned char)36);
                            var_17 = ((/* implicit */short) arr_9 [i_4] [6LL] [i_3 - 1] [6LL] [6LL] [i_0]);
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            var_18 = ((((/* implicit */int) arr_2 [i_1 + 1])) * (((/* implicit */int) arr_2 [i_1 + 3])));
                            arr_18 [i_2] [i_2] [1ULL] [i_1] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((((/* implicit */_Bool) ((unsigned char) arr_16 [i_6] [i_2]))) ? (max((var_6), (-457657317))) : (((/* implicit */int) arr_7 [3U]))))));
                            arr_21 [i_1] [i_1] [i_3] [i_0] [i_6] &= ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
                        }
                        arr_22 [i_3 + 1] [(unsigned short)11] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) min((min((arr_12 [i_0 - 1] [i_0] [i_0 + 3] [10]), (((/* implicit */long long int) -457657323)))), (((/* implicit */long long int) (~(((/* implicit */int) (short)-128)))))));
                    }
                    for (int i_7 = 2; i_7 < 9; i_7 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) | (((/* implicit */int) (short)12625))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)69))) | (3758096384U))))) | (((/* implicit */unsigned int) (~(var_7))))));
                        var_21 *= ((/* implicit */short) -1);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_0] [(signed char)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (arr_10 [5] [i_0 - 2] [i_1 + 3]) : ((-(var_6)))));
                        arr_28 [i_8] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (~(arr_0 [i_0 - 1])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            var_22 = ((/* implicit */_Bool) ((long long int) var_8));
                            arr_31 [(signed char)4] [i_2] [5LL] [i_9] = (~(((/* implicit */int) arr_16 [i_1 + 2] [i_1 - 2])));
                            arr_32 [i_0] [i_0] [6LL] [i_0] [i_8] [i_9] &= ((/* implicit */unsigned long long int) (~(457657315)));
                            arr_33 [11] [i_0] [i_1 + 3] [11] [i_0] [11] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) -457657338)) || (((/* implicit */_Bool) 457657318))));
                        }
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_39 [i_0] [i_1 + 1] [i_2] [i_2] [i_11] = ((/* implicit */unsigned short) max(((~(min((((/* implicit */long long int) (short)2047)), (arr_25 [i_10] [i_10] [i_1 + 1] [i_0]))))), (((long long int) min((((/* implicit */signed char) arr_13 [i_2] [i_2])), ((signed char)93))))));
                            arr_40 [i_11] [i_11] [i_10] [i_10] [1LL] [(_Bool)1] [i_0] &= ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))), (((((1330770847U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) - (((/* implicit */unsigned int) arr_35 [i_0] [i_1] [6ULL] [i_10]))))));
                        }
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1676211983048592131LL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [i_0] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_10]))))) ? (arr_34 [(unsigned char)5]) : (((((/* implicit */_Bool) arr_0 [1U])) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (signed char)-107)))))) : (((/* implicit */int) ((max((((/* implicit */long long int) var_11)), (arr_12 [i_0] [i_0] [i_2] [i_10]))) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)113)))))))))));
                        arr_41 [i_10] [i_2] [i_2] [i_1] [4U] [i_0] = ((/* implicit */signed char) ((unsigned char) ((unsigned int) arr_2 [i_0 + 3])));
                        var_24 = ((signed char) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 - 1] [i_1 + 1])) ? (arr_10 [i_0 + 2] [i_0 - 1] [i_1 + 1]) : (arr_10 [i_0 + 3] [i_0 + 2] [i_1 - 2])));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned int) (!(arr_15 [i_0 + 3] [i_1] [i_1 - 2] [i_2] [i_12] [i_12]))))), (min((((/* implicit */long long int) var_14)), (((long long int) 641452029)))))))));
                        arr_46 [i_12] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        arr_49 [i_0] [i_1] [i_2] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (1330770847U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -457657319)) ? (((/* implicit */int) (unsigned short)62150)) : (((/* implicit */int) arr_20 [i_13] [i_1] [7U] [(unsigned char)2] [i_13] [i_2])))))))) ? (-9223372036854775802LL) : (((((long long int) var_1)) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((2U), (((/* implicit */unsigned int) 457657306))))) % (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_2]))) : (arr_44 [i_0] [i_1 - 2] [i_2] [i_13])))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)87)) >> (((var_7) + (1601622401))))), (((/* implicit */int) arr_16 [i_0] [i_0]))))) : (min((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) min((arr_6 [i_0] [i_0 + 1] [i_0 - 1]), (((/* implicit */unsigned short) arr_47 [(_Bool)1] [i_1] [(unsigned char)10]))))))))))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_29 [i_13]))))), (var_14))))));
                        arr_50 [11U] [11U] [(unsigned char)6] [i_13] [i_13] = ((/* implicit */unsigned short) ((arr_16 [i_0] [i_1]) ? (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (signed char)113))))), ((+((-2147483647 - 1))))))) : (min((max((-1LL), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) ((int) 5588447530596157411LL)))))));
                    }
                }
                for (int i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    var_28 = ((/* implicit */unsigned long long int) var_14);
                    var_29 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_48 [i_0 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_0 + 1])))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_15 = 3; i_15 < 9; i_15 += 3) 
                    {
                        arr_55 [i_14] = ((/* implicit */long long int) (signed char)123);
                        var_30 = ((/* implicit */unsigned char) arr_37 [i_0 - 1]);
                        arr_56 [0U] [i_1] = ((/* implicit */long long int) (+(-457657338)));
                        var_31 = ((/* implicit */unsigned int) ((int) (!((_Bool)1))));
                        arr_57 [i_0] [i_0] = ((/* implicit */unsigned char) (-((~(arr_12 [6] [i_1] [i_14] [6])))));
                    }
                    for (int i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        var_32 = ((/* implicit */long long int) var_5);
                        /* LoopSeq 1 */
                        for (short i_17 = 0; i_17 < 12; i_17 += 3) 
                        {
                            var_33 += ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0 - 2] [i_1 + 1] [i_0 - 2])) ? (((arr_9 [i_0 + 3] [i_0 + 3] [i_0 - 1] [i_0 + 2] [i_1 + 2] [i_17]) + (6160081636419506737ULL))) : (max((arr_9 [i_0] [i_0] [6ULL] [i_0 + 2] [i_1 + 1] [i_17]), (arr_9 [i_0] [(short)7] [i_0] [i_0 + 3] [i_1 + 1] [i_1])))));
                            arr_62 [i_17] [i_16] [i_14] [i_1] [i_17] = ((unsigned int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) ((unsigned char) var_10)))));
                        }
                        arr_63 [i_0 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_0] [i_1 - 1] [i_0] [i_16])) ? ((~(-9223372036854775786LL))) : (((/* implicit */long long int) min((-5), (((/* implicit */int) arr_47 [i_0] [i_1] [i_1 - 2])))))));
                        var_34 ^= ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) arr_24 [i_0 + 2] [i_16] [i_1 - 2] [i_0 + 2] [i_0])));
                    }
                }
                var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) arr_51 [i_0] [i_0] [i_1]))));
                var_36 = ((/* implicit */int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), (var_14)))))) || (((/* implicit */_Bool) ((int) 2737522744U)))));
            }
        } 
    } 
    var_37 = ((/* implicit */short) (unsigned short)65528);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) /* same iter space */
    {
        arr_66 [i_18] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_64 [i_18 - 1] [i_18 - 1])) : (((/* implicit */int) arr_64 [i_18 - 1] [i_18 - 1]))));
        var_38 = ((/* implicit */short) var_0);
        var_39 = ((((((/* implicit */int) arr_65 [i_18])) << (((((/* implicit */int) (short)32749)) - (32736))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_65 [i_18]))))));
        var_40 ^= ((/* implicit */unsigned int) ((unsigned char) (-(34359734272LL))));
    }
    /* vectorizable */
    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) /* same iter space */
    {
        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((long long int) ((((-7142116096436458569LL) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)1))))))));
        var_42 = ((/* implicit */int) ((unsigned char) arr_64 [i_19 - 1] [i_19 - 1]));
        arr_69 [(signed char)4] [(signed char)4] |= ((/* implicit */short) ((((/* implicit */_Bool) 1676211983048592131LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) : (((/* implicit */int) arr_65 [i_19 - 1]))));
        arr_70 [i_19] = ((/* implicit */signed char) ((((/* implicit */int) arr_65 [i_19 - 1])) / ((~(((/* implicit */int) arr_64 [i_19] [i_19]))))));
    }
    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) /* same iter space */
    {
        var_43 = ((/* implicit */long long int) ((((/* implicit */int) (((!(((/* implicit */_Bool) arr_65 [i_20])))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) var_14)))))))) + (((/* implicit */int) arr_71 [i_20]))));
        var_44 = ((/* implicit */unsigned int) (((~(((int) -17592186044416LL)))) ^ (max((arr_68 [i_20] [i_20 - 1]), ((~(((/* implicit */int) arr_64 [i_20] [12]))))))));
    }
}
