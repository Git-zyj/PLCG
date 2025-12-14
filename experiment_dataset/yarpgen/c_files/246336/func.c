/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246336
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) 4294967295U);
                                arr_12 [(short)5] [8ULL] [i_0] [i_3] [(short)1] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8)))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (var_7)))))) ? (((/* implicit */unsigned int) var_6)) : (max((((/* implicit */unsigned int) arr_10 [(_Bool)1] [i_4 - 1] [i_1] [i_0 + 1])), (4294967275U)))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)33)) ? (((var_4) ? (((/* implicit */unsigned long long int) 2287828610704211968LL)) : (((unsigned long long int) -2287828610704211963LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [10LL] [i_3] [i_0])), (2287828610704211958LL)))) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_3 + 1] [i_4 - 2])))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [(signed char)0] = ((/* implicit */_Bool) ((unsigned long long int) max((arr_2 [(short)5] [i_0 + 1] [i_0 - 1]), (arr_2 [i_0] [i_0 + 1] [i_0 + 1]))));
                arr_14 [i_0] [(signed char)13] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned int) arr_10 [(_Bool)1] [(short)9] [4] [(_Bool)1]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)270)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10))) : (2287828610704211958LL)))))) && (((/* implicit */_Bool) (~(max((-2287828610704211959LL), (((/* implicit */long long int) var_7)))))))));
                var_15 -= ((/* implicit */signed char) var_9);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            {
                var_16 -= ((/* implicit */signed char) ((arr_11 [i_5] [i_5] [i_5] [(signed char)12] [i_5] [i_5]) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 4; i_7 < 10; i_7 += 1) 
                {
                    var_17 ^= ((/* implicit */unsigned long long int) ((short) (unsigned short)20568));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_28 [i_7 + 1] [i_7] [(signed char)2] [i_7])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_28 [i_7 - 1] [10] [i_7] [(unsigned char)3])))), (((((/* implicit */int) arr_29 [i_7 - 4] [i_7] [(_Bool)1] [(_Bool)0] [9ULL])) << (((/* implicit */int) arr_29 [i_7 - 1] [i_7] [3] [6U] [(unsigned char)5]))))));
                                arr_32 [(signed char)2] [(signed char)1] [(short)7] [i_7] [(short)5] [5ULL] [i_9] = ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)8376))));
                                var_19 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [(signed char)9] [10])) || (((/* implicit */_Bool) arr_8 [i_8] [i_5] [i_8] [10] [i_8]))))), ((-(var_11)))))));
                                var_20 = ((/* implicit */unsigned int) var_5);
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_5 [0ULL] [i_8] [3]))));
                            }
                        } 
                    } 
                }
                var_22 -= ((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), (((((((/* implicit */int) ((signed char) arr_23 [i_5] [(unsigned char)10] [i_6] [i_6]))) + (2147483647))) >> (((((int) var_11)) - (396775907)))))));
                var_23 = ((/* implicit */short) max((((/* implicit */long long int) arr_7 [i_5] [i_5] [i_6] [(_Bool)1])), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_2)) - (221)))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_5] [i_5] [12] [(unsigned char)16])) | (((/* implicit */int) arr_1 [i_5]))))) : (((((/* implicit */_Bool) arr_4 [i_5] [i_5])) ? (-2287828610704211968LL) : (((/* implicit */long long int) var_7))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_10 = 1; i_10 < 9; i_10 += 4) 
                {
                    var_24 *= arr_19 [i_5] [i_6];
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 3; i_12 < 10; i_12 += 3) 
                        {
                            arr_40 [(short)8] [9U] [(unsigned short)4] [i_10] [4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2293902850U))));
                            var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (1286956749U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                        }
                        for (unsigned long long int i_13 = 3; i_13 < 10; i_13 += 3) 
                        {
                            var_26 |= ((/* implicit */long long int) var_5);
                            var_27 = ((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (var_7)));
                            var_28 |= ((/* implicit */unsigned short) ((((1413961514) << (((((/* implicit */int) (unsigned short)20568)) - (20568))))) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)63)) || (((/* implicit */_Bool) var_2)))))));
                            arr_43 [(unsigned short)8] [8U] [i_10] [i_11] [i_10] = ((/* implicit */signed char) (unsigned char)74);
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
                        {
                            var_29 = ((((((((/* implicit */_Bool) var_0)) ? (-2287828610704211958LL) : (((/* implicit */long long int) arr_22 [i_11])))) + (9223372036854775807LL))) >> (((((var_8) << (((((/* implicit */int) arr_21 [i_10] [(unsigned char)1])) - (59280))))) - (2809774030U))));
                            var_30 += ((/* implicit */unsigned long long int) var_11);
                        }
                        var_31 = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) arr_8 [16] [i_10] [(unsigned short)2] [i_10] [(short)7])))));
                        var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 773417792)) ? (-2287828610704211985LL) : (((/* implicit */long long int) -1))))) ? (((/* implicit */int) arr_42 [i_5 - 2])) : (((/* implicit */int) arr_28 [8U] [i_10 + 1] [0LL] [i_10]))));
                        arr_46 [5] [8] [(unsigned short)10] [(signed char)7] [i_5] [i_10] = ((/* implicit */unsigned int) var_3);
                    }
                    for (int i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        arr_49 [i_5] [i_6] [i_10] [6U] = ((_Bool) arr_1 [i_10]);
                        arr_50 [0] [i_10] [0U] [i_10] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-28053)) ? (((/* implicit */int) (unsigned short)8376)) : ((-2147483647 - 1))));
                    }
                    var_33 = ((/* implicit */unsigned short) var_9);
                }
                /* vectorizable */
                for (long long int i_16 = 3; i_16 < 9; i_16 += 1) 
                {
                    var_34 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_6)))) ? (2293902864U) : (((/* implicit */unsigned int) ((int) 149704574)))));
                    var_35 = ((/* implicit */_Bool) ((arr_26 [i_5 + 1]) / (arr_26 [i_5 - 1])));
                }
            }
        } 
    } 
    var_36 = ((((int) 1718798583)) >> (max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */int) (unsigned short)57171)))))));
}
