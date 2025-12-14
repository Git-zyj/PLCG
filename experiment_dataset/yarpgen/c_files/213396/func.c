/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213396
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
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 2]))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_14))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    for (long long int i_4 = 2; i_4 < 11; i_4 += 1) 
                    {
                        {
                            arr_11 [i_2] [(signed char)8] [i_1] [i_1] [i_2] [i_3] [i_4 - 1] = ((short) 3337059770382330074ULL);
                            arr_12 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) (unsigned short)32640));
                            var_22 = ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0 - 1]);
                            var_23 ^= ((/* implicit */unsigned int) ((unsigned char) 3337059770382330066ULL));
                        }
                    } 
                } 
            } 
            arr_13 [i_0] = ((/* implicit */short) ((int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 2]));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 1) 
                {
                    {
                        var_24 *= ((/* implicit */signed char) ((3337059770382330083ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36784)))));
                        arr_22 [i_0] [i_0] [i_6] [4LL] = (~(((/* implicit */int) var_9)));
                        var_25 = ((/* implicit */short) var_17);
                    }
                } 
            } 
            arr_23 [i_0] [i_5] = var_2;
        }
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (signed char i_9 = 1; i_9 < 10; i_9 += 1) 
            {
                {
                    arr_32 [i_9] [i_8] [i_9] = ((/* implicit */signed char) arr_0 [(_Bool)1]);
                    arr_33 [i_9] [i_0 - 1] [i_9] = ((/* implicit */_Bool) (unsigned char)203);
                }
            } 
        } 
    }
    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) 
    {
        arr_37 [i_10] = max((((/* implicit */unsigned long long int) 1632494921)), (((unsigned long long int) ((arr_16 [i_10] [i_10] [i_10]) > (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
        arr_38 [(short)9] [i_10] = arr_20 [i_10] [i_10] [i_10] [i_10];
    }
    /* LoopSeq 3 */
    for (long long int i_11 = 1; i_11 < 17; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 2; i_13 < 16; i_13 += 1) 
            {
                for (unsigned short i_14 = 1; i_14 < 17; i_14 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)36783)) != (((/* implicit */int) (_Bool)1)))))));
                        arr_50 [i_11] [i_11] [i_14] [(short)11] [i_11] [(short)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)13410)) ? (((/* implicit */int) (short)12367)) : (((/* implicit */int) arr_42 [i_11]))));
                        var_27 = ((/* implicit */_Bool) max((var_27), ((!((_Bool)1)))));
                    }
                } 
            } 
        } 
        arr_51 [i_11] [(_Bool)1] = ((/* implicit */short) arr_40 [i_11]);
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) 2041365855)))))));
    }
    for (signed char i_15 = 0; i_15 < 18; i_15 += 1) 
    {
        var_29 ^= ((/* implicit */unsigned int) (-(var_15)));
        var_30 = ((/* implicit */long long int) max(((~(var_17))), (((/* implicit */unsigned long long int) arr_52 [i_15]))));
    }
    for (unsigned int i_16 = 3; i_16 < 9; i_16 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
        {
            for (unsigned int i_18 = 0; i_18 < 11; i_18 += 1) 
            {
                {
                    arr_64 [i_16] [i_16] = ((/* implicit */unsigned short) ((arr_31 [i_16] [i_16] [(short)11] [i_18]) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-127))))) : (max((((/* implicit */long long int) arr_9 [i_16] [i_17] [i_18] [i_16] [i_16 + 1])), (max((((/* implicit */long long int) var_19)), (var_16)))))));
                    var_31 ^= ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned int) (short)-32746))), (max((var_16), (((/* implicit */long long int) arr_14 [(unsigned short)9] [(unsigned short)9] [i_18]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_19 = 0; i_19 < 11; i_19 += 1) 
        {
            for (unsigned short i_20 = 1; i_20 < 8; i_20 += 1) 
            {
                {
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)115))))))))));
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~((-(arr_29 [i_16 - 2] [1ULL])))))) > (((unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_10 [i_16] [i_16] [i_16] [i_16] [i_19] [i_16])) : (((/* implicit */int) arr_5 [i_16] [i_19] [8ULL] [i_20])))))));
                }
            } 
        } 
    }
}
