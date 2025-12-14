/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227456
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
    var_10 = ((/* implicit */signed char) min((-2387821664690545141LL), (((/* implicit */long long int) max(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (short)-15471)) ^ (-2088497723))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_13 [(_Bool)1] [i_4] [i_4] [(_Bool)1] [(unsigned short)19] [i_4] = ((/* implicit */unsigned int) ((unsigned short) var_8));
                            var_11 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
                        }
                    } 
                } 
            } 
            var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) 8355840)))));
            arr_14 [i_1] [i_0] = ((/* implicit */short) (~(var_2)));
            arr_15 [i_1] [i_0] = ((/* implicit */unsigned short) 2387821664690545143LL);
        }
        /* LoopSeq 2 */
        for (short i_5 = 1; i_5 < 22; i_5 += 1) 
        {
            arr_19 [i_0] [i_0] [i_5] = ((/* implicit */signed char) arr_2 [19]);
            var_13 -= ((/* implicit */unsigned int) var_8);
        }
        for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            var_14 *= ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0] [(unsigned short)22]);
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 - 2] [i_0 + 3] [i_0 - 2] [i_0 + 1] [i_0 + 2])) ? (((var_2) + (((/* implicit */unsigned int) (-2147483647 - 1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -2088497723)))))))));
        }
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((long long int) 4294967295U));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            {
                                arr_36 [i_8] [i_8] [i_8] [(unsigned short)8] [i_8] = ((/* implicit */signed char) ((short) arr_32 [16] [i_9] [24] [i_9] [(_Bool)1]));
                                var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_0 - 1] [i_0 + 3])) == (((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((long long int) var_6)) : (var_9)))));
                    var_19 = ((/* implicit */long long int) arr_29 [i_0] [i_7] [17] [i_0]);
                }
            } 
        } 
    }
    for (signed char i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((int) 0U))), ((+(3052179414U))))))));
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            for (unsigned int i_13 = 1; i_13 < 16; i_13 += 2) 
            {
                {
                    arr_48 [i_11] [i_12] [i_11] [i_12] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_23 [i_12] [i_11])), (((unsigned short) var_0))))), (((4054731801U) - (((/* implicit */unsigned int) arr_0 [i_11]))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_34 [i_13 + 1] [i_13 - 1])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_0)) : (-5LL)))))) ? (max((1U), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_11] [i_11] [i_11] [i_12] [i_12] [(signed char)1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_26 [i_12]) ? (var_0) : (((/* implicit */int) arr_2 [i_12])))))))))));
                    arr_49 [i_12] = ((/* implicit */long long int) arr_44 [i_11] [i_12] [i_13]);
                }
            } 
        } 
        arr_50 [i_11] = ((/* implicit */signed char) var_3);
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_6))));
        arr_51 [i_11] = var_8;
    }
    for (signed char i_14 = 0; i_14 < 19; i_14 += 1) /* same iter space */
    {
        var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_3))) ? ((+(arr_4 [i_14] [i_14]))) : (max((arr_4 [i_14] [i_14]), (arr_4 [i_14] [i_14])))));
        /* LoopSeq 2 */
        for (int i_15 = 0; i_15 < 19; i_15 += 4) /* same iter space */
        {
            var_24 |= ((/* implicit */long long int) min(((~(((/* implicit */int) arr_12 [(signed char)10] [i_14] [16] [i_15] [(short)0] [i_15])))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_53 [i_15])) && (((/* implicit */_Bool) arr_47 [i_14] [i_14] [i_14]))))))));
            var_25 = ((/* implicit */long long int) min((var_25), (min((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (2387821664690545141LL))))), (((long long int) (!(((/* implicit */_Bool) arr_47 [i_14] [i_14] [i_14])))))))));
            var_26 ^= ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_25 [i_14]))))), (2378215924U)));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 19; i_16 += 4) /* same iter space */
        {
            var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_16]))) : (arr_16 [(unsigned short)15] [(short)21])))) ? (464347944) : (((/* implicit */int) arr_46 [i_14] [i_14]))));
            arr_60 [i_16] [i_16] &= ((/* implicit */short) (((~(245031624))) <= (((/* implicit */int) arr_56 [i_16] [i_16] [i_16]))));
            arr_61 [i_14] [i_14] = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) arr_56 [i_14] [i_14] [i_14])))));
            var_28 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_16] [11] [i_14])) : (((/* implicit */int) var_8))))));
            var_29 -= ((/* implicit */signed char) ((short) (short)-22080));
        }
    }
}
