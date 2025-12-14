/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32350
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_15 &= ((/* implicit */unsigned char) arr_0 [i_1]);
                    var_16 = ((/* implicit */unsigned int) min((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 1992851039U)) >= (0LL))))) <= (arr_6 [19LL] [i_1] [i_0]))))));
                    arr_8 [i_2] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [(unsigned short)4] [i_1] [i_2])))) | (((15143049118075498494ULL) - (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) arr_7 [i_0]))));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) var_9);
        arr_9 [i_0] = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0]);
    }
    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 3) 
    {
        arr_13 [i_3] [17U] = ((/* implicit */unsigned long long int) var_1);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_4 = 4; i_4 < 17; i_4 += 3) 
        {
            var_18 = ((/* implicit */short) (~(((/* implicit */int) arr_14 [i_4 - 3]))));
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 1) 
                    {
                        {
                            arr_24 [18U] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_4])) - (((/* implicit */int) arr_14 [i_7]))))) == (((unsigned long long int) arr_10 [i_6] [i_5]))));
                            var_19 = ((/* implicit */signed char) arr_15 [i_3]);
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((arr_22 [i_3] [(unsigned short)0] [(unsigned char)7] [i_7 + 1] [i_7 + 1] [i_7]) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7 + 4] [i_4 + 1] [i_3 - 2]))))))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_4))));
                        }
                    } 
                } 
            } 
        }
        for (int i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (short i_9 = 2; i_9 < 17; i_9 += 2) 
            {
                for (unsigned int i_10 = 3; i_10 < 18; i_10 += 3) 
                {
                    {
                        var_22 = ((unsigned short) arr_26 [i_8] [i_8] [i_8]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_9 + 2] [i_10 - 2])) && (((/* implicit */_Bool) arr_4 [i_3 - 2] [i_9 - 2] [i_10 - 1]))));
                            var_24 = ((/* implicit */unsigned int) arr_29 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]);
                        }
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((short) var_6)))));
                            arr_38 [i_3] [i_8] [i_8] [i_10] [i_12] [i_3 - 3] = ((/* implicit */unsigned long long int) arr_23 [i_8]);
                            arr_39 [(signed char)16] [i_8] [i_9] [(unsigned char)4] [(unsigned char)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15143049118075498494ULL)) ? (((unsigned long long int) arr_0 [i_8])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_9 - 2] [i_9 - 2]))) != (753209324302049880LL)))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_9 + 1] [i_3 - 1])) ? (((/* implicit */long long int) ((unsigned int) arr_32 [i_3] [i_8] [i_8] [i_3]))) : (((arr_21 [i_3] [i_10] [i_9]) + (((/* implicit */long long int) arr_18 [i_3] [i_3] [i_3] [i_12]))))));
                        }
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) max((4871712504776508919LL), (((/* implicit */long long int) (unsigned short)50208)))))));
        }
        /* vectorizable */
        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            arr_43 [i_13] [i_13] = ((/* implicit */signed char) (-(arr_28 [i_13] [i_13] [i_13] [i_3 - 1])));
            var_28 = arr_1 [i_3 - 3];
        }
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) 
    {
        arr_46 [i_14] = ((/* implicit */int) arr_7 [i_14]);
        arr_47 [i_14] = ((/* implicit */long long int) arr_20 [i_14] [(unsigned char)10]);
        arr_48 [i_14] = 18014398509480960LL;
        var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) -4972157991098744027LL)) % (var_2))) < (((((/* implicit */unsigned long long int) 4871712504776508919LL)) & (var_2)))));
        /* LoopSeq 3 */
        for (unsigned int i_15 = 0; i_15 < 14; i_15 += 2) 
        {
            var_30 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_15] [i_15] [i_15] [i_14] [i_14] [i_14] [i_15])) || (((/* implicit */_Bool) arr_35 [i_15] [i_14] [4] [i_15] [i_15] [i_15] [i_15]))));
            /* LoopSeq 1 */
            for (int i_16 = 1; i_16 < 12; i_16 += 3) 
            {
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_54 [i_16 + 2] [i_16 + 2] [i_16] [i_16])) & (arr_34 [i_14] [i_16 + 2] [i_16 + 2] [i_16 + 1])));
                var_32 *= ((/* implicit */unsigned char) var_10);
            }
            arr_55 [i_14] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_14] [i_15])) != (((/* implicit */int) arr_3 [i_14]))));
            var_33 = ((/* implicit */short) 1455817427U);
        }
        for (unsigned int i_17 = 0; i_17 < 14; i_17 += 3) 
        {
            arr_59 [0LL] |= ((/* implicit */unsigned short) var_12);
            /* LoopSeq 1 */
            for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 2) 
            {
                arr_62 [i_14] [i_17] [5ULL] = 0LL;
                var_34 = ((/* implicit */unsigned int) (unsigned char)70);
            }
            arr_63 [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_10)) != (arr_4 [i_14] [i_17] [i_14]))))));
        }
        for (unsigned int i_19 = 0; i_19 < 14; i_19 += 3) 
        {
            var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((arr_35 [14] [6ULL] [i_19] [14] [i_14] [i_14] [14]) & (((/* implicit */unsigned long long int) arr_42 [i_14] [(unsigned short)8] [i_19])))))));
            var_36 = ((/* implicit */unsigned char) arr_3 [i_19]);
            var_37 = ((/* implicit */unsigned short) arr_6 [i_19] [i_14] [i_14]);
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_20 = 0; i_20 < 25; i_20 += 2) 
    {
        for (unsigned char i_21 = 0; i_21 < 25; i_21 += 1) 
        {
            {
                var_38 = ((/* implicit */unsigned int) arr_67 [17]);
                arr_74 [i_21] [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) arr_70 [i_20] [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_70 [i_21] [i_20])))) : (max((arr_70 [i_20] [i_21]), (arr_70 [i_20] [i_21])))));
                arr_75 [21U] = ((/* implicit */unsigned long long int) (-(0LL)));
            }
        } 
    } 
}
