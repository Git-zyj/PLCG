/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37847
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
    var_18 -= var_16;
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) | (min((((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_1 [(unsigned char)16])))), (((/* implicit */int) arr_0 [i_0 - 3]))))));
        var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) max((((unsigned char) arr_0 [i_0])), (((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_0 [i_0])))))))), (((((/* implicit */int) arr_0 [i_0 + 1])) | (((/* implicit */int) arr_0 [i_0 - 3]))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_6 [i_0] [(unsigned char)2] |= ((/* implicit */unsigned char) ((((/* implicit */int) max((((unsigned char) (unsigned char)224)), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)222)) || (((/* implicit */_Bool) arr_2 [i_0] [(unsigned char)14])))))))) & (((/* implicit */int) ((unsigned char) (unsigned char)177)))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 - 2] [i_0] [i_0 - 2])) & (((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 2]))))) ? (((((/* implicit */int) (unsigned char)94)) * (((/* implicit */int) arr_7 [i_0 - 3] [i_0 - 1] [i_0 - 1])))) : (((/* implicit */int) (unsigned char)99))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    for (unsigned char i_4 = 4; i_4 < 24; i_4 += 4) 
                    {
                        {
                            var_22 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)32))));
                            arr_14 [i_0] [i_0 - 1] [i_0 + 1] [i_3] [i_4] = arr_11 [i_1] [i_1] [i_0];
                            var_23 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_8 [i_0] [i_0] [i_4 - 2])) * (((/* implicit */int) arr_11 [i_0] [i_2] [i_0])))), (((/* implicit */int) (unsigned char)182))));
                        }
                    } 
                } 
                arr_15 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_13 [i_0] [i_2] [i_1] [i_2] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_2] [i_0])))), (((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) arr_11 [i_0 - 3] [i_1] [i_0])) - (248))))))), (((((/* implicit */int) var_5)) & (((/* implicit */int) (unsigned char)227))))))) : (((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_13 [i_0] [i_2] [i_1] [i_2] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_2] [i_0])))), (((((/* implicit */int) arr_0 [i_0])) << (((((((((/* implicit */int) arr_11 [i_0 - 3] [i_1] [i_0])) - (248))) + (53))) - (4))))))), (((((/* implicit */int) var_5)) & (((/* implicit */int) (unsigned char)227)))))));
                var_24 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min(((unsigned char)227), ((unsigned char)181)))) ? ((-(((/* implicit */int) (unsigned char)131)))) : ((+(((/* implicit */int) arr_3 [(unsigned char)14] [i_1] [i_2])))))), (((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))));
                arr_16 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)135)) & (((((/* implicit */int) min(((unsigned char)74), ((unsigned char)225)))) << (((((((/* implicit */int) (unsigned char)224)) & (((/* implicit */int) (unsigned char)95)))) - (46)))))));
            }
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                arr_19 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)182)), (min((((/* implicit */int) arr_11 [i_0 - 3] [i_0 - 3] [i_0])), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_13 [i_5] [i_5] [i_1] [i_1] [(unsigned char)9] [i_0 + 1])) : (((/* implicit */int) (unsigned char)255))))))));
                /* LoopSeq 4 */
                for (unsigned char i_6 = 3; i_6 < 24; i_6 += 1) 
                {
                    arr_23 [(unsigned char)24] [i_0] [i_5] = (unsigned char)158;
                    arr_24 [i_0] [i_5] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)158))));
                }
                for (unsigned char i_7 = 1; i_7 < 23; i_7 += 1) 
                {
                    var_25 = var_9;
                    var_26 = arr_7 [i_0] [i_5] [i_5];
                    var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0 + 1])), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned char)168))))))) ? (((((((/* implicit */_Bool) arr_27 [i_0] [(unsigned char)8] [(unsigned char)10])) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) arr_5 [i_0] [i_1])))) & (((/* implicit */int) arr_21 [(unsigned char)14] [(unsigned char)8] [i_1] [i_5] [i_7])))) : (((/* implicit */int) arr_13 [i_0 + 1] [i_0] [i_5] [i_7] [i_1] [i_5]))));
                    var_28 |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)37)) < (((/* implicit */int) (unsigned char)0))));
                    arr_29 [i_7] [i_0] [i_5] [i_1] [i_0] [i_0] = arr_22 [i_0];
                }
                for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    var_29 = ((/* implicit */unsigned char) max((var_29), (arr_13 [i_0] [i_1] [i_5] [i_5] [i_8] [i_8])));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) arr_3 [(unsigned char)17] [(unsigned char)17] [i_5])) << (((((/* implicit */int) arr_21 [i_0] [i_1] [i_5] [i_5] [i_8])) - (107)))))))) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) max(((unsigned char)224), ((unsigned char)218))))));
                }
                for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    arr_35 [i_1] [i_5] [i_0] [i_9] = arr_18 [i_0] [(unsigned char)16] [i_5] [i_0 + 1];
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)29)) < (((/* implicit */int) (unsigned char)208)))) ? (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) var_8)))), ((+(((/* implicit */int) arr_12 [i_1] [i_1] [i_5] [i_9] [i_9])))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) arr_21 [(unsigned char)20] [(unsigned char)20] [(unsigned char)22] [i_5] [(unsigned char)20])) || (((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_1] [i_9] [i_9]))))))))))));
                }
                var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)253)))))));
            }
        }
        for (unsigned char i_10 = 1; i_10 < 23; i_10 += 3) 
        {
            arr_38 [i_0] [(unsigned char)8] |= arr_9 [i_10] [i_10 + 1] [i_10];
            var_33 &= (unsigned char)211;
            var_34 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_0] [(unsigned char)6])) ? (((/* implicit */int) arr_18 [(unsigned char)18] [i_10 + 2] [i_10] [i_0])) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)25)) < (((/* implicit */int) (unsigned char)221))))) : (((/* implicit */int) arr_4 [i_0 + 1] [i_10 + 1] [i_0 + 1])))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 3] [(unsigned char)14])) || (((/* implicit */_Bool) arr_26 [i_0 - 2] [i_10] [i_10 + 2] [i_0] [i_0])))))));
        }
    }
    for (unsigned char i_11 = 4; i_11 < 15; i_11 += 3) 
    {
        var_35 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_26 [i_11 - 3] [i_11 - 2] [i_11] [i_11] [(unsigned char)12])) ? (((/* implicit */int) arr_26 [i_11 - 3] [i_11 - 2] [i_11 - 3] [(unsigned char)11] [(unsigned char)16])) : (((/* implicit */int) arr_26 [i_11 - 3] [i_11 - 4] [i_11 - 3] [i_11] [i_11 + 2])))) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)44)) > (((/* implicit */int) (unsigned char)63)))))));
        var_36 = min(((unsigned char)37), (arr_22 [i_11]));
    }
    for (unsigned char i_12 = 2; i_12 < 20; i_12 += 3) 
    {
        arr_43 [i_12] = arr_26 [i_12] [i_12] [i_12 + 2] [(unsigned char)11] [i_12];
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)47)) ? (((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)125)))) : (((((/* implicit */_Bool) arr_10 [i_12] [i_12] [i_12 + 2] [(unsigned char)4])) ? (((/* implicit */int) min(((unsigned char)37), (arr_9 [i_12] [i_12 - 2] [i_12])))) : (((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) arr_12 [i_12 + 1] [i_12 - 2] [i_12] [i_12 + 1] [i_12]))))))));
        /* LoopNest 3 */
        for (unsigned char i_13 = 3; i_13 < 19; i_13 += 3) 
        {
            for (unsigned char i_14 = 0; i_14 < 22; i_14 += 1) 
            {
                for (unsigned char i_15 = 0; i_15 < 22; i_15 += 4) 
                {
                    {
                        var_38 -= (unsigned char)0;
                        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned char)240)))), (((((/* implicit */int) arr_13 [(unsigned char)17] [(unsigned char)3] [i_13] [i_13] [i_13] [i_12 + 1])) < (((/* implicit */int) arr_50 [i_12] [i_15] [(unsigned char)8] [i_15]))))))) & (((/* implicit */int) arr_10 [i_12 - 1] [i_12 + 2] [i_12 + 2] [i_15])))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 1) 
    {
        arr_54 [i_16] = (unsigned char)37;
        var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)239)) < (((/* implicit */int) (unsigned char)15))));
        /* LoopNest 3 */
        for (unsigned char i_17 = 1; i_17 < 17; i_17 += 1) 
        {
            for (unsigned char i_18 = 0; i_18 < 18; i_18 += 4) 
            {
                for (unsigned char i_19 = 0; i_19 < 18; i_19 += 4) 
                {
                    {
                        arr_62 [i_19] [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (unsigned char)245))));
                        arr_63 [i_19] [(unsigned char)10] [i_17] [i_18] [i_18] [(unsigned char)10] |= ((unsigned char) arr_44 [i_17 + 1] [i_19]);
                        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)37)))))));
                    }
                } 
            } 
        } 
        arr_64 [i_16] [i_16] = arr_46 [i_16];
        /* LoopSeq 2 */
        for (unsigned char i_20 = 0; i_20 < 18; i_20 += 3) 
        {
            arr_67 [i_20] [i_16] [i_16] = arr_25 [i_16] [i_20] [i_16] [i_20] [(unsigned char)16];
            var_42 = ((/* implicit */unsigned char) max((var_42), (((unsigned char) ((((/* implicit */int) (unsigned char)234)) < (((/* implicit */int) var_9)))))));
            /* LoopSeq 1 */
            for (unsigned char i_21 = 1; i_21 < 16; i_21 += 2) 
            {
                var_43 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_68 [i_16] [i_20] [i_21] [i_16])) || (((/* implicit */_Bool) arr_21 [i_16] [i_20] [i_21 + 1] [i_16] [(unsigned char)9])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)228)) > (((/* implicit */int) (unsigned char)44))))) : (((/* implicit */int) (unsigned char)2))));
                var_44 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_42 [i_21 + 2] [i_21])) & (((/* implicit */int) arr_42 [i_21 + 1] [i_21]))));
                arr_72 [i_16] [i_20] [i_21] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_16] [i_21 + 2] [i_21 - 1] [i_21] [i_21]))));
            }
        }
        for (unsigned char i_22 = 2; i_22 < 17; i_22 += 3) 
        {
            var_45 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (unsigned char)0))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_60 [(unsigned char)2] [i_22] [(unsigned char)6] [i_16])) && (((/* implicit */_Bool) arr_37 [i_16])))))));
            arr_77 [(unsigned char)4] [i_22] [i_22 + 1] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_51 [i_16] [i_22])) > (((/* implicit */int) (unsigned char)243))));
            var_46 |= arr_61 [i_16] [i_16] [i_16] [(unsigned char)12] [i_16] [(unsigned char)12];
            var_47 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_37 [i_22 - 2]))));
        }
    }
    var_48 *= var_10;
    var_49 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (unsigned char)128))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)198))))))) || (((((/* implicit */int) ((unsigned char) (unsigned char)0))) > (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)243)) || (((/* implicit */_Bool) var_6)))))))));
}
