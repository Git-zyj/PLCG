/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49671
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
    var_20 = ((/* implicit */unsigned char) var_2);
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)80)) && (((/* implicit */_Bool) (unsigned char)165))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -4412307437428204763LL)))))) == (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_1])), (288230376084602880LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_1 + 1])) : (((/* implicit */int) arr_5 [i_1]))))) : (((((/* implicit */_Bool) var_7)) ? (0LL) : (var_2)))))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned char) arr_0 [i_0 + 3]))), (max((((/* implicit */long long int) arr_0 [i_0 + 4])), (2305843009213693952LL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned char) max((((((10LL) + (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2]))))) ^ (((((/* implicit */_Bool) (unsigned char)40)) ? (-2305843009213693963LL) : (var_3))))), (((((/* implicit */_Bool) 2305843009213693962LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (((((/* implicit */_Bool) arr_5 [(unsigned char)10])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))) : (-4263131781868492100LL)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_4 = 1; i_4 < 10; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 7; i_5 += 2) 
                    {
                        for (long long int i_6 = 1; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_24 += ((/* implicit */unsigned char) ((long long int) arr_15 [i_5 + 1] [i_5] [i_5 - 2] [i_5]));
                                var_25 = ((long long int) (unsigned char)136);
                                arr_23 [i_6 + 1] [i_5] [0LL] |= arr_17 [i_2] [i_5 - 2] [i_4] [i_5];
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_4 - 1] [i_2] [i_4 - 1] [i_4 - 1])) ? (((long long int) (unsigned char)40)) : (((((/* implicit */_Bool) var_7)) ? (var_6) : (-288230376084602880LL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        arr_26 [i_2] [i_3] [i_4 - 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_4 - 1] [i_3] [i_4 - 1] [i_7])) ? (((/* implicit */int) arr_25 [i_4] [i_4 + 1] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_21 [i_4 + 1] [2LL] [i_4 + 1] [i_4 - 1]))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 1; i_8 < 10; i_8 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2305843009213693971LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_29 [i_7] [i_8 - 1] [i_8 - 1] [i_7])))))));
                            arr_30 [i_8 - 1] [i_2] [i_2] [9LL] [i_2] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_0 [i_7]))))));
                            arr_31 [(unsigned char)6] [i_7] [(unsigned char)2] [i_7] [i_7] |= ((/* implicit */unsigned char) 5154356510176347834LL);
                            arr_32 [i_2] [i_3] [i_3] [i_2] = ((/* implicit */long long int) arr_17 [i_2] [i_4 + 1] [i_4] [i_3]);
                        }
                        var_28 = ((/* implicit */long long int) max((var_28), (9223372036854775807LL)));
                    }
                }
                /* vectorizable */
                for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 2; i_11 < 10; i_11 += 3) 
                        {
                            {
                                arr_39 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_11] [5LL] [i_11 - 2] [i_11])) * (((/* implicit */int) arr_21 [i_11] [i_11] [i_11 - 2] [i_11 - 2]))));
                                arr_40 [i_2] [i_9] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_22 [i_2] [i_2] [i_3] [i_11 + 1] [i_2]))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_9] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3)))) : (var_2))))));
                }
                arr_41 [i_2] [i_3] [i_3] = max((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) var_4))))) || (((/* implicit */_Bool) arr_34 [i_2] [i_2]))))), (min((((((/* implicit */_Bool) -1LL)) ? (-5154356510176347834LL) : (10LL))), (2305843009213693952LL))));
                /* LoopNest 3 */
                for (long long int i_12 = 2; i_12 < 7; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            {
                                var_30 = ((((/* implicit */_Bool) (unsigned char)180)) ? (-5154356510176347835LL) : (max((((/* implicit */long long int) (unsigned char)100)), (-288230376084602880LL))));
                                arr_51 [(unsigned char)1] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */long long int) ((arr_9 [i_2]) != ((+(var_15)))));
                                arr_52 [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) var_13);
                                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((long long int) (-(min((arr_3 [i_3] [i_12 + 1] [i_3]), (arr_34 [i_13] [i_3])))))))));
                                arr_53 [3LL] [i_2] [i_12 + 2] [i_2] [i_2] = ((/* implicit */unsigned char) max((2043107705195078120LL), (((((/* implicit */_Bool) (unsigned char)18)) ? (-8639009392942312716LL) : (8711051464240934659LL)))));
                            }
                        } 
                    } 
                } 
                var_32 *= ((/* implicit */unsigned char) var_14);
            }
        } 
    } 
}
