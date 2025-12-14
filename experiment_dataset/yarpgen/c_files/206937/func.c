/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206937
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)157)) : ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            var_19 += ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
            arr_5 [3U] = var_13;
        }
        arr_6 [i_0] |= ((/* implicit */unsigned char) (~(arr_1 [i_0 + 1] [i_0 + 2])));
        arr_7 [2U] = (unsigned char)146;
    }
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        arr_10 [(unsigned char)16] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ ((~(((((/* implicit */_Bool) 3357741600U)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151)))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_9 [i_2])) / (((/* implicit */int) arr_9 [i_2]))))));
    }
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_4 = 1; i_4 < 15; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                for (unsigned char i_6 = 2; i_6 < 18; i_6 += 3) 
                {
                    {
                        var_20 = min((((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_21 [(unsigned char)8] [i_5] [i_4] [(unsigned char)8])) || (((/* implicit */_Bool) var_1))))))), (arr_18 [i_4 - 1] [i_5] [i_6 - 1]));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_16 [i_5] [i_5])) : (((/* implicit */int) arr_14 [i_4])))) >> (((((/* implicit */int) ((unsigned char) var_5))) - (156))))))));
                            arr_25 [i_6] [i_5] [i_3] = ((((/* implicit */_Bool) arr_20 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6 - 1] [(unsigned char)12] [i_6] [i_6]))) : (2424040664U));
                        }
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            var_22 -= arr_27 [(unsigned char)13] [(unsigned char)13] [i_5];
                            arr_28 [i_3] [i_3] [16U] [(unsigned char)9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [(unsigned char)11] [i_6 - 1]))));
                        }
                    }
                } 
            } 
        } 
        arr_29 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3]))) != (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (var_17)))));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            var_23 += ((1870926631U) * (2424040664U));
            /* LoopNest 2 */
            for (unsigned char i_10 = 1; i_10 < 17; i_10 += 1) 
            {
                for (unsigned char i_11 = 1; i_11 < 16; i_11 += 4) 
                {
                    {
                        var_24 += ((((unsigned int) arr_33 [i_11 + 2] [i_10 - 1])) * (((/* implicit */unsigned int) (-(((/* implicit */int) arr_33 [i_11 + 3] [i_10 + 1]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) 
                        {
                            arr_43 [i_3] [18U] [i_10] [i_9] [i_3] = var_15;
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((unsigned char) (((+(((/* implicit */int) (unsigned char)133)))) < (((/* implicit */int) ((unsigned char) arr_24 [i_9] [i_9] [i_10] [i_9] [i_3])))))))));
                            arr_44 [i_12] |= ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) var_4)))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_12] [i_12] [i_12] [i_10 + 2] [i_12] [i_10 + 2] [i_10 + 2])) && (((/* implicit */_Bool) var_3))))))));
                            arr_45 [i_9] = arr_26 [i_3] [i_9] [4U] [i_10] [i_11] [i_12];
                            arr_46 [i_9] [i_9] [i_10] [i_11] [i_9] [i_12] = ((/* implicit */unsigned char) ((2174131985U) ^ (max((var_9), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_30 [i_9] [i_9] [i_10])))))))));
                        }
                    }
                } 
            } 
            var_26 *= ((unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130))) : (2844254141U)));
        }
        arr_47 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)131))));
        arr_48 [1U] &= var_12;
    }
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 19; i_13 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_14 = 0; i_14 < 19; i_14 += 2) 
        {
            for (unsigned char i_15 = 0; i_15 < 19; i_15 += 2) 
            {
                for (unsigned int i_16 = 0; i_16 < 19; i_16 += 1) 
                {
                    {
                        var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_12 [(unsigned char)10])))) : (var_9)));
                        arr_61 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) arr_42 [i_16] [i_15] [i_15] [i_15] [i_14] [(unsigned char)6] [i_13]);
                        arr_62 [i_16] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_13] [i_14]))) & (arr_12 [(unsigned char)0]));
                    }
                } 
            } 
        } 
        arr_63 [i_13] [(unsigned char)16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [(unsigned char)12] [(unsigned char)12] [(unsigned char)12])))))) ? (arr_19 [3U] [i_13] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [12U] [(unsigned char)0])))));
        var_28 -= ((/* implicit */unsigned char) ((arr_39 [(unsigned char)11]) != (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))));
    }
    var_29 &= ((/* implicit */unsigned int) var_12);
    var_30 -= (((-(max((((/* implicit */unsigned int) var_3)), (var_7))))) << (((((((/* implicit */_Bool) max((var_7), (2588215075U)))) ? (((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)12), (var_18))))))) - (466657511U))));
    var_31 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_18))))), (((((((/* implicit */_Bool) var_18)) ? (2424040664U) : (1528096963U))) + (var_14)))));
}
