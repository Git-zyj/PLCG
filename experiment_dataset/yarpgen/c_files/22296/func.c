/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22296
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)47736)) ? (((unsigned int) (unsigned short)17799)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17783)))));
    var_16 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        var_17 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0 + 3]) : (arr_1 [5U]))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 + 2]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)47775)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
        var_19 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) arr_0 [i_0 + 2]))))), (var_4)));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_1]))));
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) arr_3 [i_1]);
        var_20 += ((/* implicit */unsigned int) ((var_1) > (((/* implicit */int) arr_2 [i_1]))));
        arr_6 [i_1] = ((/* implicit */unsigned char) (-(arr_3 [i_1])));
    }
    for (int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_8 [i_2])))), (((/* implicit */int) var_2))));
        var_21 = arr_7 [i_2];
        /* LoopSeq 4 */
        for (unsigned char i_3 = 2; i_3 < 16; i_3 += 2) /* same iter space */
        {
            arr_14 [i_2] = ((/* implicit */unsigned long long int) ((((unsigned long long int) ((((/* implicit */int) (unsigned short)17799)) == (((/* implicit */int) arr_11 [i_2] [i_3]))))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)17804)) && (((/* implicit */_Bool) (unsigned short)17794))))))))));
            arr_15 [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) ((unsigned long long int) max(((unsigned short)47731), ((unsigned short)17799))))) ? ((+(((/* implicit */int) (unsigned short)47775)))) : ((+((~(((/* implicit */int) arr_7 [i_3])))))));
            var_22 ^= ((/* implicit */unsigned int) arr_8 [i_3 + 2]);
        }
        /* vectorizable */
        for (unsigned char i_4 = 2; i_4 < 16; i_4 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) var_1);
            arr_19 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_12 [(unsigned char)4] [i_4 - 1] [i_4 - 2])));
        }
        /* vectorizable */
        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            arr_23 [i_2] [i_2] [i_2] |= ((/* implicit */unsigned char) ((_Bool) arr_18 [i_5 - 1] [i_5 + 1] [i_5 - 1]));
            arr_24 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_4)))));
        }
        for (unsigned char i_6 = 4; i_6 < 17; i_6 += 2) 
        {
            arr_27 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (var_1)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_18 [i_6] [i_2] [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_6 - 2])) && (((/* implicit */_Bool) var_6)))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_16 [i_6 + 1])) : (((((/* implicit */_Bool) (unsigned short)17810)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [11ULL] [i_2]))) : (var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17777)) ? (((/* implicit */int) (unsigned short)17777)) : (((/* implicit */int) (unsigned short)47775)))))));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned short i_8 = 1; i_8 < 17; i_8 += 3) 
                {
                    {
                        arr_34 [i_2] [i_7] [i_7] [i_8 - 1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned short)47732)))))), (((unsigned int) arr_29 [i_6 - 2] [i_7] [i_6 + 1]))));
                        var_24 = ((((/* implicit */int) arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] [(unsigned char)0])) * (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_14))))))));
                    }
                } 
            } 
            arr_35 [i_6] [i_2] [i_2] = ((/* implicit */unsigned long long int) min(((unsigned short)47758), ((unsigned short)47749)));
        }
    }
    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
        {
            var_25 &= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_39 [(unsigned char)5])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_38 [i_9])))), (((((/* implicit */int) arr_36 [i_9])) * (((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_36 [i_9])) ? (arr_40 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_9]))))) : (max((((/* implicit */unsigned int) var_1)), (var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2)))));
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_39 [i_10])) : (var_14))), ((-(((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_37 [i_9]), (((unsigned char) var_0)))))) : (arr_40 [i_9]))))));
            arr_41 [i_9] [i_9] [i_10] = ((/* implicit */short) arr_40 [i_9]);
        }
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 21; i_11 += 3) 
        {
            for (unsigned char i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                for (unsigned char i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_14 = 0; i_14 < 25; i_14 += 2) 
                        {
                            arr_52 [i_9] [i_11 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17805)) ? (((/* implicit */int) (unsigned short)47731)) : (((/* implicit */int) (unsigned short)17793))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((_Bool) var_3)))))) : (((((/* implicit */_Bool) max((((/* implicit */int) arr_45 [(_Bool)1] [(_Bool)1] [i_13] [i_14])), (var_1)))) ? (arr_42 [i_13] [i_11 + 1] [(unsigned short)13]) : (var_12)))));
                            var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)17793))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 0; i_15 < 25; i_15 += 2) 
                        {
                            arr_55 [i_9] [i_11] [i_11] [(short)7] [i_15] = ((/* implicit */short) (unsigned short)17793);
                            arr_56 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) (+(((unsigned long long int) arr_46 [i_12] [i_13] [i_11 + 3]))));
                            arr_57 [i_9] = ((/* implicit */short) ((((/* implicit */unsigned int) ((var_1) * (((/* implicit */int) arr_47 [i_11 + 4] [i_11 + 4]))))) | (min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)17811))))), (arr_53 [i_11 + 4] [i_11] [i_11] [i_11 + 1] [i_11 + 3])))));
                        }
                        arr_58 [0U] [i_11 + 2] [i_12] [i_13] [i_13] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)47742))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_12] [i_11] [i_11])))))) : ((+(var_4)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = 0; i_16 < 25; i_16 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (arr_53 [i_11] [i_13] [(unsigned char)17] [i_11] [i_9]))))))) || (((/* implicit */_Bool) ((int) var_1)))));
                            var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_37 [i_11 + 3]))));
                            arr_61 [i_9] [i_11] [i_12] [i_9] [i_16] [i_9] = ((/* implicit */short) var_2);
                        }
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47731)) || (((/* implicit */_Bool) (unsigned short)17763)))))));
    }
    var_31 = ((/* implicit */_Bool) var_13);
}
