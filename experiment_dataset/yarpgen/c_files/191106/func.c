/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191106
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((signed char) var_8))), (max((var_6), (((/* implicit */unsigned char) var_7))))))) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) max((((/* implicit */int) var_11)), (2147483647)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) -2147483647))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        var_17 ^= ((/* implicit */short) var_1);
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) max((max((var_15), (95529490579045345ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_12 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]), ((signed char)20))))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0]))) ? (arr_6 [i_2]) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)121)) & (((/* implicit */int) var_10))))))))))));
                        arr_13 [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) var_0)) ? (0ULL) : (15638724082585931641ULL))) : (((var_13) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (max((var_2), (((/* implicit */unsigned long long int) var_14)))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (var_2) : (((/* implicit */unsigned long long int) 2147483635))))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        for (short i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            {
                                arr_18 [i_2] [i_5] [i_2] [i_5] [i_0] = ((/* implicit */_Bool) (+((~(3530286427138540596LL)))));
                                var_19 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_7)) ? (3702771112006637398ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_8 [i_0] [i_1] [i_0]) : (((/* implicit */long long int) 2147483647))))))) / (((/* implicit */unsigned long long int) (~(2147483638))))));
                                arr_19 [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_1) : (var_1)))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_4)))) ? (((arr_8 [i_0] [i_0] [i_2]) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (var_4)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))), (((((/* implicit */_Bool) -11)) ? (var_2) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0])))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) var_9))))));
    }
    for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_7 = 1; i_7 < 12; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                for (unsigned char i_9 = 3; i_9 < 13; i_9 += 1) 
                {
                    {
                        arr_31 [i_6] [i_6] [i_6] [(signed char)5] [i_6] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)0)), (2147483647)))))) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_1)))) || (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_8)))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 3; i_10 < 13; i_10 += 1) 
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_6] [i_6])) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) 2147483647)) : ((~(var_13)))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_7)))))))));
                            arr_34 [i_6] [i_6] [i_10 + 1] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) & (((((/* implicit */_Bool) (+(2147483636)))) ? (((unsigned long long int) var_15)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (arr_11 [i_7 + 2] [i_7 + 2] [i_7] [i_7 + 2])))) ? (((/* implicit */unsigned int) (~(arr_23 [i_8])))) : (arr_35 [i_6])));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_12 = 0; i_12 < 14; i_12 += 4) 
            {
                arr_39 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((int) var_1)), (((/* implicit */int) arr_21 [i_7 + 2]))))) ? (((max((((/* implicit */long long int) arr_21 [i_12])), (arr_38 [13ULL] [i_7 + 1] [i_7 + 1] [i_6]))) / (((/* implicit */long long int) arr_33 [i_6] [i_6] [i_6] [(signed char)6] [i_6])))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)26)) / ((-2147483647 - 1)))))));
                arr_40 [i_6] [i_7] [i_12] = ((/* implicit */_Bool) var_15);
                var_24 ^= ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) 17384177892795475073ULL))))), ((~(((/* implicit */int) (short)15839))))));
            }
            arr_41 [i_7 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_12 [i_7 + 2] [i_7 + 1] [i_7 - 1] [i_7 + 2]))))) ? (var_5) : (max((16LL), (((/* implicit */long long int) var_3))))));
        }
        for (int i_13 = 0; i_13 < 14; i_13 += 1) 
        {
            var_25 = ((/* implicit */unsigned long long int) arr_3 [i_6] [i_6]);
            /* LoopNest 2 */
            for (unsigned char i_14 = 0; i_14 < 14; i_14 += 1) 
            {
                for (long long int i_15 = 0; i_15 < 14; i_15 += 3) 
                {
                    {
                        arr_50 [i_15] [i_14] [i_13] [i_6] = ((/* implicit */short) var_15);
                        arr_51 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_35 [i_14]);
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (((var_2) / (var_2)))))) ? (((/* implicit */int) ((unsigned char) arr_45 [7LL] [i_13] [2LL]))) : (((((/* implicit */_Bool) arr_42 [i_6])) ? (((/* implicit */int) arr_47 [i_13] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_20 [i_6])))))))));
        }
        var_27 = ((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned long long int) var_3)), (var_2))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_16 = 2; i_16 < 13; i_16 += 3) /* same iter space */
    {
        var_28 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) -16LL))));
        var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_16])) ? (arr_25 [i_16]) : (((/* implicit */unsigned long long int) var_4))))) ? ((~(((/* implicit */int) arr_29 [i_16 - 2] [i_16 + 1] [i_16 - 2] [i_16 - 2])))) : (((/* implicit */int) (unsigned char)249))));
        var_30 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max(((unsigned char)249), (var_12)))) ? (var_4) : (max((-39LL), (1382400624463996192LL))))), (9223372036854775805LL)));
    }
    for (unsigned long long int i_17 = 2; i_17 < 13; i_17 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_18 = 3; i_18 < 11; i_18 += 3) 
        {
            var_31 = ((/* implicit */unsigned long long int) (~((~(var_1)))));
            arr_61 [i_17] [i_18] [i_18 - 3] = ((/* implicit */int) -1382400624463996195LL);
        }
        arr_62 [i_17] [i_17] = var_1;
        var_32 = ((/* implicit */short) ((var_15) | (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_15)))));
    }
    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */unsigned long long int) ((0U) - (((/* implicit */unsigned int) 2147483647))))) : (max((((/* implicit */unsigned long long int) -9223372036854775806LL)), (17413828621604605231ULL)))))) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) var_10)))))));
}
