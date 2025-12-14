/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32335
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
    for (signed char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        var_11 *= (_Bool)0;
        arr_3 [i_0] = ((/* implicit */long long int) (_Bool)1);
    }
    for (int i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        var_12 = ((/* implicit */long long int) arr_0 [i_1 + 2]);
        arr_7 [i_1] = ((/* implicit */_Bool) arr_0 [(signed char)23]);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 2; i_3 < 15; i_3 += 3) 
            {
                arr_12 [i_3] [i_2] = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) (unsigned short)1868)) ? (var_8) : (arr_5 [i_2] [i_3])))) ? (((((/* implicit */_Bool) (short)5359)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_4))))) : ((((_Bool)1) ? (var_1) : (((/* implicit */long long int) var_0)))))) : (((long long int) max((8191LL), (((/* implicit */long long int) (unsigned short)23)))))));
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)14331)) ? (((/* implicit */int) (_Bool)0)) : (var_0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7155)) ? (var_1) : (((/* implicit */long long int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)49)), (arr_4 [(unsigned short)10] [(_Bool)1]))))) : (max((((/* implicit */unsigned int) arr_1 [i_1 + 1] [i_2])), (var_9))))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_2] [i_3])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                var_14 = ((/* implicit */int) (short)5921);
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_10 [i_2])), (var_0)))) ? (((((/* implicit */_Bool) (signed char)6)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-99))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) (unsigned char)130))))) : (1896432190641449587LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_6)))))));
                var_16 = ((((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)14)) ? (var_7) : (((/* implicit */int) arr_11 [i_2] [(unsigned char)4] [i_4])))), (((/* implicit */int) (unsigned short)14431))))) & (arr_8 [i_4] [i_2] [i_1 + 1]));
            }
            var_17 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) min(((signed char)127), (((/* implicit */signed char) arr_13 [(unsigned short)2] [i_1] [i_2] [i_2])))))))));
        }
        var_18 = ((/* implicit */int) arr_9 [i_1 + 2] [(signed char)7] [(unsigned short)12]);
    }
    for (long long int i_5 = 3; i_5 < 11; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 3; i_7 < 10; i_7 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_9 = 1; i_9 < 11; i_9 += 3) /* same iter space */
                        {
                            arr_27 [i_5 - 1] [i_6 - 1] [i_7 + 2] [i_7] [i_5] [i_8] [i_6] = min((((/* implicit */long long int) min((-1), (((/* implicit */int) arr_24 [i_6 - 1] [i_7 + 1]))))), ((~(arr_18 [i_7 - 2]))));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_2))));
                        }
                        /* vectorizable */
                        for (long long int i_10 = 1; i_10 < 11; i_10 += 3) /* same iter space */
                        {
                            arr_30 [i_5] [(short)8] [i_7 - 3] [(short)8] [i_6 - 1] |= ((/* implicit */_Bool) ((((/* implicit */int) arr_23 [(unsigned char)6] [i_10 - 1] [i_8] [(unsigned char)6])) >> (((((/* implicit */int) arr_23 [(signed char)8] [i_10 + 1] [i_8] [(signed char)8])) - (58)))));
                            arr_31 [i_5] [i_6] [i_7 + 1] [i_8] [i_10] = ((/* implicit */long long int) (+((~(((/* implicit */int) var_2))))));
                        }
                        for (long long int i_11 = 1; i_11 < 11; i_11 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */long long int) var_0);
                            arr_35 [i_5] [i_6] [i_7 - 2] [i_8] [8U] = ((((((/* implicit */int) var_4)) != (arr_25 [i_6 - 1] [i_7 - 1] [i_7] [i_7] [i_8] [i_8] [i_11]))) ? ((+(((/* implicit */int) arr_9 [i_6 - 1] [i_7 + 1] [i_8])))) : (((arr_28 [i_6 - 1] [i_7 - 3] [i_7 - 1]) ? (((/* implicit */int) arr_28 [i_6 - 1] [i_7 - 3] [i_7])) : (((/* implicit */int) arr_28 [i_6 - 1] [i_7 - 3] [i_7 - 3])))));
                        }
                        var_21 -= ((/* implicit */signed char) arr_13 [i_5 - 1] [i_7 - 2] [i_8] [i_8]);
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_23 [i_5 - 2] [8LL] [(short)0] [10]))));
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_23 -= ((/* implicit */int) ((long long int) arr_33 [i_6 - 1] [(signed char)10] [(signed char)10] [i_6 - 1] [i_6 - 1]));
                            var_24 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (signed char)7)), ((-(-6291782791029484170LL)))));
                            arr_39 [7] [i_6 - 1] [i_7 + 2] [1] [i_5] = ((/* implicit */signed char) max(((~(arr_6 [i_8]))), (((/* implicit */long long int) var_4))));
                            arr_40 [i_5] [i_6 - 1] [i_6 - 1] [i_7] [i_5] [i_7] [i_6 - 1] = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_2))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */int) (signed char)112)) >> (((1048788404U) - (1048788383U))))) > (((/* implicit */int) ((_Bool) arr_41 [i_5] [i_5] [i_5] [i_5])))))) ^ (((/* implicit */int) max((arr_37 [i_6 - 1] [i_5 - 3] [i_7 - 3] [i_13 + 1] [0U]), (arr_13 [i_6 - 1] [i_5 - 3] [i_7 - 2] [i_13 + 1])))))))));
                            var_26 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 1932226265)) ? (-2147483636) : (((/* implicit */int) (signed char)56)))), (((/* implicit */int) min((arr_32 [i_13 + 1] [i_6 - 1] [i_6] [i_6 - 1] [i_5 + 1]), (arr_32 [i_13 + 1] [i_6 - 1] [i_5] [5LL] [i_5 + 1]))))));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((_Bool) max((arr_17 [i_5 - 3]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_34 [i_5] [2LL] [i_5 - 3])))))))))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) arr_26 [i_13] [(unsigned short)6] [i_5] [i_8] [i_5] [i_8] [3])) : (((/* implicit */int) (unsigned short)20840))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)0))));
                        }
                    }
                    arr_44 [i_5] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_29 [i_5 - 1] [i_7])) ? (275500547124810779LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))), ((~(var_9)))));
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        for (unsigned char i_15 = 3; i_15 < 8; i_15 += 3) 
                        {
                            {
                                arr_50 [i_5 - 3] [10] [i_6] [6U] [i_6] [i_5] = ((/* implicit */long long int) min((((/* implicit */int) (short)3468)), (arr_36 [i_5] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_7 - 3] [i_14] [i_7 - 3])));
                                var_29 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_5] [(unsigned short)6] [i_14])) : (((/* implicit */int) arr_47 [i_15] [(signed char)4] [i_5] [i_6] [i_5] [i_5]))))))));
                                var_30 = min((((((/* implicit */long long int) max((((/* implicit */unsigned int) 518884182)), (var_9)))) != (max((((/* implicit */long long int) (signed char)14)), (arr_5 [(unsigned char)8] [(unsigned char)8]))))), (var_5));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) (_Bool)1)))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_32 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_5 - 1] [i_16] [i_16] [i_5 - 2] [i_5])) ? (((/* implicit */int) (unsigned short)41163)) : (((/* implicit */int) arr_32 [i_5 - 3] [i_5 - 3] [9LL] [i_16] [i_16]))));
            arr_53 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_5 - 2] [i_5] [i_5 - 2])) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_9 [1U] [i_5 - 3] [i_16]))));
            /* LoopSeq 2 */
            for (unsigned int i_17 = 1; i_17 < 11; i_17 += 3) 
            {
                var_33 = ((/* implicit */signed char) (~(((/* implicit */int) arr_43 [i_17 - 1] [i_16] [i_16] [i_5] [i_5 - 2]))));
                /* LoopSeq 3 */
                for (unsigned int i_18 = 0; i_18 < 12; i_18 += 3) 
                {
                    var_34 = ((/* implicit */unsigned int) ((arr_47 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 + 1] [i_17 + 1] [i_17 - 1]) ? (((((/* implicit */_Bool) var_7)) ? (var_8) : (134217727LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                    arr_59 [i_5] = ((/* implicit */signed char) (~(arr_19 [i_17 + 1] [i_5] [i_5 + 1])));
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    arr_62 [i_5] [i_5] [i_5] [i_19] = ((/* implicit */unsigned short) ((unsigned char) (~(552501024))));
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 3; i_20 < 10; i_20 += 3) 
                    {
                        var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                        var_36 = ((/* implicit */int) (_Bool)1);
                        var_37 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_43 [i_5] [i_5] [i_5 - 1] [i_17 + 1] [i_20 - 3]))));
                    }
                }
                for (int i_21 = 1; i_21 < 10; i_21 += 4) 
                {
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) / (var_7)));
                    var_39 -= ((arr_19 [i_5 - 2] [(_Bool)1] [i_17 + 1]) < (arr_19 [i_5 - 3] [(signed char)2] [i_17 + 1]));
                    /* LoopSeq 2 */
                    for (signed char i_22 = 3; i_22 < 9; i_22 += 2) 
                    {
                        var_40 = ((/* implicit */_Bool) var_7);
                        var_41 = ((/* implicit */unsigned short) var_0);
                        var_42 = ((((/* implicit */_Bool) arr_22 [i_21 + 2] [(_Bool)1] [i_21 + 1] [i_21 + 2])) ? (arr_8 [i_5 - 1] [i_17 + 1] [i_21 - 1]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_21 - 1]))))));
                    }
                    for (short i_23 = 4; i_23 < 10; i_23 += 2) 
                    {
                        arr_72 [i_17] [i_5] = ((/* implicit */_Bool) ((short) arr_18 [i_5 + 1]));
                        var_43 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_71 [i_5] [i_5 + 1] [i_23] [i_23 - 3]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_24 = 1; i_24 < 9; i_24 += 2) 
                    {
                        arr_76 [i_5] [8] [i_5] [i_17 + 1] [i_21 - 1] [i_24] = ((/* implicit */long long int) (+(var_3)));
                        var_44 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
                        var_45 = ((/* implicit */long long int) ((unsigned short) 1720093700U));
                    }
                    arr_77 [i_5] [i_16] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
                }
            }
            for (long long int i_25 = 1; i_25 < 10; i_25 += 3) 
            {
                var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((long long int) arr_75 [i_5 - 2] [i_5])))));
                arr_80 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_5 + 1] [i_5 - 3])) || (((/* implicit */_Bool) (unsigned short)7918))));
            }
            var_47 = ((/* implicit */unsigned int) (unsigned short)7356);
        }
        var_48 *= ((/* implicit */_Bool) 1089213579);
        var_49 = ((/* implicit */unsigned char) arr_74 [(unsigned char)2] [(unsigned char)2] [(unsigned char)2]);
    }
    var_50 = ((long long int) var_0);
    var_51 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (short i_26 = 3; i_26 < 10; i_26 += 2) 
    {
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            {
                arr_85 [i_26 - 3] [i_27] |= ((/* implicit */int) var_6);
                var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_38 [i_26 - 2] [(signed char)8] [i_26] [i_26 - 1] [(unsigned short)0] [i_26 - 3]))))) ? ((~(((/* implicit */int) var_10)))) : ((~(((/* implicit */int) arr_38 [i_26 - 2] [i_26 - 1] [i_27] [i_27] [i_27] [i_27]))))));
            }
        } 
    } 
    var_53 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) var_7))) % (min((((/* implicit */int) var_10)), (1795204364)))))) ? (var_8) : (((/* implicit */long long int) ((((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_6)))) / (((/* implicit */int) var_10)))))));
}
