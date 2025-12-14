/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44524
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
    var_19 = max((-2348558577852712685LL), (((/* implicit */long long int) (unsigned short)24589)));
    var_20 = ((unsigned short) var_9);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) - (max((var_15), (((/* implicit */int) arr_1 [13]))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))) >= (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [(signed char)2])), (arr_0 [i_0])))) : (max((var_11), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_1])), (arr_1 [i_1])))) ? (((long long int) var_2)) : (((/* implicit */long long int) min((((/* implicit */int) arr_3 [i_1])), (arr_0 [i_1]))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 - 1]))) : (((((/* implicit */_Bool) 5971993141866086699LL)) ? (((/* implicit */unsigned int) 1405281451)) : (1807654697U)))));
            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) -23974275))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_2 - 1] [i_2]))) | (2613132506U)));
            /* LoopSeq 3 */
            for (unsigned short i_3 = 2; i_3 < 10; i_3 += 3) 
            {
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (var_17)));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 1; i_4 < 10; i_4 += 3) 
                {
                    arr_18 [i_4 - 1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_1] [i_2] [i_2] [i_2 + 1])) / (((/* implicit */int) arr_14 [i_2] [i_1] [i_1] [i_2 - 2] [i_4 - 1] [i_4 + 1]))));
                    var_26 = ((/* implicit */int) arr_1 [i_2]);
                    var_27 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((((/* implicit */int) arr_14 [i_2] [i_1] [i_2] [i_4] [6LL] [i_2 - 2])) >= (var_3)))) : (arr_11 [i_2 - 2] [(unsigned short)1] [i_2 + 2] [i_3])));
                }
            }
            for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                arr_22 [i_1] [8ULL] = ((/* implicit */_Bool) arr_7 [i_1] [i_5] [i_1]);
                var_28 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1681834789U)) ? (((/* implicit */int) arr_4 [0LL])) : (((/* implicit */int) arr_12 [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_2 - 2] [i_2 + 1]))) : ((+(10350483495412900215ULL)))));
                var_29 ^= ((/* implicit */unsigned long long int) arr_20 [i_1] [i_1] [i_1]);
            }
            for (unsigned int i_6 = 2; i_6 < 10; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    for (short i_8 = 1; i_8 < 10; i_8 += 1) 
                    {
                        {
                            var_30 &= ((/* implicit */unsigned short) (-(var_10)));
                            arr_32 [i_1] [i_2] [i_6] [6LL] &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_15)))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_26 [i_1] [i_1] [7LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64243))))) : (((/* implicit */unsigned long long int) arr_29 [i_1] [i_1] [i_1] [i_1] [i_8 - 1]))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (~(2044316146))))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                for (int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    {
                        arr_38 [i_1] [i_1] [i_1] [i_1] [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_8 [i_1] [i_2 - 1] [10]) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)62)))))) - (((((/* implicit */_Bool) var_3)) ? (1596737572232462164ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_33 += ((/* implicit */unsigned int) arr_28 [i_1] [i_2] [i_9] [i_10] [(signed char)6] [i_9]);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            var_34 = ((long long int) 17310199527220015096ULL);
            arr_42 [i_1] [i_1] = var_0;
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_1] [i_1] [i_11] [i_1] [i_1])) ? (arr_37 [i_1] [i_11] [i_12] [i_1] [i_1]) : (arr_37 [8] [i_11] [i_11] [i_12] [i_12])));
                arr_45 [i_1] [i_12] [i_12] = ((/* implicit */_Bool) 3097112384U);
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    for (long long int i_14 = 2; i_14 < 10; i_14 += 2) 
                    {
                        {
                            var_36 = ((arr_29 [i_1] [i_1] [i_12] [i_13] [i_13]) << (((arr_29 [i_1] [(_Bool)1] [(short)6] [i_13] [i_14 - 1]) - (389802747))));
                            var_37 = ((/* implicit */long long int) max((var_37), ((((~(arr_19 [i_1] [i_11] [i_12] [i_1]))) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_14])))))));
                        }
                    } 
                } 
                var_38 = ((((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) >> (((var_0) - (2600509328U))));
            }
        }
        /* vectorizable */
        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 2) 
        {
            var_39 -= ((/* implicit */signed char) arr_43 [i_1] [i_15] [i_15] [i_15]);
            var_40 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22259))) >= (10350483495412900215ULL)));
        }
        /* vectorizable */
        for (signed char i_16 = 2; i_16 < 9; i_16 += 1) 
        {
            arr_57 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) arr_4 [i_1]));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 11; i_17 += 4) 
            {
                for (signed char i_18 = 0; i_18 < 11; i_18 += 4) 
                {
                    {
                        arr_63 [i_1] [i_16] [i_16] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_59 [i_16 - 2] [i_16 - 2] [i_16 - 1] [i_16 + 2])) ^ (((/* implicit */int) arr_59 [i_16 + 2] [i_16 + 1] [i_16 - 2] [i_16 + 1]))));
                        var_41 |= ((/* implicit */unsigned short) ((11077923634926920097ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_18])))));
                        arr_64 [(unsigned short)9] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)13093)) / (((/* implicit */int) (unsigned short)3903))));
                        arr_65 [i_1] = var_18;
                    }
                } 
            } 
            var_42 *= ((/* implicit */_Bool) ((long long int) arr_10 [2U]));
        }
    }
    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
    {
        var_43 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (+(arr_67 [i_19 - 1] [i_19])))))));
        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2243505218U)) ? (((/* implicit */unsigned long long int) 238336965)) : (16023552427074523765ULL)));
    }
}
