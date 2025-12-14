/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226776
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_0)))) && (((/* implicit */_Bool) 6875134585336873433ULL))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((unsigned int) 1ULL));
        var_15 = ((/* implicit */short) arr_1 [i_0]);
        arr_5 [i_0] [i_0] = arr_2 [i_0] [i_0];
    }
    for (unsigned short i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                {
                    arr_16 [i_1 - 2] [i_2] [i_3 - 1] = ((/* implicit */unsigned char) max((var_2), (((/* implicit */short) ((((/* implicit */_Bool) ((18446744073709551614ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22127)))))) && (((/* implicit */_Bool) (unsigned char)13)))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned char)81), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_14 [i_1] [(unsigned short)10] [i_1])))))))) ? (((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 - 2]))) : (140737454800896ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) arr_11 [i_3 - 1] [i_2 + 1]))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */signed char) arr_6 [i_1]);
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) var_1);
                    arr_23 [i_1] [i_4] [i_4] [i_1] = ((unsigned long long int) max((arr_22 [i_1 - 2] [i_1]), ((unsigned char)64)));
                }
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (min((max((18446603336254750719ULL), (((/* implicit */unsigned long long int) (unsigned char)175)))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-15279)) + (2147483647))) >> (((4049673756U) - (4049673744U)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))))))));
        arr_26 [i_6] |= ((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 17; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_9 = 1; i_9 < 14; i_9 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            arr_36 [i_6] [i_9] [i_8] [(unsigned short)3] [i_10] = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (unsigned short)8)) | (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_2)));
                            var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_6] [i_6] [18] [i_8])) - (-1862553766)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)61650)));
                            arr_37 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)153)))));
                        }
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) 252201579132747776ULL))));
                        var_22 |= ((/* implicit */long long int) arr_28 [i_6]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_11 = 0; i_11 < 18; i_11 += 2) 
                        {
                            var_23 = ((/* implicit */short) arr_32 [i_9] [i_7 - 3] [i_11]);
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_6] [i_6] [i_7 - 2])) : (((/* implicit */int) arr_9 [i_6] [i_7 - 3] [i_7 - 3]))));
                            arr_41 [i_7] [i_8] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 18446744073709551614ULL))) && (((/* implicit */_Bool) ((long long int) (_Bool)1)))));
                        }
                    }
                    for (signed char i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) min((((((((/* implicit */_Bool) (unsigned char)179)) || (((/* implicit */_Bool) 4049673756U)))) ? (((((/* implicit */_Bool) arr_34 [i_6] [i_7] [i_8] [(_Bool)1] [i_7])) ? (1862553765) : (((/* implicit */int) arr_24 [i_6] [i_7 + 1])))) : (max((((/* implicit */int) arr_31 [i_7] [i_8] [i_8])), (-1330426020))))), (((((/* implicit */int) arr_11 [i_8] [i_7 - 1])) - (((/* implicit */int) arr_11 [i_12] [i_7 + 1])))))))));
                        var_26 += ((/* implicit */unsigned short) ((min(((~(-1552980089))), (67076096))) & (((((/* implicit */int) arr_25 [i_7 + 1])) << (((((/* implicit */int) arr_25 [i_7 - 1])) - (183)))))));
                    }
                    for (signed char i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) max((1862553765), (((((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (_Bool)1)) : (var_0))) << (((((/* implicit */int) (signed char)-33)) + (46)))))));
                        arr_49 [(unsigned short)1] [i_7 - 3] [i_8] [i_8] [i_13] [i_6] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -1330426026)) ? (((/* implicit */int) var_8)) : (-1330426020)))));
                        /* LoopSeq 3 */
                        for (unsigned char i_14 = 2; i_14 < 16; i_14 += 1) 
                        {
                            arr_52 [i_6] [i_7 - 2] [i_7 - 2] [i_13] [i_14] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned char) arr_32 [i_6] [i_13] [i_14 + 1]))) ? (max((-1862553766), (((/* implicit */int) arr_39 [i_14 + 2] [i_13] [i_7 + 1] [i_6])))) : (((/* implicit */int) max(((short)-30321), (((/* implicit */short) arr_10 [i_6] [i_7] [(unsigned char)9]))))))) >> (((/* implicit */int) arr_10 [i_6] [i_13] [7U]))));
                            arr_53 [i_6] [i_7 - 2] [i_8] = ((/* implicit */signed char) min(((+(((/* implicit */int) var_7)))), (arr_50 [i_14 + 2] [i_13] [i_8] [i_6])));
                        }
                        for (int i_15 = 2; i_15 < 14; i_15 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)88)) != (((/* implicit */int) var_5))));
                            arr_56 [i_6] [i_8] [i_6] [i_6] [i_6] |= ((/* implicit */int) ((((/* implicit */_Bool) max((max((arr_47 [i_15 + 3] [i_8] [i_7] [i_6]), (((/* implicit */int) arr_55 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))), (((/* implicit */int) (_Bool)1))))) ? ((+(33776997205278720ULL))) : (min((((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) arr_15 [i_7 - 1] [i_7 - 1] [i_13] [i_7 - 1]))))));
                            var_29 = ((((/* implicit */_Bool) ((short) arr_46 [i_7 + 1] [i_15 + 3] [10ULL] [i_15 - 2]))) ? (((((/* implicit */int) arr_46 [i_7 - 3] [i_15 + 2] [i_15 + 4] [i_15])) - (((/* implicit */int) arr_46 [i_7 - 2] [i_15 + 3] [i_15 + 3] [i_15 + 1])))) : (((((/* implicit */int) arr_46 [i_7 - 3] [i_15 + 3] [i_15] [i_15])) - (((/* implicit */int) var_10)))));
                            arr_57 [i_6] [i_15] [i_6] [i_15 + 1] [(short)16] = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) arr_31 [i_7 + 1] [i_15 - 2] [i_15])))));
                        }
                        for (unsigned char i_16 = 1; i_16 < 17; i_16 += 2) 
                        {
                            var_30 = ((/* implicit */_Bool) 2986638370515331526ULL);
                            var_31 |= ((/* implicit */unsigned char) 0LL);
                            arr_62 [i_16] [i_6] [i_7] [i_13] [i_16 - 1] = max((min((((var_9) ? (arr_8 [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_6] [i_6] [i_8] [7U] [i_13] [i_16 + 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)6048)) : (-524898805)))))), (((/* implicit */long long int) min((arr_47 [i_7 - 2] [i_16 - 1] [i_16 - 1] [i_16 - 1]), (arr_47 [i_7 - 2] [i_16 - 1] [7ULL] [i_16 - 1])))));
                        }
                        arr_63 [i_6] [i_8] [i_8] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)28)))))) : (arr_18 [i_6] [i_7 + 1] [i_7 - 3])))) / ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_6] [i_7 + 1]))) : (var_1)))));
                    }
                    arr_64 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_8] = ((/* implicit */int) var_13);
                    arr_65 [i_6] [i_6] [i_6] = ((/* implicit */short) (unsigned char)86);
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)11)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_17 = 4; i_17 < 15; i_17 += 2) 
        {
            for (unsigned char i_18 = 0; i_18 < 18; i_18 += 2) 
            {
                {
                    arr_71 [i_6] [i_6] [i_17] = ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) arr_29 [i_6] [i_17] [i_17 - 4])) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) arr_29 [(unsigned short)5] [(unsigned short)5] [i_17 - 4])))) : ((+(((/* implicit */int) arr_29 [6ULL] [(_Bool)1] [i_17 + 1]))))));
                    var_33 += ((((/* implicit */_Bool) min((max((arr_8 [i_6]), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_17] [i_17 - 1] [i_17 - 1] [i_18] [i_6] [i_17 - 1])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) min(((~(((/* implicit */int) (signed char)-21)))), (((((/* implicit */int) arr_39 [i_6] [i_17] [i_17 + 2] [i_18])) >> (1)))))) : (((long long int) ((((/* implicit */int) (signed char)6)) << (((/* implicit */int) var_9))))));
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */long long int) var_0)) & (var_1))), (((/* implicit */long long int) arr_42 [i_17] [i_17 - 4] [i_17 + 1] [i_17]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_51 [i_6] [i_6] [i_6] [i_18] [i_18])))))) : (-3345208077566672974LL)));
                    /* LoopNest 2 */
                    for (int i_19 = 4; i_19 < 17; i_19 += 2) 
                    {
                        for (short i_20 = 1; i_20 < 16; i_20 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned int) arr_10 [i_6] [i_18] [i_19]);
                                arr_78 [(signed char)7] [i_17 - 3] [i_18] [i_19 - 1] [i_20] [i_20] [i_17 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((33776997205278750ULL), (((/* implicit */unsigned long long int) (signed char)-127)))), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_27 [(short)17] [i_19])), (var_8))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_55 [(unsigned short)17] [i_19 + 1] [i_19 + 1] [(unsigned short)17] [i_19 - 3] [i_19])) >= (((/* implicit */int) (unsigned char)239)))))) : (min((min((1004493201460917486LL), (((/* implicit */long long int) arr_67 [i_20 - 1])))), (((/* implicit */long long int) ((signed char) var_5)))))));
                                arr_79 [7LL] [i_17] [7LL] |= ((/* implicit */unsigned int) min((max((((/* implicit */int) var_9)), (min((((/* implicit */int) var_8)), (arr_21 [i_6] [i_17 + 1] [i_18]))))), (max((((/* implicit */int) arr_33 [i_17 + 2] [i_17 + 2] [i_17 - 1] [i_17] [i_17 - 2] [i_6])), (((((/* implicit */int) (short)8)) << (((var_12) - (3874009350U)))))))));
                                var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) min(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) ((long long int) var_12))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2147483633))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)21979))))))))))));
                                arr_80 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_6] [i_17 - 1]))))) ? (max(((((_Bool)1) ? (1090563408) : (-1090563408))), (((/* implicit */int) arr_68 [i_6] [i_20])))) : (-1090563431)));
                            }
                        } 
                    } 
                    arr_81 [i_6] [i_6] [i_18] |= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (signed char)83)), ((~(16648163118278716877ULL))))), (((/* implicit */unsigned long long int) ((((var_9) ? (((/* implicit */unsigned int) arr_54 [i_6] [i_17] [9U] [(_Bool)1] [i_6])) : (arr_44 [i_6] [8U] [i_6] [i_18]))) | (((/* implicit */unsigned int) arr_28 [i_17 - 4])))))));
                }
            } 
        } 
        var_37 = ((/* implicit */short) min((((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))) - (16648163118278716863ULL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (520192) : (((/* implicit */int) var_13)))))));
    }
}
