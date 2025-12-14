/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208682
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (signed char)124);
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [7ULL]);
                        arr_11 [i_0] [i_1] [i_0] [i_3] = (signed char)119;
                    }
                    for (unsigned short i_4 = 3; i_4 < 9; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (7492045894502403198ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))))))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_18))) ? (((/* implicit */int) arr_6 [(unsigned char)3] [i_0] [i_4])) : (((/* implicit */int) (signed char)123))));
                    }
                }
                for (long long int i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                {
                    arr_18 [i_0] [i_0] [6LL] = ((/* implicit */unsigned long long int) (~((-((-(2817455191U)))))));
                    arr_19 [i_0] [i_1] [i_0] [i_5] = arr_12 [i_0] [i_1] [(unsigned short)5] [i_5];
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)15681)) << (((((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_5])) ? (((((/* implicit */_Bool) arr_7 [i_5] [i_1] [i_0])) ? (1152912708513824768ULL) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [9ULL] [i_0] [4U] [i_1]))))) - (1152912708513824754ULL)))));
                    var_23 = ((/* implicit */unsigned int) var_17);
                    var_24 = ((/* implicit */int) min((((/* implicit */long long int) (unsigned char)109)), (max((arr_13 [i_0] [i_0] [(_Bool)1]), (arr_13 [i_0] [i_0] [i_5])))));
                }
                for (long long int i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 3; i_8 < 8; i_8 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) ((unsigned char) (((!(((/* implicit */_Bool) -6829611605893595226LL)))) ? ((+(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_17)), (var_13)))))));
                                arr_28 [5LL] [i_1] [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) min((arr_26 [i_8] [i_0] [i_8 + 2] [i_8 - 2] [i_7] [i_0] [i_0]), (((((/* implicit */_Bool) arr_4 [i_0] [i_6])) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)71)))))))) ? ((-(((((/* implicit */_Bool) 3223376548U)) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13))))))) : (((/* implicit */unsigned long long int) var_4)));
                                arr_29 [i_0] [(unsigned char)9] = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))) <= ((-(9U))));
                                arr_30 [(unsigned char)5] [i_0] [i_7] [(signed char)8] [(signed char)8] [i_0] [(unsigned char)5] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_23 [i_8 + 2] [i_8 - 1] [i_8 - 2] [i_8 - 3] [(_Bool)1] [i_8 - 2]), (var_4)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65531)) ? (-787561218) : (((/* implicit */int) (short)25587)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        arr_33 [i_0] [i_0] [i_6] [i_9] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 10979934556766502258ULL)) ? (arr_16 [i_9] [i_6] [i_1] [i_0]) : (var_9)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 2; i_10 < 8; i_10 += 1) 
                        {
                            arr_38 [(_Bool)0] [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((var_9) >> (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_10] [(short)3] [i_1] [i_0]))) : (var_9))) - (120LL))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_21 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)8191))))) ? (((unsigned int) arr_21 [i_0] [3] [i_9] [i_0])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (unsigned char)102)))))))) - (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) + (33ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10 + 2] [i_0] [4] [i_1]))))))))));
                        }
                        for (unsigned int i_11 = 3; i_11 < 9; i_11 += 3) 
                        {
                            var_27 = 3701719251U;
                            arr_41 [i_0] [(signed char)7] [i_6] [(unsigned char)5] [i_11 - 3] [i_0] [i_11 - 3] = ((/* implicit */int) var_4);
                        }
                    }
                    var_28 = ((/* implicit */unsigned short) var_6);
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 1; i_13 < 6; i_13 += 2) 
                        {
                            {
                                arr_49 [i_0] [7U] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) var_16);
                                var_29 = ((/* implicit */long long int) 18446744073709551581ULL);
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                for (int i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    arr_53 [i_0] [i_1] [i_0] = ((unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                    var_30 = arr_12 [i_0] [(unsigned char)9] [i_0] [(unsigned short)2];
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */int) var_5);
                                arr_60 [i_16] [i_0] [(unsigned short)5] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) 1477512104U));
                                arr_61 [(unsigned char)1] [i_1] [i_0] [i_1] [5U] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)153))))) ? (((((/* implicit */_Bool) arr_42 [(unsigned char)2] [i_1] [(unsigned char)0] [i_14] [i_14] [i_16])) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])) : (9907906111274075263ULL))) : (((arr_3 [i_0] [i_0] [4LL]) >> (((((/* implicit */int) var_2)) - (17499))))))), (((/* implicit */unsigned long long int) arr_16 [i_16] [i_16] [i_16] [0ULL]))));
                            }
                        } 
                    } 
                    arr_62 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)0);
                }
                for (long long int i_17 = 0; i_17 < 10; i_17 += 3) 
                {
                    arr_67 [i_0] = ((/* implicit */_Bool) arr_39 [i_0] [i_1] [i_1] [i_1] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 0; i_18 < 10; i_18 += 3) 
                    {
                        var_32 = ((/* implicit */signed char) (~(10979934556766502246ULL)));
                        arr_70 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)100);
                    }
                    var_33 = ((/* implicit */_Bool) 8438887501849901933LL);
                }
            }
        } 
    } 
    var_34 = ((/* implicit */signed char) (~(var_1)));
    /* LoopSeq 3 */
    for (short i_19 = 0; i_19 < 13; i_19 += 2) 
    {
        var_35 = ((/* implicit */int) 1404394362U);
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_73 [i_19]))) ? (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_7)))))) : (((/* implicit */int) ((unsigned char) ((((((/* implicit */int) (short)-6693)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)27493)) - (27475)))))))));
        var_37 = ((/* implicit */int) arr_73 [i_19]);
        arr_74 [(unsigned char)8] [11U] = ((/* implicit */long long int) var_11);
    }
    for (signed char i_20 = 0; i_20 < 22; i_20 += 3) 
    {
        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_76 [i_20])) ? (arr_76 [i_20]) : (((/* implicit */unsigned long long int) var_18))))) ? (((unsigned long long int) arr_76 [i_20])) : (((/* implicit */unsigned long long int) arr_75 [i_20]))));
        arr_77 [i_20] = ((/* implicit */unsigned short) 7466809516943049380ULL);
        arr_78 [i_20] = ((((/* implicit */_Bool) ((signed char) arr_75 [i_20]))) ? (((((((/* implicit */_Bool) arr_75 [7U])) ? (arr_76 [i_20]) : (arr_76 [i_20]))) - (((/* implicit */unsigned long long int) arr_75 [i_20])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_76 [i_20])) ? (((/* implicit */unsigned int) -1076947697)) : (arr_75 [i_20]))) >= (((((/* implicit */_Bool) (unsigned short)12967)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_75 [(unsigned char)10]))))))));
        arr_79 [i_20] [i_20] = ((/* implicit */_Bool) 3096141537U);
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        var_39 = ((/* implicit */int) var_4);
        var_40 = (~(arr_76 [i_21]));
    }
}
