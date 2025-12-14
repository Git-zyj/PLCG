/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203162
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
    var_15 = ((/* implicit */signed char) var_14);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(unsigned char)5] = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */long long int) (-(((((/* implicit */int) arr_1 [i_2] [i_1])) - (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_3]))))));
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */short) ((unsigned long long int) (signed char)54));
                        var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_2] [i_0]))));
                        /* LoopSeq 4 */
                        for (int i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            var_18 |= ((/* implicit */short) (-(arr_8 [i_0] [i_1] [i_2] [i_3])));
                            arr_15 [i_0] [i_1] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) arr_7 [i_1])))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(arr_9 [i_0] [i_1] [i_3] [i_5]))))));
                            var_20 = ((/* implicit */long long int) (+((+(1289994793)))));
                        }
                        for (int i_6 = 1; i_6 < 24; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_3] [i_6]))))));
                            var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))));
                            var_23 = ((/* implicit */unsigned int) ((arr_9 [i_3] [i_6 - 1] [i_6] [i_6 + 1]) ? (arr_10 [i_1] [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_1] [i_6] [i_1]))))))));
                        }
                        for (short i_7 = 1; i_7 < 23; i_7 += 2) 
                        {
                            arr_24 [i_0] [i_1] [i_1] [i_3] [i_7] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_7 [i_1]))))));
                            var_24 *= ((/* implicit */unsigned int) (-(arr_21 [i_3] [i_7] [i_3])));
                            var_25 = ((/* implicit */long long int) ((arr_9 [i_0] [i_2] [i_3] [i_7 + 1]) ? (((/* implicit */int) arr_1 [i_0] [i_2])) : (((/* implicit */int) arr_1 [i_0] [i_7 - 1]))));
                            var_26 = (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_1] [i_7 - 1])));
                        }
                        var_27 = ((/* implicit */int) ((arr_12 [i_1]) * (arr_12 [i_2])));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_28 -= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65156))));
        /* LoopSeq 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(min((-7008563061556978142LL), (-7008563061556978139LL))))))));
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) <= (-701220207)));
            var_31 &= ((/* implicit */unsigned short) min((min(((-(arr_5 [6ULL]))), (((/* implicit */unsigned long long int) arr_16 [i_8] [i_8] [i_9] [i_9] [(unsigned char)8])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_25 [i_8] [i_9]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_8] [i_9] [(short)18] [i_9] [i_9]))))) : (min((((/* implicit */int) arr_18 [i_9] [i_8] [i_8] [i_8] [i_8])), (arr_13 [i_8] [i_8] [i_9] [i_9] [(signed char)24]))))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(11ULL)))) ? (min((arr_28 [i_10] [i_8]), (((/* implicit */int) arr_19 [i_8] [i_8] [(signed char)16] [i_10] [i_10])))) : (min((min((arr_28 [i_10] [i_8]), (((/* implicit */int) arr_27 [i_8] [i_8] [i_10])))), (((/* implicit */int) arr_26 [i_10]))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_11 = 2; i_11 < 22; i_11 += 4) 
            {
                var_33 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_11 - 1]))));
                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_11]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_8] [i_10])))))));
                var_35 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_21 [i_11] [i_10] [i_11]) <= (((/* implicit */int) arr_7 [i_11]))))) / (((/* implicit */int) arr_18 [i_11 + 1] [i_11] [i_11] [9LL] [i_11 - 2]))));
            }
            /* vectorizable */
            for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
            {
                arr_41 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_8] [i_8] [i_12]))))) / (((((/* implicit */_Bool) arr_28 [i_8] [i_8])) ? (arr_33 [i_12] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_10] [i_8])))))));
                var_36 = ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_8] [i_10]))) + ((-(arr_17 [i_12] [i_12] [i_12] [i_8] [i_8]))));
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 1; i_14 < 22; i_14 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */short) (((+(arr_12 [i_10]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_14])))));
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_8] [i_8] [i_8] [i_8] [i_8]))))) ? (((/* implicit */int) arr_22 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_8] [i_8] [i_12] [i_14])))))));
                            var_39 = ((/* implicit */short) ((arr_16 [i_10] [i_10] [i_10] [i_10] [i_10]) | (arr_16 [i_12] [i_12] [i_12] [i_12] [i_12])));
                        }
                    } 
                } 
                var_40 = arr_29 [i_12] [i_10] [i_8];
            }
            var_41 = ((/* implicit */signed char) ((unsigned long long int) min((134217728U), (((/* implicit */unsigned int) (unsigned short)32271)))));
        }
    }
    for (short i_15 = 0; i_15 < 20; i_15 += 1) 
    {
        arr_52 [i_15] = ((/* implicit */unsigned int) ((signed char) (-(((arr_16 [i_15] [i_15] [i_15] [i_15] [i_15]) + (((/* implicit */unsigned int) arr_43 [i_15] [(unsigned short)0] [i_15] [i_15] [i_15] [i_15])))))));
        var_42 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [i_15] [i_15] [i_15]))));
    }
    var_43 ^= ((/* implicit */signed char) var_14);
}
