/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45192
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */int) max(((unsigned char)144), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))))) % (min(((-(((/* implicit */int) var_13)))), (((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))))))));
                    arr_6 [i_0] [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned char) (+(((((((/* implicit */int) arr_0 [i_2])) >= (((/* implicit */int) var_15)))) ? (((/* implicit */int) max(((unsigned char)168), (((/* implicit */unsigned char) var_5))))) : (((/* implicit */int) arr_5 [(signed char)7] [i_2]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (unsigned char)225))));
                        var_20 -= ((/* implicit */signed char) var_9);
                        arr_9 [(unsigned short)11] [i_1] [i_2] [(unsigned char)12] [(signed char)7] = (unsigned char)4;
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_2 - 1] [i_2 - 1] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 2] [(unsigned short)5])) : (((/* implicit */int) var_8)))))));
                    }
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) | (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)3)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            arr_15 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (signed char)26))) + (((/* implicit */int) (unsigned char)115)))))));
                            arr_16 [i_2] [i_1] [i_2 - 1] [i_0] [i_5] [(unsigned char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)15)) != (((/* implicit */int) var_4))))) : (((/* implicit */int) (unsigned short)1984))))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) var_4)))), ((!(((/* implicit */_Bool) var_16))))))) : (((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) arr_11 [i_0] [i_1] [i_2 - 3] [i_2] [i_4] [i_2 - 3])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [(signed char)16] [i_1] [(unsigned char)15] [(unsigned char)15])) : (((/* implicit */int) arr_3 [i_0]))))))));
                        }
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_6 = 1; i_6 < 17; i_6 += 4) 
                    {
                        var_23 = ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [(unsigned short)1] [i_2] [i_1] [i_0]))));
                        var_24 = ((/* implicit */signed char) arr_8 [(unsigned short)18] [i_2 - 1] [i_1] [i_0]);
                    }
                    for (unsigned short i_7 = 1; i_7 < 19; i_7 += 1) 
                    {
                        arr_22 [i_0] [(unsigned char)10] [i_0] [i_7 + 1] = ((/* implicit */unsigned char) (signed char)-6);
                        arr_23 [i_7] [i_7] [i_2] [i_1] [(unsigned short)12] [i_0] = ((/* implicit */unsigned short) (unsigned char)140);
                        arr_24 [i_0] [i_0] [i_2] [i_0] = var_10;
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 1; i_8 < 13; i_8 += 1) 
    {
        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            {
                arr_30 [i_9] = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) arr_13 [(unsigned char)6])) : (((/* implicit */int) arr_19 [i_8] [i_8] [i_8] [i_8 - 1])))), (((/* implicit */int) var_7)))), ((-(((/* implicit */int) arr_21 [i_8] [i_8 + 1] [(signed char)19] [(unsigned short)17]))))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 2; i_10 < 12; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned short i_12 = 0; i_12 < 14; i_12 += 4) 
                            {
                                arr_39 [i_8] [i_9] [i_8] [i_11] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) max((arr_37 [i_8] [i_8] [(unsigned char)2] [(signed char)7] [(signed char)7] [(signed char)8]), (((/* implicit */unsigned short) (unsigned char)4))))) : (((/* implicit */int) var_8)))) << ((((((~(((/* implicit */int) arr_18 [i_8 + 1] [i_10 + 1] [i_11] [i_12])))) + (107))) - (24)))));
                                var_25 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_14 [i_9] [i_9] [i_10 + 1] [i_11] [i_12])) ? (((/* implicit */int) arr_14 [i_8 + 1] [i_9] [i_10 + 1] [i_11] [i_12])) : (((/* implicit */int) arr_14 [i_8] [i_9] [i_8] [i_11] [i_12]))))));
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_37 [i_8 + 1] [i_8 + 1] [(signed char)12] [i_8 - 1] [i_10 - 1] [(unsigned short)3]))))) ? (((/* implicit */int) arr_37 [i_8] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_10 + 2] [(unsigned short)10])) : ((~(((/* implicit */int) arr_37 [i_8 + 1] [i_8 + 1] [i_8] [i_8 - 1] [i_10 + 2] [i_10 - 2]))))));
                                arr_40 [i_8] [i_8] [i_10] [i_11] [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)36715)) > (((/* implicit */int) (unsigned char)128)))))));
                            }
                            for (unsigned char i_13 = 0; i_13 < 14; i_13 += 3) 
                            {
                                var_27 = ((/* implicit */unsigned short) var_4);
                                arr_43 [i_8] [i_9] [i_10] [(signed char)10] [i_13] = var_9;
                                var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_28 [i_10 - 1] [(unsigned char)6])) ? (((/* implicit */int) arr_8 [i_8] [i_9] [i_10 - 2] [i_11])) : (((/* implicit */int) arr_25 [i_9] [i_11])))) & (((/* implicit */int) arr_25 [i_11] [i_10]))));
                                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_13] [i_13] [i_13] [i_8 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_10 - 1]))))) : ((-(((/* implicit */int) var_17)))))))));
                                var_30 = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))))));
                            }
                            for (unsigned char i_14 = 1; i_14 < 11; i_14 += 4) 
                            {
                                var_31 = ((/* implicit */signed char) min((((((((/* implicit */int) var_17)) & (((/* implicit */int) (unsigned short)59129)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (((/* implicit */int) arr_1 [i_9]))));
                                arr_46 [i_9] [i_14] [i_11] [i_11] [i_10] [(unsigned char)3] [i_9] = ((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)89)))))), ((~(((((/* implicit */int) (unsigned char)113)) << (((((/* implicit */int) arr_37 [i_8] [(unsigned short)5] [(unsigned short)5] [(signed char)2] [i_8] [i_14 + 2])) - (21839)))))))));
                            }
                            for (unsigned short i_15 = 0; i_15 < 14; i_15 += 3) 
                            {
                                var_32 = ((/* implicit */signed char) (~(min((((/* implicit */int) arr_38 [i_8 + 1] [i_8 - 1] [(signed char)5] [i_8 - 1] [i_8] [i_8 - 1])), (((((/* implicit */int) var_12)) << (((((/* implicit */int) (signed char)-95)) + (109)))))))));
                                arr_49 [i_9] [i_9] [i_9] = arr_33 [i_8 - 1] [i_9] [i_10] [i_11];
                                arr_50 [i_15] [i_9] [i_10] [i_9] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) (unsigned short)53710))))) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) arr_17 [i_8] [i_8 + 1] [i_8] [i_8 - 1] [i_8] [i_8 - 1]))))) : ((-(((/* implicit */int) var_1))))))) ? ((-(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) min(((signed char)-92), (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_8] [i_9] [i_10] [(signed char)14] [i_15])), (arr_5 [i_9] [i_11]))))))));
                            }
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)3)) < (((/* implicit */int) arr_32 [i_8] [i_9] [i_10] [i_11]))))) / (((/* implicit */int) (signed char)104)))) / (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) min((arr_10 [i_9] [i_9] [i_10] [i_11]), (var_4))))))))))));
                            arr_51 [i_8] [i_8] [i_8] [i_9] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_48 [i_8] [i_8] [i_8 + 1] [i_8 + 1] [i_10 + 1])))), ((~(((/* implicit */int) arr_48 [i_8] [i_8] [i_8 - 1] [i_9] [i_10 - 2]))))));
                            arr_52 [i_8] [i_8] [i_10] [i_8] &= ((/* implicit */unsigned char) (((~(((/* implicit */int) var_7)))) | (((/* implicit */int) var_1))));
                        }
                    } 
                } 
                arr_53 [(unsigned char)4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-27)), ((unsigned short)13543)))) ? (((/* implicit */int) arr_18 [i_8 + 1] [i_9] [i_9] [i_9])) : ((-(((/* implicit */int) arr_18 [i_8 - 1] [i_9] [i_8 + 1] [i_8 + 1]))))));
            }
        } 
    } 
}
