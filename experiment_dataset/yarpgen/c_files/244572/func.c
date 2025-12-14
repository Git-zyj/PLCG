/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244572
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    arr_8 [(unsigned short)8] [i_2 - 1] [i_1] [(unsigned short)8] |= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (unsigned char)240)) - (215))))) < (((/* implicit */int) min((arr_5 [i_1 + 2] [i_1 - 1]), (arr_5 [i_1 + 2] [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3] [i_4 - 2] [(unsigned char)2]))));
                                var_11 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned short) (~(((/* implicit */int) arr_1 [(unsigned short)14]))))));
                                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) arr_9 [i_0] [i_1] [i_2] [i_0] [i_4]))), (max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)65535)))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29110)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_1] [i_3]))))) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_4 [(unsigned short)3] [i_1 + 1] [i_0])))) : (((/* implicit */int) var_5)))))))));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_2] [i_1] [i_2 + 1] [i_2 + 1] [i_0] [i_3])) ? ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) arr_7 [i_2 + 2] [i_4 + 1] [i_4 - 1])) : (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_4 - 2])))) : ((+((-(((/* implicit */int) var_5))))))));
                                var_14 = ((/* implicit */unsigned short) arr_6 [(unsigned char)14] [i_3]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        arr_15 [i_0] [(unsigned short)7] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1 + 4])))))));
                        var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) var_2))))) && ((!(((/* implicit */_Bool) (unsigned char)255))))))) : (((((/* implicit */int) ((unsigned char) var_3))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_2] [i_5] [i_5])) && (((/* implicit */_Bool) arr_3 [i_0] [i_1])))))))));
                    }
                }
                for (unsigned short i_6 = 4; i_6 < 16; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 3; i_7 < 16; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned short) ((max((((((/* implicit */int) (unsigned short)36401)) & (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) min(((unsigned short)59125), (arr_14 [(unsigned char)3] [i_1] [i_6 - 4] [i_7 - 3] [i_8])))))) <= (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_1] [(unsigned short)0] [(unsigned short)10] [i_8])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_8])) : (((/* implicit */int) (unsigned char)254))))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max((var_4), ((unsigned short)63375)))) : (((/* implicit */int) (unsigned char)9))))) ? (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) arr_20 [i_0] [(unsigned short)5] [i_1] [i_6 - 1] [i_7] [i_8] [i_8])) % (((/* implicit */int) var_3)))) : ((-(((/* implicit */int) arr_4 [i_0] [i_6] [i_7 - 2])))))) : ((+(((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) arr_3 [i_1] [(unsigned char)0])) : (((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 1; i_9 < 14; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 3; i_10 < 16; i_10 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_6])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_24 [i_0] [i_6 - 2] [i_9 + 1] [i_10 + 1])) : (((/* implicit */int) arr_24 [i_1 + 4] [i_6] [i_1 + 4] [i_10])))) : ((-(((/* implicit */int) arr_18 [i_0] [i_1 - 2] [i_1] [(unsigned short)9] [i_10] [i_10]))))));
                                arr_27 [i_0] [i_0] [i_6] [i_9] [(unsigned char)0] = arr_3 [i_0] [i_9];
                                arr_28 [i_0] [i_1] [i_6] [i_9] [i_9] [i_10 + 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_9 - 1])) : (((/* implicit */int) arr_16 [i_1 + 4] [i_9 + 2] [i_10 + 1])))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_33 [i_0] [i_1] [i_1 + 4] [i_1 + 3] [i_12] [i_12])), (arr_3 [i_1 - 1] [i_1 - 1])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_33 [i_1] [i_1] [i_1 - 2] [i_1 + 3] [i_11] [i_13])), (arr_13 [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_1 + 2] [i_1] [i_1]))))));
                                arr_39 [i_0] [i_1] [i_11] [i_0] [i_12] [i_13] [(unsigned short)12] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [(unsigned char)15] [i_13])), (arr_30 [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    arr_40 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((~(((/* implicit */int) max(((unsigned short)22225), ((unsigned short)36395)))))) & (((((/* implicit */_Bool) max(((unsigned char)83), ((unsigned char)3)))) ? ((~(((/* implicit */int) arr_6 [i_11] [i_1])))) : (((/* implicit */int) (unsigned short)59125))))));
                    arr_41 [i_0] [i_1 - 1] [i_11] [i_11] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned short) arr_38 [i_0] [(unsigned short)14] [i_0] [i_1 + 4] [i_11] [i_11]))), (((((/* implicit */int) min((((/* implicit */unsigned short) arr_34 [(unsigned short)1] [(unsigned short)1] [(unsigned short)1] [(unsigned short)1] [i_11])), (var_3)))) | (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_6)))))))));
                }
                for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 2; i_15 < 16; i_15 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0] [i_1])) < (((/* implicit */int) var_4))));
                        var_21 *= ((/* implicit */unsigned char) var_8);
                    }
                    var_22 = ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)242))))), ((unsigned short)43318))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) min((arr_46 [(unsigned char)5] [i_1 + 1] [i_1 + 1] [i_14]), (((/* implicit */unsigned short) arr_21 [i_0] [i_0] [i_1] [i_1 + 4] [(unsigned short)4]))))) : (((/* implicit */int) min(((unsigned short)29110), ((unsigned short)65535))))))) ? (((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [(unsigned char)1] [(unsigned char)2] [i_14])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))) << (((((/* implicit */int) arr_9 [i_0] [i_0] [i_14] [i_1 - 3] [i_14])) - (54))))) : (((((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) var_1))))) + (((/* implicit */int) (unsigned short)511))))));
                }
                var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_45 [(unsigned char)14] [i_0] [i_1 + 4] [i_1 + 4]), (arr_43 [i_1 + 4] [i_1 + 4] [(unsigned short)10]))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) min((var_8), (((/* implicit */unsigned short) var_9))));
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_9))));
}
