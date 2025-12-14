/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20470
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
    var_15 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_13);
        arr_4 [13] = ((/* implicit */int) arr_0 [i_0]);
        var_16 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) | (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (min((var_12), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    var_17 += ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) ((var_9) == (((/* implicit */unsigned int) var_5)))))) < ((+(var_4))))) ? (var_14) : (((/* implicit */unsigned int) ((var_3) ? (arr_6 [i_2 - 1]) : (arr_6 [i_2 - 1]))))));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_2 [i_1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_0) : (var_0)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) : (max((4723660211965484707ULL), (((/* implicit */unsigned long long int) 7340032U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 2; i_4 < 16; i_4 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */_Bool) var_1);
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(min((1698605026U), (((/* implicit */unsigned int) (short)-15132))))))) ? (((/* implicit */long long int) min(((~(var_0))), (((/* implicit */unsigned int) arr_12 [i_3] [i_4 - 1] [i_4 - 1] [(unsigned char)8]))))) : (min((max((((/* implicit */long long int) arr_7 [i_1])), (var_11))), (((/* implicit */long long int) (~(var_12)))))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)110)) ? (5229955312299791042ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8640)))))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_5)) - (arr_8 [i_3])))) ? (((((/* implicit */_Bool) var_4)) ? (arr_16 [i_4]) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) var_12)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (arr_13 [i_1] [i_4] [i_3]))) >= ((~(arr_5 [i_2 - 1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (1787181464U)))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            var_23 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_10 [i_2 - 1] [i_3] [i_4 + 2]))))));
                            var_24 += (+((+(arr_18 [i_2 - 1] [i_4 + 2] [i_4 + 1] [i_4 - 1] [(unsigned char)2]))));
                            arr_21 [i_3] [i_4] [0] [i_3] = ((/* implicit */unsigned char) ((unsigned short) var_12));
                        }
                        /* vectorizable */
                        for (short i_7 = 1; i_7 < 14; i_7 += 2) 
                        {
                            var_25 ^= ((/* implicit */int) var_6);
                            arr_25 [i_4] [6] = ((/* implicit */int) arr_23 [i_7 + 2] [i_4 - 2] [i_3] [i_3] [i_3]);
                            var_26 = ((/* implicit */int) min((var_26), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) (_Bool)0))))));
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((int) arr_15 [i_1] [7U] [i_3] [5ULL] [i_4] [5ULL] [i_7 - 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (var_0))))))));
                        }
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (+(max((arr_17 [i_1] [i_2 - 1] [i_2 - 1] [i_3] [i_4 + 1] [i_1] [i_4 - 2]), (((/* implicit */long long int) 4294967286U)))))))));
                    }
                    for (unsigned int i_8 = 2; i_8 < 16; i_8 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */signed char) var_13);
                        var_30 ^= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_3])) ? (var_4) : (((/* implicit */long long int) -1177232118)))) > (max((((/* implicit */long long int) var_7)), (arr_22 [i_2 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (((/* implicit */int) arr_0 [i_1]))))) : ((-(((((/* implicit */_Bool) 14712625875980882587ULL)) ? (((/* implicit */unsigned long long int) var_9)) : (3734118197728669040ULL)))))));
                        arr_30 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((_Bool) arr_24 [i_8] [i_8]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [7U] [i_3] [7U])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))))) ? (((/* implicit */int) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_2] [8U])) ? (((/* implicit */int) arr_28 [i_1] [i_2])) : (arr_24 [i_8] [i_8 + 2])))))));
                        arr_31 [i_1] [i_1] [14] [i_8] [i_1] = ((/* implicit */short) arr_9 [i_1] [i_2] [(unsigned short)15]);
                    }
                    arr_32 [i_1] [i_2] [i_2 - 1] [i_3] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (arr_7 [i_2 - 1]) : (((/* implicit */unsigned int) arr_12 [i_3] [i_3] [i_2 - 1] [i_2 - 1]))))));
                }
            } 
        } 
        arr_33 [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((short) arr_12 [(unsigned char)8] [i_1] [i_1] [(unsigned char)8])))));
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_6 [8ULL])))) ? (((((/* implicit */_Bool) -1177232118)) ? (arr_8 [i_1]) : (arr_8 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1]))))))));
    }
    for (unsigned int i_9 = 1; i_9 < 21; i_9 += 1) 
    {
        arr_37 [(signed char)2] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)8)), (4450568411656554650ULL))))));
        var_32 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65518))));
        arr_38 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_9])) ? (((/* implicit */int) arr_36 [i_9])) : (((/* implicit */int) arr_36 [i_9]))))) ? (((/* implicit */int) min((arr_35 [i_9 - 1]), (arr_35 [i_9 - 1])))) : (((/* implicit */int) arr_34 [i_9]))));
        var_33 = ((/* implicit */unsigned int) max((var_33), (((((/* implicit */_Bool) (+(((unsigned long long int) 347866083U))))) ? (((((/* implicit */_Bool) arr_36 [12U])) ? (4287627254U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_35 [0U])) | (((/* implicit */int) arr_36 [(unsigned short)10]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)16183))))))))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 1; i_10 < 20; i_10 += 1) 
    {
        arr_42 [i_10] = ((/* implicit */short) -1177232134);
        arr_43 [i_10] = ((/* implicit */unsigned short) ((arr_41 [i_10] [i_10]) ^ (((((/* implicit */_Bool) 1893828249)) ? (-1205477970) : (((/* implicit */int) (short)-16187))))));
    }
}
