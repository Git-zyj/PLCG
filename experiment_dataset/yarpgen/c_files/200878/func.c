/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200878
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
    var_12 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_6 [i_1] [i_2] = ((/* implicit */unsigned int) arr_1 [i_0 + 3]);
                    var_13 = ((/* implicit */unsigned int) var_9);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-31)) ? (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)-30)))))))) : (((long long int) (-(((/* implicit */int) arr_2 [i_4]))))))))));
                                arr_12 [i_4] [i_1] [i_2] [i_3] [i_3] [i_3] [i_4] |= ((/* implicit */unsigned short) ((arr_11 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_4]) + (((/* implicit */unsigned int) (((((~(((/* implicit */int) (short)7680)))) + (2147483647))) >> (((arr_8 [i_0] [i_4] [i_0 + 3] [i_0 + 1] [i_0 + 2]) - (1480482092U))))))));
                                var_15 = ((/* implicit */_Bool) (signed char)-89);
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                {
                    arr_17 [3] [i_1] [i_5] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((arr_5 [i_0] [i_1] [i_5 + 1]), (((/* implicit */unsigned long long int) (short)31))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */signed char) arr_2 [i_1])))))) : (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) -1890853114)) : (2076729259U))))));
                    arr_18 [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (short)7655)) : (((((/* implicit */int) (short)-31)) | (((/* implicit */int) arr_16 [i_1]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [2U])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [(_Bool)1] [i_1] [i_0 + 2]))))) ? (((/* implicit */long long int) arr_8 [i_0 + 3] [(_Bool)1] [(_Bool)1] [i_6] [4ULL])) : (arr_10 [(short)4] [(short)4] [i_6] [i_5] [(short)4] [(short)4] [i_0])))) ? ((~(((long long int) var_4)))) : (((/* implicit */long long int) var_7)))))));
                                arr_24 [i_1] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6] [i_1] [i_1]))) : (9232776901915129342ULL)))))) && (((/* implicit */_Bool) var_10)));
                                var_17 |= ((/* implicit */unsigned long long int) -6670547398646042592LL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            {
                                arr_29 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-1), ((signed char)84))))) : (max((var_7), (((/* implicit */unsigned int) arr_26 [i_1]))))));
                                var_18 += ((/* implicit */unsigned short) arr_20 [i_0 + 2] [(short)2] [i_0] [i_0] [(unsigned char)5] [i_0 + 1]);
                            }
                        } 
                    } 
                }
                for (signed char i_10 = 3; i_10 < 10; i_10 += 1) 
                {
                    var_19 += ((/* implicit */unsigned long long int) (!(arr_21 [10LL] [i_1] [i_1] [i_10])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 3; i_12 < 10; i_12 += 2) 
                        {
                            {
                                var_20 = min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_25 [i_12] [i_1] [i_12] [i_1])) && (arr_36 [i_1] [i_1] [7LL] [i_11] [i_11] [i_1]))) || (((arr_38 [i_1] [i_1]) != (2173616199U)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)67)), (var_7)))) ? (((((/* implicit */_Bool) arr_33 [i_0] [i_10] [i_1] [(unsigned char)3])) ? (arr_11 [i_12] [i_11] [i_10 - 3] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69))))) : (arr_13 [i_1] [i_1]))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 576762921)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_34 [i_12 + 1] [i_10 + 1] [i_1] [(signed char)9] [i_0 - 1]) > (arr_34 [i_12 + 1] [i_10 + 1] [i_1] [i_0] [i_0 - 1]))))) : (((((/* implicit */_Bool) arr_1 [6U])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_1] [i_11] [i_1] [i_1])) + (((/* implicit */int) (short)-31))))) : (var_6)))));
                            }
                        } 
                    } 
                    arr_39 [6U] |= ((/* implicit */short) min((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)106))) < (774603946800537405LL)))), (((unsigned short) arr_21 [(_Bool)1] [i_0] [i_10 - 2] [i_10]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        arr_43 [i_0 + 2] [i_1] [10] [i_1] [i_0] = ((/* implicit */signed char) arr_4 [(_Bool)1] [i_1] [i_1] [i_10 - 3]);
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (0ULL) : (0ULL)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_26 [i_1]))))) : (arr_8 [i_0] [i_1] [i_0 - 1] [i_13] [i_10])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_14 = 2; i_14 < 9; i_14 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) ((-7438748755769845608LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)84)))));
                        /* LoopSeq 2 */
                        for (long long int i_15 = 0; i_15 < 11; i_15 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((arr_35 [i_10] [i_10 - 2] [i_0 + 1] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_10 - 2] [i_1])))));
                            var_25 |= ((/* implicit */long long int) ((arr_45 [i_0 - 1] [i_0 - 1] [i_10 - 2] [2ULL]) > (arr_31 [i_0 + 3] [i_1] [i_0 + 3])));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_27 [10U] [i_0 + 2] [i_10 - 2] [10U] [i_1])) : (((/* implicit */int) arr_27 [i_0] [i_0 + 1] [i_10 - 1] [i_10 - 1] [i_1]))));
                            arr_50 [i_1] [i_0 + 3] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [i_0] [i_0] [i_10] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_1]))) : (((var_6) % (var_9)))));
                        }
                        for (long long int i_16 = 2; i_16 < 7; i_16 += 3) 
                        {
                            var_27 += (-(((/* implicit */int) var_0)));
                            var_28 = ((/* implicit */unsigned short) var_10);
                            arr_53 [i_1] [i_10] [i_1] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_11)))));
                        }
                    }
                }
                arr_54 [i_0] [i_1] = ((((/* implicit */int) (short)7680)) >> (((((/* implicit */int) (unsigned short)39719)) - (39712))));
            }
        } 
    } 
    var_29 = ((/* implicit */short) var_11);
}
