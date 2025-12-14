/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221880
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-2147483644), (((/* implicit */int) (unsigned char)146))))) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_2 [18LL])) ? (arr_0 [i_0]) : (arr_2 [3ULL]))) : (arr_2 [i_0 - 2]))) : (((/* implicit */int) var_9))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 2] [i_2])) ? (((/* implicit */int) arr_7 [i_0 - 2] [i_1] [i_0 - 2])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))) ? (max((arr_5 [i_2] [17] [i_0]), (((/* implicit */unsigned int) arr_2 [i_2])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 1])) : (arr_0 [(short)11]))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [i_0 - 1] [i_1])), (arr_0 [i_2 - 2])))) : (((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0 + 1])) : (arr_4 [i_1 + 2] [i_0 - 1]))))));
                arr_9 [i_0] [6] [i_0] [i_0] = ((/* implicit */long long int) arr_6 [i_0 - 1] [(signed char)2]);
                arr_10 [i_0] [i_1] [i_0] [i_2 + 2] |= ((/* implicit */int) max((((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_1 + 2] [i_1 + 2])) ? (arr_8 [i_0 - 2]) : (arr_8 [i_0 + 1]))), (max((arr_5 [i_0 + 1] [i_1 + 3] [i_2]), (arr_8 [i_0 + 1])))));
            }
            for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                var_16 = ((/* implicit */unsigned int) arr_11 [i_0 - 2] [(signed char)6] [i_3 + 2]);
                var_17 *= ((/* implicit */unsigned long long int) arr_2 [i_1]);
                var_18 -= ((/* implicit */unsigned char) min((min((arr_5 [i_0] [i_1 + 1] [i_3]), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_1 + 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((/* implicit */int) max((arr_7 [i_0 - 1] [i_0 - 1] [i_1 + 1]), (((/* implicit */short) arr_1 [i_3 + 1]))))) : (((/* implicit */int) arr_11 [i_0 + 1] [i_1] [i_3])))))));
            }
            for (unsigned int i_4 = 1; i_4 < 20; i_4 += 4) 
            {
                var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1 + 2] [i_0 - 1]))) : (((((/* implicit */_Bool) arr_14 [i_4] [i_1 + 2] [i_1] [i_1])) ? (arr_5 [i_4 - 1] [5] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */long long int) var_11)) : (((long long int) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_8 [i_4])) : (arr_4 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 20; i_5 += 2) 
                {
                    for (int i_6 = 2; i_6 < 20; i_6 += 2) 
                    {
                        {
                            var_20 &= ((((/* implicit */_Bool) max((arr_11 [i_0] [i_1 + 1] [i_4]), (((/* implicit */unsigned short) arr_13 [i_1] [i_6 - 2]))))) ? (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) arr_8 [i_4])), (var_14))))) : (((((/* implicit */_Bool) arr_19 [i_5 + 1] [i_6] [i_6] [i_6 + 1] [(signed char)13])) ? (((/* implicit */int) ((_Bool) arr_13 [i_0 - 1] [(unsigned short)18]))) : (((/* implicit */int) var_4)))));
                            var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_12 [i_0] [(unsigned short)20] [i_4])), (max((((/* implicit */unsigned int) arr_14 [i_0 - 2] [(unsigned char)7] [13LL] [i_6])), (arr_5 [i_6 + 1] [i_5 + 1] [i_1])))))) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_4 + 1] [i_6])) : (((/* implicit */int) ((signed char) arr_5 [i_5 - 2] [i_4 - 1] [i_1])))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_2 [i_0]))));
                            var_23 -= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_23 [i_0 + 1] [i_1] [i_0 + 1] [i_5 - 1] [(signed char)2])) ? (arr_15 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_7 [i_6 - 2] [i_6 + 1] [i_6 + 1])))));
                        }
                    } 
                } 
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 2) 
                {
                    arr_30 [16LL] [i_0] [i_0] [(_Bool)1] |= ((/* implicit */short) arr_13 [i_1] [i_7]);
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_1))));
                }
                for (signed char i_9 = 1; i_9 < 20; i_9 += 2) 
                {
                    arr_34 [(_Bool)1] [i_1 + 1] [i_0 - 1] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_14 [i_0] [3] [i_0 + 1] [i_1])), (var_5)))) ? (min((arr_8 [7U]), (((/* implicit */unsigned int) arr_14 [i_0 - 1] [i_0 + 1] [i_0 + 1] [(signed char)6])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0 - 1] [i_0 - 1] [0U])))));
                    var_25 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_24 [i_0 - 1] [i_1] [i_7] [i_9])) : (((/* implicit */int) ((_Bool) var_8)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_0]))));
                    arr_35 [i_0] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_11);
                }
                for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 2; i_11 < 20; i_11 += 4) 
                    {
                        arr_41 [i_7] [i_1] = ((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0 - 1] [(unsigned char)19]);
                        arr_42 [i_0] [i_7] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) arr_21 [i_0 - 2]))), (arr_19 [i_11 - 2] [i_11 + 1] [i_11 + 1] [i_11] [i_0 - 1])))) ? (((((/* implicit */_Bool) ((int) arr_15 [i_11] [i_11] [i_11]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 - 1] [i_1 - 1] [i_7] [i_10 + 1]))) : (arr_36 [i_0 - 2] [i_7] [i_10 + 1]))) : (arr_32 [i_0 + 1] [i_1 + 1] [i_1 + 1])));
                    }
                    for (signed char i_12 = 4; i_12 < 20; i_12 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_2))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((short) arr_31 [i_0] [i_1 + 1] [17] [i_1 + 1])))) ? (((/* implicit */int) arr_46 [i_0] [i_7] [i_7] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_44 [i_0 + 1] [i_1] [(signed char)2] [i_7] [i_0 + 1])) ? (arr_45 [i_0] [i_0] [i_7] [i_0] [i_12] [i_10 + 1]) : (((((/* implicit */_Bool) var_7)) ? (arr_2 [i_10]) : (arr_17 [2LL] [2LL] [i_7] [i_10])))))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_11 [(short)19] [17U] [(short)19])), (((((/* implicit */_Bool) var_5)) ? (arr_44 [6U] [i_1 + 2] [i_7] [i_7] [(unsigned char)19]) : (((/* implicit */int) arr_26 [i_7]))))))) ? (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */int) var_9)), (arr_40 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 1]))) : (arr_4 [i_1 - 1] [i_1 - 1])))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_13 = 1; i_13 < 19; i_13 += 1) 
                    {
                        var_29 -= ((/* implicit */int) arr_29 [i_0] [i_0] [i_10]);
                        arr_50 [i_0] [i_0] &= ((/* implicit */int) arr_32 [i_0] [i_10 - 1] [18U]);
                    }
                    for (unsigned int i_14 = 1; i_14 < 17; i_14 += 4) 
                    {
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [i_0 - 2] [i_0] [i_7] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) ((signed char) arr_45 [i_0] [i_0] [i_7] [i_0] [i_0] [10U]))) ? (arr_5 [i_0 - 1] [i_14 - 1] [i_7]) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 2] [i_0])) ? (arr_8 [i_14 + 3]) : (((/* implicit */unsigned int) arr_44 [i_0 - 2] [i_1] [i_7] [i_7] [1ULL])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_10 - 1] [i_10 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_14 [(unsigned char)20] [i_1] [(unsigned char)20] [(unsigned char)20]))))) ? (((/* implicit */unsigned int) var_8)) : (arr_5 [i_0 + 1] [i_1 + 2] [i_7])))));
                        var_31 = ((/* implicit */unsigned int) arr_11 [(signed char)7] [i_1] [(signed char)7]);
                        var_32 ^= ((/* implicit */unsigned int) ((unsigned long long int) arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2]));
                    }
                    var_33 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1))))), (((((/* implicit */_Bool) ((int) var_3))) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [(unsigned short)0] [i_10 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_10] [i_10 - 1]))) : (arr_32 [i_0] [i_1] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_25 [i_7]), (((/* implicit */signed char) var_0))))))))));
                    arr_53 [i_0] [i_1] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_40 [i_10] [i_1]);
                }
                arr_54 [i_7] [(_Bool)1] [i_0] [i_7] = ((/* implicit */unsigned char) var_11);
            }
            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) arr_27 [i_0] [i_1 + 3] [i_1 + 3]))));
            var_35 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])) ? (arr_17 [i_0 - 2] [i_1 + 1] [i_1 - 1] [i_1 + 1]) : (arr_17 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 + 1]))), (arr_17 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_0 - 2])));
            arr_55 [i_1 + 2] [i_0] [i_0] |= ((unsigned char) var_7);
        }
        var_36 += ((/* implicit */int) ((short) arr_15 [(signed char)14] [i_0] [i_0]));
    }
    var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) var_4))));
}
