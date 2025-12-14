/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213470
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] |= max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))), ((signed char)-114));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) max((arr_9 [i_1] [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 2] [i_1 + 2]), (min((arr_9 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1]), (((/* implicit */int) (short)32749))))));
                        var_20 = ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_2] [(signed char)8] [i_2] [i_3]);
                        arr_11 [0ULL] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)26)), (arr_6 [i_1 - 1] [i_1 + 2])))) + (((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1 + 1])) ? (arr_1 [i_1 + 1]) : (((/* implicit */unsigned long long int) arr_6 [i_1 + 1] [i_1 + 2]))))));
                    }
                } 
            } 
            var_21 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_9 [i_0] [4] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)6197)) : (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1 - 2] [(signed char)8])))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    {
                        var_22 -= ((/* implicit */unsigned long long int) arr_8 [10ULL] [(unsigned short)8] [i_0] [11] [i_5]);
                        arr_19 [i_0] [i_1] [i_4] [i_5] [i_5] = ((/* implicit */int) arr_17 [i_5] [i_4] [i_0]);
                        arr_20 [i_0] [i_1] [i_1 + 1] [i_0] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((max((min((((/* implicit */long long int) 1557435978)), (var_14))), (((/* implicit */long long int) ((int) arr_15 [i_5] [(short)1] [9ULL] [(unsigned short)8] [i_0]))))) != (((/* implicit */long long int) ((/* implicit */int) arr_16 [(signed char)9] [i_1] [i_4] [(short)1])))));
                        arr_21 [i_0] [i_0] [i_1 + 1] [i_4] [i_5] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6186)) ? (((/* implicit */int) (unsigned short)35153)) : (((/* implicit */int) (unsigned short)35153)))))))), (arr_6 [i_5] [i_0])));
                        var_23 = ((/* implicit */int) max((var_23), ((+(((/* implicit */int) (unsigned short)35146))))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (signed char i_7 = 2; i_7 < 13; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    {
                        arr_28 [i_0] [i_0] [7] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)32758))));
                        arr_29 [i_0] [i_0] [i_7] [i_7] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) * (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0])))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
    {
        for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            {
                var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) ((unsigned short) 268435455))))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    for (signed char i_12 = 2; i_12 < 8; i_12 += 2) 
                    {
                        {
                            arr_40 [i_9] [i_10] [i_11] [i_12] = ((/* implicit */short) arr_1 [i_11]);
                            var_25 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_12] [1LL] [9LL] [i_12] [i_12 + 1] [i_12 + 2])) ? (((/* implicit */int) var_7)) : (arr_9 [(_Bool)0] [i_12] [i_12] [i_12] [i_12 + 1] [i_12 + 2])))) ? (((/* implicit */int) ((arr_24 [10] [10] [i_12 + 1] [i_12 + 2]) >= (arr_24 [i_12 + 4] [i_12 - 2] [i_12 + 1] [i_12 + 2])))) : ((~(arr_9 [i_12] [i_12] [i_12] [i_12 + 2] [i_12 + 1] [i_12 + 2]))));
                            var_26 = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) -149195863582378903LL)) ? (((/* implicit */int) arr_37 [i_9] [(short)3] [(short)3] [i_11] [i_12])) : (((/* implicit */int) (unsigned short)16595)))))) == (((int) ((((/* implicit */_Bool) arr_17 [i_9] [i_11] [1LL])) ? (arr_35 [i_10] [i_10] [i_12]) : (arr_31 [i_9]))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */short) min((((/* implicit */int) max((arr_39 [i_9] [i_9] [i_10]), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)65510)))))))), (arr_9 [10] [i_10] [(_Bool)0] [(_Bool)0] [i_9] [i_9])));
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (min(((+(524288))), (((/* implicit */int) arr_0 [(short)9])))) : (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)784)), (arr_14 [i_9] [i_9] [(unsigned short)1] [(signed char)3])))) ? (((/* implicit */int) arr_39 [3LL] [1ULL] [i_10])) : ((~(((/* implicit */int) var_16))))))));
                arr_41 [i_9] [i_9] = ((/* implicit */int) ((signed char) (+(min((((/* implicit */unsigned long long int) (unsigned short)35153)), (18446744073709551615ULL))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 16; i_13 += 1) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 2) 
        {
            for (signed char i_15 = 0; i_15 < 16; i_15 += 2) 
            {
                {
                    arr_49 [i_13] [i_13] [i_13] = ((/* implicit */int) arr_46 [i_13] [i_13]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 16; i_16 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_47 [i_13] [(unsigned short)15] [i_13] [i_13])) + (var_2)));
                        var_30 = ((/* implicit */int) (~(arr_46 [i_13] [i_14])));
                        var_31 = ((/* implicit */short) ((arr_43 [i_13] [i_14]) != (arr_43 [i_15] [i_14])));
                        arr_52 [i_13] [12] [i_15] [i_16] = ((/* implicit */unsigned long long int) -1LL);
                        var_32 = ((/* implicit */unsigned short) ((var_5) > (((/* implicit */long long int) var_19))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_33 = ((/* implicit */int) max((((((/* implicit */_Bool) ((5977173300423901290LL) >> (((((/* implicit */int) arr_42 [i_14])) + (15862)))))) ? (((arr_47 [i_15] [i_15] [i_17] [i_17]) ? (18446744073709551590ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27567))))) : (((/* implicit */unsigned long long int) arr_43 [i_13] [i_13])))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_42 [i_15])) ? (((/* implicit */int) (unsigned short)55659)) : (-67108864))) / ((+(var_19))))))));
                        var_34 ^= ((/* implicit */signed char) ((unsigned short) (-(((((/* implicit */int) arr_47 [i_13] [i_14] [4ULL] [i_17])) * (((/* implicit */int) arr_42 [i_13])))))));
                        var_35 = ((/* implicit */unsigned char) ((int) arr_50 [i_13] [i_14] [6]));
                        var_36 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)31)) / (((/* implicit */int) (unsigned short)30395))))) / (min((((/* implicit */unsigned long long int) var_9)), (arr_46 [i_13] [i_14]))))) * (arr_44 [i_13] [i_14])));
                    }
                    /* vectorizable */
                    for (long long int i_18 = 0; i_18 < 16; i_18 += 4) 
                    {
                        arr_57 [i_13] [i_13] [(signed char)4] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_51 [(unsigned char)1] [(unsigned char)1] [i_15] [i_15]))) ? (((/* implicit */int) ((short) -221638340))) : (var_19)));
                        arr_58 [i_13] [i_13] [i_15] [i_18] = ((/* implicit */int) ((unsigned short) ((unsigned char) arr_55 [i_14] [i_13])));
                        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (unsigned char)246))));
                        var_38 = ((/* implicit */long long int) ((arr_46 [i_13] [i_13]) > (arr_46 [i_13] [i_18])));
                    }
                    var_39 = (-(((/* implicit */int) (unsigned char)248)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_19 = 0; i_19 < 16; i_19 += 2) 
    {
        for (int i_20 = 1; i_20 < 15; i_20 += 2) 
        {
            {
                arr_65 [i_20] = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */long long int) -2108383630)) > (-5977173300423901291LL)))), ((-(arr_43 [i_19] [i_20 + 1])))));
                var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_59 [i_19])))))));
            }
        } 
    } 
}
