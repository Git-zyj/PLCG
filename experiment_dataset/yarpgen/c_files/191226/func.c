/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191226
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
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_11 = ((/* implicit */unsigned long long int) min((var_11), ((+(((((/* implicit */_Bool) (+(arr_1 [i_1])))) ? (((arr_1 [3LL]) / (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) 
                {
                    var_12 ^= (!(((/* implicit */_Bool) arr_0 [i_0 + 1])));
                    var_13 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) ((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                }
                arr_10 [i_2] [i_1] [i_0] &= ((/* implicit */long long int) (~((~((~(((/* implicit */int) arr_2 [i_0]))))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        {
                            var_14 &= ((/* implicit */unsigned char) var_6);
                            var_15 *= ((/* implicit */unsigned int) (~(((int) ((int) arr_2 [i_0 - 4])))));
                            var_16 *= ((short) (~(arr_1 [i_0 + 1])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_21 [i_1] [i_0] [i_6] [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((unsigned int) var_8))))) ? ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31559))) : (var_9))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_2] [10U] [i_2] [(short)7] [i_2] [i_2])))))));
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        arr_25 [i_0 - 3] [i_0] [i_0] [(_Bool)1] [i_0 - 3] [i_0] = ((/* implicit */int) (~(1789595375U)));
                        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) max((var_5), (arr_0 [0])))) / ((~(-220232780))))))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [13U] [i_0] [0ULL] [i_0]))) + (18026833688230943896ULL))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_30 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_3 [(short)3] [i_8]);
                        arr_31 [i_0] [i_0] [12] [(_Bool)1] [12] = ((/* implicit */unsigned char) ((_Bool) (short)19074));
                        arr_32 [i_2] [i_2] [i_2] [i_6] = ((/* implicit */short) (+(((/* implicit */int) var_5))));
                    }
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) arr_13 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_6]))))))))))));
                }
            }
        }
        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            var_20 ^= (~(((/* implicit */int) var_4)));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_42 [10LL] [i_9] [(short)3] [i_10] [i_11] [i_11] = ((/* implicit */_Bool) max((1323767441U), (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) 3580442072U))))))));
                        var_21 ^= (~(((/* implicit */int) (unsigned char)218)));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_12 = 1; i_12 < 13; i_12 += 2) 
            {
                arr_45 [i_9] [i_12] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) (+(((/* implicit */int) (_Bool)1)))))) + (((/* implicit */int) (short)-12319))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_44 [i_0] [i_0 - 4] [i_0]))));
            }
        }
        var_23 = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0] [i_0] [12] [i_0 - 2])) / (((/* implicit */int) var_10))))))));
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 14; i_13 += 2) 
        {
            for (unsigned char i_14 = 3; i_14 < 12; i_14 += 2) 
            {
                {
                    var_24 &= ((short) (_Bool)1);
                    var_25 = arr_2 [i_0];
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (short i_16 = 3; i_16 < 12; i_16 += 2) 
                        {
                            arr_58 [i_0] [i_0] [i_0] [i_0] [6U] [i_0] [i_14] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) (short)26452))))) ? (var_0) : ((~(((/* implicit */int) var_7)))))) / (((/* implicit */int) arr_51 [i_13] [i_13] [i_13]))));
                            arr_59 [(unsigned char)12] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) + (((((/* implicit */_Bool) ((2604261074U) + (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)5416))))));
                        }
                        var_27 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) (+(var_0)))))));
                        arr_60 [4LL] [i_0] [i_0] [(short)4] [i_14] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_13] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((short) var_7))))) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) + ((-(18014398509219840ULL)))))));
                    }
                }
            } 
        } 
        arr_61 [i_0] = ((/* implicit */unsigned char) (short)26452);
    }
    var_28 = ((short) (+((~(((/* implicit */int) (short)-27432))))));
}
