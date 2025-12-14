/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47687
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
    var_19 = ((/* implicit */short) max((((((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_15))))) << (((((/* implicit */int) var_16)) - (60))))), (((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) var_11))))));
    var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7310284404914054521LL)))))) : (max((((/* implicit */unsigned long long int) var_9)), (var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_11))))) : (var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 8; i_2 += 2) 
                {
                    for (short i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_5 [i_2 + 3] [i_2 + 1] [i_2 + 3]), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) (+(arr_5 [i_0] [i_0] [i_2 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1457567582))))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_0)))))) : (((/* implicit */int) var_0))));
                                arr_14 [i_0] [i_0] [i_2] [i_2 + 4] [i_3 + 1] [i_4] = ((/* implicit */signed char) ((((var_11) || (arr_11 [i_0] [i_1 - 3] [i_2 + 4] [i_3 - 2] [i_2 + 4] [i_2]))) ? ((((_Bool)1) ? (((/* implicit */int) arr_11 [i_4 + 1] [i_3] [i_2] [i_1] [i_1 - 1] [i_0])) : (((/* implicit */int) arr_11 [i_4] [i_3 - 2] [i_2 - 3] [i_1 + 2] [i_1 - 1] [i_0])))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_3 [i_0])))))));
                                arr_15 [i_4 - 1] [i_3 + 1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (+(((arr_8 [i_2]) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_8 [i_0]))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_10 [i_0] [i_1] [i_3 + 2] [i_3 - 3] [i_3] [i_4 + 1]), (((/* implicit */int) var_8))))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (2558641245335510617ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0])))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] = ((/* implicit */short) arr_10 [i_0] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_0] [i_1]);
                /* LoopSeq 3 */
                for (int i_5 = 2; i_5 < 11; i_5 += 1) 
                {
                    arr_20 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) (-(((arr_1 [i_5 - 2] [i_1 - 3]) & (max((arr_1 [i_0] [i_1]), (((/* implicit */unsigned int) var_12))))))));
                    arr_21 [i_0] [i_0] [i_0] [6ULL] = ((/* implicit */short) arr_1 [i_0] [i_1]);
                }
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        arr_26 [i_7] [i_7] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (+(var_17)))))) ? (((/* implicit */unsigned int) (((((_Bool)1) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) min(((_Bool)1), (var_1)))) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) min(((short)-32758), (((/* implicit */short) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_5 [i_0] [i_1 + 2] [i_6])))));
                        arr_27 [i_7] = ((/* implicit */long long int) max(((+(((var_0) ? (var_6) : (((/* implicit */unsigned long long int) arr_2 [i_6])))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) arr_8 [i_1 - 1])) : (((/* implicit */int) (signed char)60)))), (((/* implicit */int) arr_25 [i_0] [i_1] [i_6] [i_1 - 2] [i_0])))))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_18 [i_0]);
                        arr_33 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)192)) != (((arr_11 [i_8] [i_8] [i_6] [i_1 + 1] [i_1 + 1] [i_0]) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)51398))))));
                    }
                    arr_34 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_2)), ((unsigned char)255)))) ? (((/* implicit */int) arr_23 [i_1] [i_1 - 3] [i_0])) : (((((/* implicit */_Bool) arr_29 [i_1] [i_0] [i_6] [i_0] [i_1] [i_1 - 2])) ? (arr_12 [i_0]) : (arr_2 [i_0])))))));
                    arr_35 [i_0] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_7 [i_1] [i_1 - 2] [i_1 + 2]), (arr_7 [i_1] [i_1 - 2] [i_1 + 1])))) - (((/* implicit */int) var_12))));
                    arr_36 [i_6] = ((/* implicit */int) ((((/* implicit */unsigned int) max((min((((/* implicit */int) arr_7 [i_0] [i_1] [i_0])), (var_18))), (((/* implicit */int) arr_8 [i_1 + 1]))))) > (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_6] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_24 [i_0] [i_1 + 2] [i_1] [i_1 - 1] [i_1 - 1])) > (((/* implicit */int) (_Bool)1))))))))));
                    arr_37 [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0])))))))));
                }
                /* vectorizable */
                for (long long int i_9 = 2; i_9 < 10; i_9 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        for (signed char i_11 = 1; i_11 < 11; i_11 += 3) 
                        {
                            {
                                arr_46 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_39 [i_9 + 1] [i_1 - 2] [i_1 - 3])) : (var_6)));
                                arr_47 [i_11] [i_0] [i_10] [i_10] [i_0] [i_0] [i_0] = arr_24 [i_0] [i_1 + 1] [i_9] [i_10] [i_11 + 1];
                                arr_48 [i_10] [(short)8] [i_10] [i_9 - 2] [i_1] [(short)8] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-28)) == (((/* implicit */int) arr_30 [(unsigned char)10]))));
                                arr_49 [i_0] [i_11] [i_0] [i_10] [i_11 - 1] = ((/* implicit */signed char) arr_4 [i_10]);
                                arr_50 [i_11 - 1] [i_0] [i_9 - 1] [i_0] [i_0] = ((/* implicit */int) arr_25 [i_0] [i_1] [i_11 + 1] [i_10] [i_10]);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        arr_53 [i_12] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                        arr_54 [i_0] [i_0] [i_0] [(unsigned char)6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_12] [i_12 - 1]))) : (14LL))))));
                        /* LoopSeq 2 */
                        for (int i_13 = 0; i_13 < 12; i_13 += 3) 
                        {
                            arr_57 [i_12] [(unsigned char)2] [i_12] [(unsigned char)2] [(unsigned char)2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_1 - 2] [i_1 - 3] [i_1] [i_1 - 3] [i_1 - 3])) ? (((/* implicit */int) arr_31 [i_1 - 2] [i_1 - 3] [i_1] [i_1 + 2] [i_1 - 2])) : (((/* implicit */int) arr_24 [i_1 - 3] [i_1 - 3] [i_1 + 2] [i_1 - 3] [i_1 + 1]))));
                            arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) arr_2 [i_0])) == (arr_55 [i_0] [i_1 - 1] [i_9] [i_12 - 1] [i_13] [i_13] [i_13]))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(arr_30 [i_0]))))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            arr_62 [i_0] [i_14] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_44 [i_0] [i_14])))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
                            arr_63 [i_0] [i_1 - 2] [i_0] [i_0] [i_14] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_12 - 1] [i_0] [i_9]))) : (((var_1) ? (((/* implicit */unsigned long long int) var_4)) : (6938660793062206325ULL)))));
                            arr_64 [i_0] [i_1 + 1] [i_1 - 3] [i_9] [i_0] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)23)) ? (((((/* implicit */int) (signed char)-67)) + (((/* implicit */int) (short)3968)))) : (((/* implicit */int) arr_24 [i_1 - 2] [i_12 - 1] [i_1 - 1] [i_1] [i_1 - 2]))));
                            arr_65 [i_14] [i_0] [i_9 + 1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((_Bool)0) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (short)13920)))))));
                        }
                        arr_66 [i_0] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_12] = ((/* implicit */unsigned int) (_Bool)0);
                        arr_67 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (~(arr_5 [i_1 - 1] [i_1] [i_1 - 1])));
                    }
                    for (signed char i_15 = 1; i_15 < 10; i_15 += 2) 
                    {
                        arr_71 [i_0] [(_Bool)0] [(_Bool)0] [i_0] = ((/* implicit */unsigned char) (!(arr_30 [4ULL])));
                        arr_72 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_38 [i_9] [i_0] [i_0]);
                    }
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        arr_76 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) 4294967277U));
                        arr_77 [i_16] [i_0] [i_9 - 2] [i_9] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) arr_19 [i_16 + 1] [i_9 - 1] [i_1] [i_0])) : (((/* implicit */int) var_15))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_80 [i_0] [i_1 - 1] [i_9] [i_0] = ((/* implicit */unsigned long long int) var_18);
                        arr_81 [i_9 + 1] [(short)8] [i_0] = ((/* implicit */unsigned short) ((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_0] [i_1 - 2] [i_9 - 1] [i_17] [i_9])))));
                        arr_82 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_51 [i_17] [i_9] [i_1 - 1]);
                    }
                    arr_83 [(short)2] [i_0] [i_0] = ((/* implicit */int) ((6047399823809563277ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_9 - 2] [i_9] [i_9 + 2] [i_9])))));
                }
                arr_84 [10] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) max((((/* implicit */int) var_9)), (arr_44 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) min((var_18), (((/* implicit */int) arr_59 [i_0] [i_1 - 2] [(signed char)8] [i_1] [i_0] [i_1]))))) ? (min((6938660793062206325ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45107))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min(((unsigned char)43), (((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0]))))), (arr_0 [i_1 + 1] [i_0]))))));
                arr_85 [i_0] = arr_23 [i_1] [i_1] [i_0];
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_7);
}
