/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49579
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_17 -= ((/* implicit */_Bool) (unsigned char)171);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24473)) ? (((/* implicit */long long int) -542770537)) : (var_1)))) && (((/* implicit */_Bool) var_0))))) << (((-542770544) + (542770557)))));
                                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) -542770544)))));
                                arr_14 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned long long int) var_14)) : (5863804504842294476ULL)))) ? (((/* implicit */int) arr_11 [12LL] [12LL] [i_2] [12LL] [12LL])) : (((542770546) << (((((/* implicit */int) (short)10021)) - (10020))))))) | (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_8 [i_0] [i_0 + 3] [i_0 - 1] [i_0] [9ULL] [i_0 + 2]) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                                arr_15 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) arr_2 [i_1 + 2] [i_4])) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_10 [i_0 + 4] [i_0 - 1] [i_1 + 3] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 3])) ? (arr_10 [i_0 + 3] [i_0 + 3] [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 2]) : (arr_10 [i_0 + 3] [i_0 + 3] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 - 1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_5 = 1; i_5 < 20; i_5 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) ((arr_0 [i_0 + 2]) - (((((/* implicit */_Bool) arr_0 [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5389))) : (arr_0 [i_0 - 1])))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            arr_20 [i_0] [i_5] [i_5] [i_5 - 1] [i_6] = ((/* implicit */unsigned long long int) (signed char)-40);
                            var_20 = ((/* implicit */unsigned char) max((var_4), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_11)), (arr_0 [i_1]))) == (((/* implicit */long long int) ((arr_17 [i_5] [i_1] [i_1] [i_0]) ? (-542770549) : (((/* implicit */int) (unsigned char)253))))))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) -935652985);
                            var_22 -= ((/* implicit */int) (unsigned char)3);
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-542770537)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_6 [i_0 + 3] [i_0 + 3] [i_0 - 1]))))) : ((~(1657691494U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0] [i_0 + 3] [i_0 + 4] [i_0] [i_1 + 1] [i_1 + 1])) + (((/* implicit */int) arr_8 [i_0 + 3] [i_0 + 3] [i_0] [i_1 + 3] [i_1 + 3] [i_1 - 1]))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_0 + 3] [i_2] [i_7])), (var_4)))) ? (((/* implicit */unsigned long long int) 2775659601U)) : (((12853573510878248876ULL) << (((/* implicit */int) arr_8 [i_5 + 1] [i_7] [(unsigned short)9] [i_5 + 1] [i_7] [i_5]))))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            arr_26 [i_5] [i_5] [(_Bool)1] = ((/* implicit */unsigned char) 4294967274U);
                            arr_27 [i_5] [i_8] = ((/* implicit */unsigned char) (+((+((+(12853573510878248876ULL)))))));
                            var_24 = (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_16)))) ? (((((/* implicit */_Bool) (unsigned char)16)) ? (var_6) : (((/* implicit */unsigned long long int) -208449236)))) : (((unsigned long long int) var_16))))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 3])) ? (arr_7 [i_1]) : (arr_7 [i_1 + 1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) + (arr_7 [i_0 - 1]))) : (min((arr_7 [i_1 + 3]), (arr_7 [i_5 - 1])))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            arr_30 [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (var_2))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))))));
                            arr_31 [i_0 + 1] [i_0 + 1] [4] [i_5 - 1] [i_5] = (i_5 % 2 == zero) ? (((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_24 [i_0 + 4] [i_5] [i_1 + 2] [i_9])) : (((/* implicit */int) arr_24 [i_0 + 4] [i_5] [i_1 + 3] [i_1 + 2])))) + (2147483647))) << (((unsigned int) ((-671631114) > (((/* implicit */int) (unsigned short)18426)))))))) : (((/* implicit */_Bool) ((((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_24 [i_0 + 4] [i_5] [i_1 + 2] [i_9])) : (((/* implicit */int) arr_24 [i_0 + 4] [i_5] [i_1 + 3] [i_1 + 2])))) - (2147483647))) + (2147483647))) << (((unsigned int) ((-671631114) > (((/* implicit */int) (unsigned short)18426))))))));
                            arr_32 [i_5] [0U] [i_5 - 1] [i_5 - 1] = var_7;
                        }
                    }
                    for (int i_10 = 1; i_10 < 20; i_10 += 4) /* same iter space */
                    {
                        var_26 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_0]))));
                        var_27 = min((max((arr_1 [i_0 + 2] [i_1 - 1]), (arr_1 [i_0 + 1] [i_1 + 3]))), (var_10));
                        var_28 ^= ((/* implicit */unsigned short) arr_25 [i_10] [(_Bool)1] [i_10] [i_10] [i_10] [i_10] [i_10]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((-1602958773) + (2147483647))) << (((928949133) - (928949133)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 1; i_12 < 19; i_12 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned int) 13132318604324563572ULL);
                            arr_40 [i_1] [i_1] [i_1] [i_12] [i_11] [i_11] [i_2] = ((/* implicit */unsigned int) arr_11 [i_11] [i_11] [i_1] [i_11] [i_11]);
                        }
                    }
                    arr_41 [i_2] [i_1 + 1] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
                    var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((5868088879247271026LL), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_2] [i_0 + 3] [i_2])) & (var_14))))))) ? (((((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_13))))) << (((((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned long long int) 4228543955U)))) - (11873014033206105648ULL))))) : (((/* implicit */int) min((arr_17 [i_0] [i_0 + 1] [i_0 + 1] [i_1 + 3]), ((!(((/* implicit */_Bool) -542770537)))))))));
                }
            }
        } 
    } 
    var_32 = ((/* implicit */short) var_7);
}
