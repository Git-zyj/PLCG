/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248586
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
    var_13 = ((/* implicit */_Bool) max(((short)-1), (((/* implicit */short) (!(((/* implicit */_Bool) max(((signed char)117), (var_2)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) (short)-5221);
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            var_15 = ((/* implicit */short) (+(2147483647)));
            arr_6 [i_1] [i_1] = var_10;
            /* LoopSeq 2 */
            for (int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (((-(var_8))) / (((/* implicit */int) arr_0 [i_2 - 2])))))));
                var_17 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_2 - 2] [i_1 - 1]))));
                arr_9 [i_0] [i_0] [i_1] = var_10;
                var_18 ^= ((/* implicit */signed char) ((((-2147483647) / (((/* implicit */int) arr_2 [(short)16] [i_1 - 1] [i_2])))) % (((/* implicit */int) var_6))));
            }
            for (short i_3 = 2; i_3 < 19; i_3 += 2) 
            {
                arr_12 [(_Bool)1] [i_3] [i_3] [i_1 + 2] &= ((/* implicit */short) ((((/* implicit */int) (short)0)) == (2147483647)));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (int i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) (-(1038757125)));
                            arr_18 [i_0] [i_0] [(short)12] [i_1] [i_5] [i_1] [(short)12] = ((/* implicit */short) (~(((/* implicit */int) (short)23968))));
                            var_20 = ((/* implicit */signed char) ((arr_1 [i_1 + 2] [i_3 + 2]) ? (((/* implicit */int) arr_1 [i_1 + 2] [i_3 - 2])) : (((/* implicit */int) arr_1 [i_1 - 1] [i_3 - 2]))));
                            var_21 = ((/* implicit */short) max((var_21), (var_10)));
                        }
                    } 
                } 
                arr_19 [i_0] [i_1] [i_3] = ((/* implicit */short) (_Bool)1);
            }
            arr_20 [i_1] = (-((((_Bool)1) ? (var_11) : (((/* implicit */int) var_10)))));
        }
        for (int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            arr_23 [i_6] = ((/* implicit */signed char) var_1);
            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) 2147483647))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 18; i_7 += 3) 
            {
                for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    {
                        arr_30 [(short)0] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -869659416)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (_Bool)0))));
                        var_23 = (((_Bool)1) ? (((/* implicit */int) (short)23971)) : (((/* implicit */int) arr_24 [i_7] [i_7 + 3] [i_7 + 3] [i_7 + 3])));
                        var_24 = ((/* implicit */int) arr_11 [i_8] [i_6] [i_8] [i_6]);
                        var_25 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */int) var_7))))));
                        arr_31 [i_0] [i_0] = ((/* implicit */signed char) (-((+(1200025721)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_9 = 1; i_9 < 19; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_37 [i_6] [i_9 + 1] [i_6] [i_9 + 1] [i_10] &= ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                        var_26 = ((/* implicit */short) (+(((/* implicit */int) var_10))));
                        var_27 = ((/* implicit */short) (+(((/* implicit */int) arr_27 [i_6] [6] [i_10]))));
                        arr_38 [i_10] [i_10] [i_9] [i_9] [i_0] [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (signed char)91))));
                    }
                } 
            } 
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_28 = ((/* implicit */_Bool) (short)-27783);
            /* LoopSeq 2 */
            for (signed char i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                arr_44 [7] = (short)-1440;
                arr_45 [i_0] [i_0] [i_11] [i_12] |= ((/* implicit */int) (_Bool)1);
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) var_0))));
                var_30 = ((/* implicit */int) var_4);
            }
            for (short i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                /* LoopSeq 3 */
                for (short i_14 = 0; i_14 < 21; i_14 += 2) 
                {
                    var_31 = (-(((/* implicit */int) var_7)));
                    var_32 = ((/* implicit */short) (~(((/* implicit */int) (short)-1))));
                    arr_51 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 1038757125))));
                }
                for (int i_15 = 0; i_15 < 21; i_15 += 1) 
                {
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_0] [i_11] [i_13] [i_13])) || (((/* implicit */_Bool) arr_46 [i_15] [i_11]))));
                    arr_54 [i_0] [i_11] [i_13] = ((/* implicit */signed char) ((var_11) | (((((/* implicit */_Bool) arr_14 [i_15] [i_13] [i_11] [(short)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))));
                }
                for (signed char i_16 = 2; i_16 < 19; i_16 += 4) 
                {
                    var_34 = ((/* implicit */_Bool) (+(((/* implicit */int) var_12))));
                    var_35 = ((/* implicit */_Bool) arr_40 [i_0]);
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_36 = arr_29 [i_0] [i_16 + 2] [i_16 - 1] [i_16 + 1] [i_16 + 1];
                        arr_60 [(short)6] [i_17] [(short)6] [i_16] [i_16 + 1] [i_16 - 1] = ((/* implicit */short) (~((~(((/* implicit */int) arr_24 [i_0] [i_11] [i_13] [(_Bool)1]))))));
                    }
                }
                var_37 &= ((/* implicit */signed char) (+((+(((/* implicit */int) var_4))))));
                arr_61 [i_0] [i_0] [i_13] = ((/* implicit */signed char) (-(((/* implicit */int) arr_58 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_13] [12] [i_11] [i_11] [12] [i_0])) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) (short)2818))))));
                arr_62 [(signed char)5] [i_13] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_14 [i_0] [i_11] [i_11] [(short)15])) : (((/* implicit */int) var_6))))) ? (var_11) : (arr_57 [i_13] [i_13] [i_13] [i_13] [i_13])));
            }
            arr_63 [(signed char)20] [(signed char)20] [i_11] = (-(((/* implicit */int) var_4)));
            /* LoopSeq 1 */
            for (int i_18 = 2; i_18 < 20; i_18 += 3) 
            {
                var_39 = ((/* implicit */signed char) ((arr_26 [i_18] [i_18 - 1]) ? (((/* implicit */int) (short)0)) : ((~(((/* implicit */int) arr_10 [(short)18] [i_11] [i_11]))))));
                arr_66 [i_0] [i_11] |= ((/* implicit */short) ((((/* implicit */_Bool) (short)-23019)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_42 [i_18] [i_18] [i_18] [i_18 + 1]))));
                var_40 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) var_4)) : (arr_52 [i_11] [i_11] [i_18 - 2] [i_18 + 1])));
            }
        }
    }
    for (short i_19 = 1; i_19 < 11; i_19 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_20 = 0; i_20 < 12; i_20 += 3) 
        {
            var_41 = ((/* implicit */short) ((((((/* implicit */int) (short)2487)) / (214218366))) > (((((/* implicit */_Bool) (signed char)-52)) ? (-1038757125) : (((/* implicit */int) (short)-15717))))));
            var_42 = var_5;
            arr_74 [(short)4] [(short)4] |= 832749606;
            /* LoopNest 3 */
            for (short i_21 = 0; i_21 < 12; i_21 += 4) 
            {
                for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        {
                            arr_84 [i_19 + 1] [(short)9] [i_19] [i_19] [i_23] = (!((((_Bool)1) && (((/* implicit */_Bool) (short)-15054)))));
                            var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) min((((/* implicit */int) (signed char)117)), (2147483647))))));
                            var_44 = ((/* implicit */short) (~(((/* implicit */int) (short)-23972))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_24 = 0; i_24 < 12; i_24 += 4) 
        {
            arr_87 [i_19] = ((/* implicit */_Bool) (-(var_5)));
            var_45 = ((/* implicit */int) var_3);
            var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) (short)-26133))));
            var_47 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) arr_55 [i_19] [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 - 1])) : (((/* implicit */int) (signed char)-125))));
        }
        arr_88 [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_0)) >= (((((/* implicit */int) (_Bool)0)) - (-1038757126)))))) <= ((-(((/* implicit */int) var_0))))));
    }
    for (short i_25 = 0; i_25 < 25; i_25 += 3) 
    {
        var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) arr_89 [i_25])), ((short)17573)))) != (((((/* implicit */_Bool) var_5)) ? (974385887) : (var_5)))))) - ((~(max((var_5), (((/* implicit */int) arr_91 [(signed char)3] [i_25])))))))))));
        /* LoopNest 2 */
        for (short i_26 = 2; i_26 < 23; i_26 += 1) 
        {
            for (short i_27 = 0; i_27 < 25; i_27 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_28 = 0; i_28 < 25; i_28 += 4) 
                    {
                        arr_101 [i_25] [i_25] [i_25] [(short)5] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) % (((/* implicit */int) (short)29101))));
                        var_49 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_97 [17] [17] [(short)0])))))));
                        var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) max((((((/* implicit */_Bool) min((var_8), (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) max(((short)15716), (((/* implicit */short) var_2))))))), ((~(arr_98 [i_26 + 1] [i_28]))))))));
                        /* LoopSeq 1 */
                        for (signed char i_29 = 3; i_29 < 23; i_29 += 3) 
                        {
                            arr_105 [i_25] [i_28] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7415)) ? (((/* implicit */int) (short)7414)) : ((~(((/* implicit */int) ((((/* implicit */int) (short)29016)) >= (var_8))))))));
                            var_51 = ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))), ((-(((/* implicit */int) (signed char)4))))))));
                            arr_106 [i_25] = ((/* implicit */short) ((((((((/* implicit */_Bool) (short)-24745)) && ((_Bool)1))) ? (max((var_11), (arr_96 [i_25] [i_27] [i_27]))) : (((/* implicit */int) var_3)))) - (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (51994297)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)4769))))) : ((-(((/* implicit */int) var_9))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (short i_30 = 0; i_30 < 25; i_30 += 2) 
                    {
                        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                        {
                            {
                                var_52 = ((/* implicit */signed char) (~((+(((/* implicit */int) ((((/* implicit */int) arr_102 [i_25] [i_26 - 1] [i_25] [i_30] [i_31] [i_31])) >= (((/* implicit */int) var_2)))))))));
                                var_53 = ((/* implicit */int) min((var_53), (max((((((/* implicit */_Bool) arr_109 [i_26 + 2] [i_26 + 1] [i_26 + 1])) ? (((/* implicit */int) arr_91 [i_26 - 1] [i_26 + 1])) : (((/* implicit */int) (_Bool)1)))), (max((-943655755), (((/* implicit */int) var_4))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_54 = ((/* implicit */_Bool) min((var_54), (((/* implicit */_Bool) (-(((var_5) * (((/* implicit */int) (_Bool)1)))))))));
    }
}
