/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221515
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 2110419409))))) << (((/* implicit */int) var_10))));
                arr_5 [i_0] &= ((/* implicit */signed char) (((-(((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))) | (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) >= (((/* implicit */int) arr_0 [i_0])))))));
                var_18 = ((/* implicit */unsigned char) min((17058327256382900970ULL), (((/* implicit */unsigned long long int) arr_1 [(short)3]))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) arr_7 [i_4])) ? ((+(((/* implicit */int) arr_7 [i_2])))) : (((((/* implicit */int) arr_7 [i_2])) / (((/* implicit */int) arr_7 [i_4])))));
                    arr_12 [i_4] [i_3] [i_4] [i_4] = ((/* implicit */short) arr_11 [i_3] [i_3] [i_3]);
                    var_20 += ((/* implicit */int) var_1);
                }
            } 
        } 
        arr_13 [(unsigned short)0] [i_2] = arr_11 [i_2] [i_2] [i_2];
    }
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
    {
        var_21 += ((/* implicit */unsigned short) arr_15 [i_5]);
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            arr_21 [i_6] = ((/* implicit */int) ((long long int) (~(((/* implicit */int) (signed char)81)))));
            arr_22 [i_5] [(signed char)0] = ((/* implicit */long long int) arr_11 [i_5] [i_5] [(short)6]);
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) var_16)))))) ? (((((((/* implicit */_Bool) 958550154U)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_12))) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5] [i_5] [(signed char)0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_20 [i_5] [i_5])) == (((/* implicit */int) arr_8 [i_5] [i_5]))))))));
        }
        var_23 = ((/* implicit */unsigned char) ((unsigned int) arr_17 [i_5]));
    }
    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_7] [i_7])) + (((/* implicit */int) arr_23 [7] [i_7]))))) - (arr_24 [1ULL] [i_7])));
        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_7]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            arr_30 [i_7] = ((/* implicit */unsigned long long int) (~(arr_24 [i_7] [i_7])));
            arr_31 [16ULL] [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_29 [(_Bool)1] [i_8] [i_7]);
            var_26 = (-(((/* implicit */int) arr_29 [i_7] [i_7] [i_8])));
            /* LoopSeq 1 */
            for (signed char i_9 = 1; i_9 < 18; i_9 += 3) 
            {
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_27 [0U] [i_8] [i_9]))) > (((((/* implicit */_Bool) arr_26 [i_7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_26 [i_7]))))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_2))))) % (((/* implicit */int) arr_28 [i_7]))));
                arr_34 [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_29 [i_7] [i_8] [(short)16])) ? (((/* implicit */int) arr_29 [i_7] [(_Bool)1] [i_9 + 2])) : (((/* implicit */int) arr_29 [i_7] [8] [i_9])))) != (-1237760869)));
            }
        }
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (short i_12 = 2; i_12 < 18; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_27 [i_7] [i_10] [i_11])) ? (arr_37 [i_12 + 2] [i_11] [9ULL] [i_7]) : (((/* implicit */unsigned long long int) var_8))))));
                            arr_46 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
                            arr_47 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_44 [i_7] [i_10] [i_10] [i_12 - 2] [i_13])) >= (((/* implicit */int) arr_40 [i_12] [i_10] [i_11] [i_12 - 1] [i_13]))));
                            arr_48 [5U] [i_12 - 2] [i_13] = ((/* implicit */signed char) arr_40 [(_Bool)1] [i_12 + 1] [i_12 + 1] [i_12 + 2] [(signed char)6]);
                        }
                    } 
                } 
            } 
            var_30 *= ((/* implicit */unsigned long long int) arr_42 [i_7] [i_7]);
            arr_49 [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((_Bool) arr_40 [i_7] [i_7] [i_7] [i_7] [i_7]));
            var_31 = ((/* implicit */int) arr_27 [i_7] [i_10] [(short)13]);
            arr_50 [i_7] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_10])) ? (((/* implicit */int) arr_29 [i_7] [i_7] [i_7])) : (((/* implicit */int) var_4))))) ? (arr_41 [i_7] [i_7] [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_10] [i_7] [0])))));
        }
    }
}
