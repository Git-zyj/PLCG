/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202371
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
    var_18 = ((/* implicit */short) var_3);
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)35))))) ? (((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) (unsigned short)13390)) : (((/* implicit */int) (unsigned char)132)))) : (((/* implicit */int) max((var_15), (((/* implicit */unsigned char) var_14)))))))) && (((/* implicit */_Bool) (unsigned char)160)));
    var_20 = ((/* implicit */_Bool) (-(min((((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_2))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-14011)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((arr_0 [i_0]), (arr_1 [i_0])))))) ? (arr_1 [i_1]) : (min((var_17), (arr_1 [i_0 - 3])))));
            arr_4 [i_0 + 1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) && (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
            var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1286119343U) | (arr_0 [i_0])))) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) var_6))));
            arr_7 [i_2] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_15))))));
            var_24 = ((/* implicit */signed char) var_17);
        }
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            var_25 += ((/* implicit */short) (+((-(((/* implicit */int) ((_Bool) arr_5 [i_0] [i_0 + 1])))))));
            var_26 = ((/* implicit */signed char) max((max((arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 3]))), (((((/* implicit */_Bool) 4294967284U)) ? (arr_10 [i_0 - 3] [i_0 + 1] [i_0 - 1]) : (arr_10 [i_0 - 3] [i_0 - 2] [i_0 - 3])))));
            arr_12 [i_0] [i_3] [i_0] = ((/* implicit */short) var_12);
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_4 = 1; i_4 < 8; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)19953)))))));
                    arr_19 [i_5] [(unsigned char)5] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_6 = 1; i_6 < 9; i_6 += 1) 
                {
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-68)) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 + 1] [i_3] [i_4 + 3] [i_0 + 1] [i_0 + 1] [i_6])))));
                    var_29 |= ((/* implicit */short) (unsigned short)0);
                    var_30 = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_3] [i_4]))))) != (arr_13 [i_0 + 1] [(short)3])));
                }
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    var_31 = ((/* implicit */unsigned int) var_0);
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) var_9))));
                }
                arr_25 [i_4] [i_0] = var_0;
            }
            for (short i_8 = 1; i_8 < 9; i_8 += 4) 
            {
                var_33 = ((/* implicit */unsigned int) ((_Bool) arr_9 [i_0] [i_3]));
                /* LoopSeq 1 */
                for (signed char i_9 = 1; i_9 < 7; i_9 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_10 = 1; i_10 < 10; i_10 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned int) min((var_34), (arr_28 [i_0] [(unsigned short)2] [i_0] [i_9])));
                        arr_35 [i_10] [i_10 - 1] [i_9 + 2] [i_8] [i_3] [i_0 - 2] [i_10] = ((/* implicit */unsigned char) arr_22 [i_0] [i_0] [i_8 - 1] [i_8]);
                    }
                    for (unsigned short i_11 = 2; i_11 < 8; i_11 += 3) 
                    {
                        arr_39 [i_0 - 2] [(_Bool)1] [i_11] = ((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_8] [i_9 - 1]);
                        var_35 = ((/* implicit */unsigned long long int) max(((short)-18466), (((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned char)0)))))))));
                    }
                    for (short i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        arr_43 [i_0] [i_3] [i_8] [i_8] [i_9 + 2] [i_12] = ((/* implicit */signed char) var_14);
                        var_36 = max(((+(((((/* implicit */int) arr_24 [(short)7] [i_3] [i_8] [i_9 + 2] [(short)7])) * (((/* implicit */int) arr_27 [i_0] [i_3] [i_8 + 1])))))), (max((((/* implicit */int) var_5)), ((-(((/* implicit */int) arr_40 [i_0] [i_0] [(unsigned char)4] [5U] [i_0 + 1] [i_0] [i_0])))))));
                        var_37 = ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_3)))), (((/* implicit */int) arr_37 [i_3] [i_9 + 3] [i_8 + 1] [i_0 - 1] [i_3]))))) && (arr_26 [7] [7] [i_8 - 1] [i_3]));
                        arr_44 [i_0] [i_3] [i_8 + 1] [(unsigned short)1] [i_12] [i_0] [7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_3] [(_Bool)1] [i_3] [(_Bool)1] [i_12])) ? (((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) & (((/* implicit */int) (unsigned char)96))))) : (((((/* implicit */_Bool) 3008847953U)) ? (((/* implicit */unsigned int) -1)) : (arr_8 [i_8 - 1]))))) : (((((/* implicit */_Bool) ((unsigned int) arr_29 [i_0] [i_8 - 1] [i_0] [i_9] [i_0]))) ? ((+(arr_13 [i_8] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_12] [i_9] [i_3] [i_0])))))));
                    }
                    var_38 = ((((/* implicit */_Bool) ((unsigned int) arr_9 [i_0 - 2] [i_3]))) ? (((((/* implicit */_Bool) max(((unsigned short)45582), (((/* implicit */unsigned short) (unsigned char)142))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3)))) : (((arr_28 [i_0] [i_0 + 1] [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((unsigned int) arr_23 [i_0] [i_8])));
                    /* LoopSeq 3 */
                    for (short i_13 = 3; i_13 < 10; i_13 += 2) 
                    {
                        var_39 += ((/* implicit */unsigned int) arr_2 [i_0 - 3]);
                        var_40 = ((/* implicit */int) max((var_40), (((((/* implicit */int) var_0)) - ((+(((/* implicit */int) (_Bool)1))))))));
                        arr_47 [i_0] [i_13] = ((/* implicit */signed char) max((((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_8]))) : (arr_28 [i_0] [i_3] [i_9] [i_13 - 3])))), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) arr_32 [i_3] [i_8] [i_13])), (4294967295U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_41 [i_13] [i_3] [i_8] [i_3] [i_13] [i_0])))))))));
                        arr_48 [i_0] [i_3] [i_8] [i_13 - 3] [i_13] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)57)) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-16))))), (((arr_17 [i_0] [i_3] [i_8 + 2] [i_0] [i_13] [i_8 + 1]) ? (3753829401U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [4U] [i_3] [i_3] [i_3] [i_3] [i_3]))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_3]))) / (3243348277U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (4294967284U))) : (min((((/* implicit */unsigned int) -1)), (var_17)))))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 1) /* same iter space */
                    {
                        var_41 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0 + 1] [i_0 - 2])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)113))) | (1286119343U))) : (3243348277U)))) ? (((arr_22 [i_3] [i_9 + 3] [i_8 - 1] [9]) ? (((/* implicit */int) arr_22 [(unsigned char)5] [i_9 + 4] [i_8 + 2] [i_9])) : (((/* implicit */int) arr_22 [i_0 + 1] [i_9 + 2] [i_8 + 2] [i_9 + 2])))) : (((/* implicit */int) max(((unsigned short)65514), (((/* implicit */unsigned short) arr_38 [i_3] [i_3])))))));
                        var_42 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (max((((/* implicit */unsigned int) var_12)), (arr_8 [(short)1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))))) != (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_3] [i_3]))) & (var_9))), (((/* implicit */unsigned int) var_8))))));
                        arr_52 [i_14] [i_9 + 2] [i_8] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
                    }
                    /* vectorizable */
                    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 1) /* same iter space */
                    {
                        arr_55 [i_15] [i_15] [i_3] [i_3] [i_3] [i_15] [i_0 - 3] = (unsigned char)96;
                        arr_56 [i_15] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)17))));
                    }
                }
                /* LoopSeq 1 */
                for (signed char i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    /* LoopSeq 4 */
                    for (int i_17 = 0; i_17 < 11; i_17 += 3) 
                    {
                        arr_61 [i_0] [i_3] [i_0] [i_16] [i_17] = ((/* implicit */unsigned int) min((arr_20 [i_8 + 2] [i_0 - 3] [i_0 - 2] [i_0 - 3]), (max((arr_20 [i_8 - 1] [i_0 - 3] [i_0 + 1] [i_0 - 1]), (arr_20 [i_8 + 1] [i_0 - 3] [i_0 + 1] [i_0 - 2])))));
                        var_43 = ((/* implicit */unsigned char) var_5);
                    }
                    for (unsigned int i_18 = 0; i_18 < 11; i_18 += 1) 
                    {
                        var_44 = ((/* implicit */signed char) arr_22 [i_0] [i_0] [i_8 + 1] [i_16]);
                        var_45 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (short)-5568))))) ? (((/* implicit */int) max((arr_51 [(short)10] [i_3] [i_8] [i_16] [0U]), ((unsigned char)81)))) : (((((/* implicit */_Bool) -988406158)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))));
                        var_46 = ((/* implicit */unsigned int) max((var_46), (max((min((arr_30 [i_0 - 1] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_41 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]))))))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_16))) / (var_9))) / (((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) arr_21 [6U] [i_16] [i_8 + 2] [i_0])) : (((/* implicit */int) var_11)))))))))));
                        var_47 = ((/* implicit */unsigned int) (unsigned short)7563);
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_48 ^= ((/* implicit */unsigned long long int) var_5);
                        var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) (+(arr_29 [i_0] [i_3] [i_8] [(unsigned short)8] [i_3]))))));
                        var_50 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_8 + 2] [i_8 - 1] [i_8])) ? (arr_3 [i_8 + 2] [i_19] [i_19]) : (arr_3 [i_8 + 2] [i_8 + 2] [i_19])))) ? (min((((/* implicit */unsigned int) (short)17123)), (20U))) : (((unsigned int) arr_3 [i_8 + 2] [(short)3] [i_8]))));
                    }
                    for (signed char i_20 = 0; i_20 < 11; i_20 += 2) 
                    {
                        arr_69 [i_20] [i_8 - 1] [i_8 - 1] [i_3] = ((/* implicit */unsigned int) arr_53 [i_0] [i_0] [i_8] [i_0 - 1] [i_8 + 2] [i_0]);
                        var_51 &= ((unsigned char) max((((/* implicit */unsigned short) (_Bool)1)), (var_10)));
                        var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((arr_18 [i_3] [i_16]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]))) : (arr_3 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_15 [i_0 - 2] [i_3] [i_8])), ((unsigned char)63)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_8 + 2]))))))) : (((/* implicit */int) var_7))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_21 = 3; i_21 < 9; i_21 += 2) 
                    {
                        arr_72 [i_3] [i_16] [i_8] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (((-873448208) | (((/* implicit */int) arr_38 [i_3] [(unsigned char)2]))))))) | (min((((/* implicit */unsigned int) (_Bool)1)), (1051619018U)))));
                        var_53 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((arr_66 [i_0 - 2] [i_3] [i_0 - 2] [i_16] [i_21 + 2] [i_16]) ? (((/* implicit */int) arr_66 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0 - 2])) : (((/* implicit */int) (signed char)-102))))), (((unsigned int) ((((/* implicit */_Bool) 251431826)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_73 [i_0] [i_0] [i_0] [(signed char)4] [i_0] = ((/* implicit */unsigned char) ((((unsigned long long int) arr_40 [i_0] [i_0] [i_8 + 2] [i_21 - 2] [i_21 - 1] [i_16] [i_8 + 1])) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_22 = 0; i_22 < 11; i_22 += 2) 
                    {
                        arr_76 [i_22] [i_16] [(unsigned char)7] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_22] [i_22]))) > (arr_1 [i_0 - 1])));
                        arr_77 [i_0 - 2] [i_0] [i_0 - 3] [(unsigned short)10] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)7571))));
                        var_54 = ((/* implicit */short) var_6);
                    }
                    for (unsigned short i_23 = 1; i_23 < 9; i_23 += 2) 
                    {
                        arr_80 [i_23 + 1] [i_23] [i_8] [i_23] [i_0] = ((/* implicit */unsigned char) (-(arr_60 [i_0] [i_3] [i_8 + 2] [i_3] [i_3])));
                        var_55 = ((/* implicit */unsigned short) var_14);
                    }
                    var_56 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)66)) && (((/* implicit */_Bool) arr_28 [i_8 - 1] [i_0 - 2] [i_8 - 1] [i_0 - 2])))))) ^ (max((arr_28 [i_8] [9] [i_8 + 1] [i_0 - 2]), (((/* implicit */unsigned int) (unsigned short)3781)))));
                }
            }
        }
    }
    var_57 = ((/* implicit */unsigned short) var_4);
}
