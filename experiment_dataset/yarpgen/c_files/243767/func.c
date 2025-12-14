/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243767
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_14 = max((var_5), (var_11));
        arr_2 [i_0] [i_0] = min((min(((unsigned char)226), ((unsigned char)29))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)226)) || (((/* implicit */_Bool) (unsigned char)101))))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
            {
                for (unsigned char i_4 = 1; i_4 < 23; i_4 += 1) 
                {
                    {
                        arr_15 [i_4 + 1] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) max(((unsigned char)73), ((unsigned char)3))))));
                        var_15 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)240)) == (((/* implicit */int) (unsigned char)253)))) ? (((/* implicit */int) arr_14 [i_1] [i_2] [i_3 - 1] [i_1] [i_2] [i_3 - 1])) : (((/* implicit */int) max((arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)75))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)87)))) + (((((/* implicit */int) var_0)) * (((/* implicit */int) arr_20 [i_6] [(unsigned char)1] [i_1])))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            var_17 = max(((unsigned char)29), ((unsigned char)69));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)190)))))));
                            var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)99))));
                            arr_26 [(unsigned char)24] [i_8] [i_6] [i_7] [i_8] [i_8] = arr_17 [i_1] [i_6];
                            arr_27 [i_1] [i_1] [i_1] [i_1] [(unsigned char)14] = max(((unsigned char)0), ((unsigned char)95));
                        }
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            var_20 = var_7;
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)117)) < (((/* implicit */int) (unsigned char)11))))) * (((/* implicit */int) var_6))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            var_22 = ((unsigned char) (unsigned char)9);
                            arr_34 [i_1] [i_1] [(unsigned char)3] [(unsigned char)3] = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)255), ((unsigned char)26)))) << (((max((((/* implicit */int) max(((unsigned char)104), ((unsigned char)255)))), (((((/* implicit */int) arr_25 [i_10] [i_7] [i_6] [i_5] [i_1])) ^ (((/* implicit */int) var_11)))))) - (247)))));
                            arr_35 [i_7] [(unsigned char)7] [i_7] [(unsigned char)7] [i_7] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) arr_19 [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_33 [i_10] [(unsigned char)24] [i_6] [i_5] [(unsigned char)20])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)237)))))));
                            arr_36 [i_1] = var_5;
                        }
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_6] [i_5] [i_1])) ? (((/* implicit */int) arr_10 [i_7] [i_6] [i_5])) : (((/* implicit */int) (unsigned char)53))));
                        /* LoopSeq 3 */
                        for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) 
                        {
                            arr_39 [i_1] [i_5] [i_6] [i_6] [(unsigned char)3] [i_5] [(unsigned char)3] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)248)), (min((((/* implicit */int) min(((unsigned char)194), ((unsigned char)89)))), (((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) (unsigned char)192))))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)70)) || (((/* implicit */_Bool) (unsigned char)63))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 25; i_12 += 3) 
                        {
                            arr_42 [i_1] [i_1] [i_12] [i_7] [i_12] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)32))));
                            var_25 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min(((unsigned char)7), ((unsigned char)0)))) ? (((/* implicit */int) arr_19 [i_7] [i_6] [i_1])) : (((/* implicit */int) var_13)))), (((/* implicit */int) arr_21 [(unsigned char)2] [(unsigned char)2] [i_6] [i_7] [(unsigned char)2]))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_18 [i_1])) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) arr_18 [i_7])))), (((/* implicit */int) arr_18 [i_1])))))));
                            var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)52))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 25; i_13 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_38 [i_1] [i_5] [i_6] [i_7] [i_13])) == (((((/* implicit */int) (unsigned char)246)) & (((/* implicit */int) (unsigned char)116))))));
                            arr_46 [i_13] [i_7] [i_13] [i_5] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_45 [i_1] [i_1] [(unsigned char)23] [i_1] [i_1] [(unsigned char)6]), (arr_45 [i_1] [i_1] [i_1] [i_5] [i_13] [(unsigned char)21])))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_45 [(unsigned char)1] [i_5] [i_5] [(unsigned char)3] [i_1] [i_1]))))) : (((/* implicit */int) min(((unsigned char)142), ((unsigned char)183))))));
                        }
                        var_29 = ((/* implicit */unsigned char) min((min((((/* implicit */int) ((((/* implicit */int) (unsigned char)23)) > (((/* implicit */int) (unsigned char)23))))), ((-(((/* implicit */int) (unsigned char)18)))))), (((/* implicit */int) max(((unsigned char)161), ((unsigned char)76))))));
                        var_30 = (unsigned char)228;
                    }
                }
            } 
        } 
        var_31 = arr_30 [i_1] [i_1] [i_1] [i_1] [i_1];
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)82)) - (((/* implicit */int) arr_31 [i_1] [i_1] [(unsigned char)12] [i_1] [(unsigned char)4]))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)243))) : (((((/* implicit */int) arr_33 [i_1] [i_1] [i_1] [i_1] [i_1])) >> (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_5)))))))));
    }
    for (unsigned char i_14 = 0; i_14 < 10; i_14 += 2) 
    {
        arr_50 [i_14] [i_14] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_29 [i_14] [i_14] [i_14] [i_14] [i_14]))));
        /* LoopSeq 2 */
        for (unsigned char i_15 = 0; i_15 < 10; i_15 += 4) 
        {
            arr_55 [i_14] [i_15] [i_14] = var_11;
            var_33 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
        }
        for (unsigned char i_16 = 1; i_16 < 9; i_16 += 2) 
        {
            var_34 = ((/* implicit */unsigned char) max((((/* implicit */int) var_11)), (((((/* implicit */int) var_4)) << ((((+(((/* implicit */int) (unsigned char)75)))) - (62)))))));
            var_35 *= arr_23 [i_14] [i_14] [i_14] [i_14];
            /* LoopNest 3 */
            for (unsigned char i_17 = 0; i_17 < 10; i_17 += 3) 
            {
                for (unsigned char i_18 = 2; i_18 < 8; i_18 += 4) 
                {
                    for (unsigned char i_19 = 0; i_19 < 10; i_19 += 2) 
                    {
                        {
                            var_36 = var_10;
                            var_37 = var_8;
                            var_38 = var_0;
                            arr_68 [i_17] [i_16] [i_17] = arr_6 [i_14] [(unsigned char)20] [(unsigned char)24];
                            arr_69 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)110))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned char i_20 = 3; i_20 < 14; i_20 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_21 = 0; i_21 < 18; i_21 += 3) 
        {
            for (unsigned char i_22 = 0; i_22 < 18; i_22 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_23 = 4; i_23 < 16; i_23 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned char) (+(((/* implicit */int) max(((unsigned char)142), ((unsigned char)121))))));
                        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)35))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned char)4])) ? (((/* implicit */int) arr_74 [i_20])) : (((/* implicit */int) var_13))))))) ? ((+(((/* implicit */int) arr_44 [(unsigned char)4] [i_22] [i_21] [(unsigned char)4] [i_23])))) : ((((+(((/* implicit */int) arr_70 [i_23] [i_21])))) ^ (((/* implicit */int) (unsigned char)247)))))))));
                    }
                    for (unsigned char i_24 = 3; i_24 < 16; i_24 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_25 = 0; i_25 < 18; i_25 += 3) 
                        {
                            var_41 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)87))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (unsigned char)231))))));
                            arr_85 [i_20 - 3] [i_25] [i_20 + 4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)161))))))), (((/* implicit */int) arr_44 [i_20] [i_25] [i_22] [i_20] [i_25]))));
                            var_42 *= ((/* implicit */unsigned char) max((((/* implicit */int) min(((unsigned char)23), (((unsigned char) (unsigned char)110))))), (((((/* implicit */int) arr_77 [i_20 + 1] [i_21] [i_24 + 2] [i_25])) << (((/* implicit */int) (unsigned char)14))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_26 = 4; i_26 < 17; i_26 += 3) 
                        {
                            var_43 = arr_74 [i_22];
                            var_44 -= var_12;
                            arr_88 [(unsigned char)12] [i_21] [i_22] [i_24 - 3] [i_26] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) (unsigned char)181)) : ((+(((/* implicit */int) (unsigned char)23))))));
                        }
                        var_45 = (unsigned char)154;
                        arr_89 [i_20] = max(((unsigned char)31), ((unsigned char)255));
                        arr_90 [i_24] [(unsigned char)6] [(unsigned char)6] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)8)) & ((+(((/* implicit */int) (unsigned char)114))))));
                    }
                    arr_91 [i_21] [(unsigned char)15] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))) & (((/* implicit */int) ((unsigned char) arr_70 [i_20 + 4] [i_20 - 3])))));
                    var_46 = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned char)250)) + (((/* implicit */int) (unsigned char)150)))), ((+(((((/* implicit */int) (unsigned char)74)) + (((/* implicit */int) (unsigned char)104))))))));
                    var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)252)) >> (((((/* implicit */int) (unsigned char)76)) - (63))))), (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_22 [i_20] [i_21] [(unsigned char)7] [i_21] [i_22])) : (((/* implicit */int) arr_8 [i_20 + 3]))));
                }
            } 
        } 
        var_48 = arr_76 [i_20 - 1] [i_20 - 1];
    }
    var_49 = max((min(((unsigned char)11), ((unsigned char)9))), ((unsigned char)255));
}
