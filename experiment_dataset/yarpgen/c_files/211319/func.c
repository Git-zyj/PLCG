/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211319
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (unsigned char)30))));
        var_17 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) var_16))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)14] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_1 [i_0] [i_0])))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (short)-10580)))))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218)))));
        arr_4 [i_0] = var_13;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_1]))));
        arr_8 [i_1] = ((/* implicit */short) arr_5 [i_1] [20U]);
        var_18 = ((/* implicit */unsigned short) var_3);
        var_19 = max((min((var_16), (arr_5 [i_1] [i_1]))), (((/* implicit */unsigned short) arr_6 [i_1])));
    }
    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (max(((-(var_6))), (((/* implicit */unsigned int) var_12))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (max(((-(((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-10580))) <= (1220312271267426012LL))))))));
    var_22 = ((/* implicit */short) var_2);
    /* LoopSeq 1 */
    for (short i_2 = 1; i_2 < 18; i_2 += 2) 
    {
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_10 [i_2 + 2])), (arr_9 [i_2] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2]))) : (var_6))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_14 [i_2 + 2] = ((/* implicit */_Bool) ((-4595615689026064383LL) | (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_2 + 2])) ^ (((/* implicit */int) arr_12 [i_2 + 2])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 3) 
            {
                arr_18 [i_4] [i_4] [i_4] [i_2 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_2 + 1])) : (((/* implicit */int) arr_6 [i_2 - 1]))));
                arr_19 [i_4] [i_4] [i_2] = ((/* implicit */unsigned int) ((arr_13 [i_2 + 1]) >> (((/* implicit */int) var_12))));
                var_24 = ((/* implicit */long long int) var_2);
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [13ULL])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_12 [i_2 + 2]))))) : (arr_1 [i_2] [(signed char)6]))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_24 [i_3] = ((/* implicit */int) min((((/* implicit */unsigned long long int) -4595615689026064383LL)), (11738684724594857045ULL)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        arr_32 [i_7] [i_7] [i_6] [i_5] [i_3] [i_2] [i_2 + 2] = ((/* implicit */short) (-((+(((/* implicit */int) (unsigned short)65523))))));
                        var_26 = arr_25 [i_5] [i_5] [i_5] [i_5];
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_5] [i_2 - 1] [16LL] [i_2 + 1])) << (((arr_10 [i_2 + 1]) - (1431177214)))));
                        arr_33 [i_2] [i_3] [i_3] [i_3] [19LL] = ((/* implicit */long long int) (unsigned short)28648);
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) arr_25 [i_5] [i_5] [i_5] [i_2 - 1]))));
                    }
                    arr_34 [i_2] [i_3] [(signed char)1] [i_6] |= ((/* implicit */short) ((arr_17 [i_6]) > (arr_22 [i_2 + 2] [i_5] [i_6])));
                    arr_35 [i_2] [i_5] [i_3] [i_2] = ((/* implicit */signed char) arr_0 [i_2 + 1]);
                }
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_9 = 2; i_9 < 17; i_9 += 4) 
                    {
                        arr_41 [i_9] [i_9] [i_5] |= arr_21 [i_3] [(short)8];
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) var_3))));
                        var_30 = ((/* implicit */long long int) arr_21 [i_2] [i_2]);
                    }
                    var_31 &= ((/* implicit */unsigned int) 11608583798517142175ULL);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 1; i_12 < 19; i_12 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((var_5) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_12 [i_2]))))))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) var_9))));
                        arr_49 [i_2 - 1] [i_10] [i_11] [11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_27 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12] [i_12] [4ULL]), (((/* implicit */unsigned short) var_7))))) ? (((/* implicit */unsigned long long int) arr_20 [2U] [i_11])) : (var_1)));
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), ((+(min((arr_31 [i_12] [i_11] [i_11] [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14)))))))))));
                        var_34 &= ((/* implicit */short) var_6);
                    }
                    /* vectorizable */
                    for (unsigned short i_13 = 1; i_13 < 17; i_13 += 1) 
                    {
                        var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_2 - 1] [i_13 - 1] [i_13 + 1] [i_2 - 1] [(short)16]))));
                        var_36 = arr_5 [0U] [i_13 + 1];
                    }
                    var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_12 [i_2 + 1]), (arr_12 [i_2 - 1]))))) : (((((/* implicit */_Bool) (unsigned short)28648)) ? (4595615689026064366LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))))))));
                }
            } 
        } 
        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) min((min((((/* implicit */unsigned short) arr_25 [i_2] [i_2 - 1] [i_2] [i_2 - 1])), (arr_5 [i_2 + 2] [i_2 + 1]))), (max((arr_5 [i_2] [i_2 + 1]), (arr_5 [i_2] [i_2]))))))));
        var_39 = ((/* implicit */int) var_8);
    }
}
