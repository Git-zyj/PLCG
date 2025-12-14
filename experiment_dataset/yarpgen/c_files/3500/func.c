/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3500
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
    var_19 = ((/* implicit */short) ((((/* implicit */int) ((var_7) != ((+(var_2)))))) + ((~(((((/* implicit */_Bool) 4196863733U)) ? (var_15) : (var_15)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_20 = ((((/* implicit */_Bool) var_3)) ? (-9223372036854775797LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (var_18)))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned int) 9223372036854775807LL);
            var_21 = var_3;
            var_22 = ((((/* implicit */_Bool) -9223372036854775797LL)) ? (((/* implicit */long long int) 536870912)) : (9223372036854775807LL));
        }
        for (long long int i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
        {
            arr_9 [i_0] = ((/* implicit */unsigned int) (~(((-6799445128167396146LL) / (var_1)))));
            /* LoopNest 3 */
            for (long long int i_3 = 2; i_3 < 23; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            arr_16 [i_5] [i_0] [i_5] [i_0] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) arr_10 [i_0])) : (arr_8 [i_3] [i_2] [i_3 - 1])));
                            var_23 = ((/* implicit */int) ((var_3) < (((/* implicit */unsigned int) arr_4 [i_3 + 2] [23LL] [i_3 - 2]))));
                            var_24 = arr_4 [i_3 - 2] [i_3 + 1] [i_3];
                            arr_17 [i_5] [i_5] [i_3] [8LL] [10LL] &= ((/* implicit */long long int) 3239491269U);
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] [1LL] = ((/* implicit */unsigned long long int) ((unsigned int) 2147483647));
                        }
                    } 
                } 
            } 
            arr_19 [i_0] [i_2] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        {
                            var_25 = ((((((/* implicit */_Bool) (short)-27768)) || (((/* implicit */_Bool) -375091745)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_8] [i_8]))))));
                            arr_30 [i_0] [i_0] = ((/* implicit */short) ((arr_10 [i_0]) / (var_10)));
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_14))));
                            var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) var_3)) < (var_9))))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned int) var_13)) != (1055476026U))));
        }
        for (long long int i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
        {
            var_29 = ((((/* implicit */_Bool) arr_20 [i_0] [i_9])) ? (arr_20 [i_0] [i_9]) : (var_18));
            /* LoopNest 3 */
            for (long long int i_10 = 2; i_10 < 22; i_10 += 1) 
            {
                for (int i_11 = 4; i_11 < 23; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        {
                            var_30 = (~(arr_40 [i_10 - 2] [i_10 - 1] [i_0] [i_11] [i_11 + 2] [i_0]));
                            var_31 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_4 [5] [(short)13] [i_10 + 1])) / (var_17)));
                            arr_43 [i_0] [i_10] [i_0] = ((/* implicit */short) var_11);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (int i_13 = 0; i_13 < 25; i_13 += 1) 
            {
                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)27785)) ? (3239491270U) : (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_13])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) != (var_18))))))))));
                arr_46 [13LL] [i_0] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (3239491269U) : (((/* implicit */unsigned int) arr_26 [i_0] [i_13]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (arr_40 [i_0] [i_0] [i_0] [i_9] [i_13] [(short)20]) : (333559257U)))) : (arr_14 [i_0] [i_13])));
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 1; i_15 < 24; i_15 += 4) 
                    {
                        {
                            var_33 ^= ((((/* implicit */_Bool) 1965363908U)) ? (arr_41 [i_15] [12U] [i_15] [i_15 + 1] [i_15 - 1]) : (((/* implicit */unsigned long long int) 4165451092U)));
                            arr_53 [i_0] [i_15] = ((/* implicit */int) (+(arr_49 [10] [i_15] [i_15 + 1] [i_15 - 1] [i_15 + 1])));
                        }
                    } 
                } 
                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_13] [i_9] [23LL] [i_0])) && (((/* implicit */_Bool) var_5))));
            }
            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((long long int) arr_6 [i_9])))));
        }
        var_36 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_18)) : ((-9223372036854775807LL - 1LL))))));
        /* LoopSeq 1 */
        for (long long int i_16 = 0; i_16 < 25; i_16 += 4) 
        {
            arr_56 [i_0] = var_4;
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 25; i_17 += 4) 
            {
                for (short i_18 = 1; i_18 < 24; i_18 += 4) 
                {
                    for (unsigned long long int i_19 = 2; i_19 < 22; i_19 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((int) var_10)))));
                            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_16] [i_16])))))));
                            var_39 = ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_19 + 1] [i_18 + 1] [i_17] [i_18] [15ULL])) ? (((/* implicit */long long int) var_18)) : (arr_22 [i_19 + 2] [i_18 + 1] [i_18 + 1] [i_0])));
                        }
                    } 
                } 
            } 
            var_40 = ((/* implicit */int) var_5);
        }
    }
}
