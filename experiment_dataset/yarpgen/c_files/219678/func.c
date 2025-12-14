/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219678
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
    var_13 = ((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (short)8186)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)54))))) : ((-(var_7))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    var_14 += ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        arr_10 [i_2] [i_2] [i_2] [i_2] [i_2 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_9 [i_3] [i_2 + 1] [i_0])))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned short) (short)-8216);
                            var_16 = ((/* implicit */signed char) arr_6 [(unsigned short)9] [i_3] [i_2 + 3] [(unsigned short)9]);
                            arr_13 [4] [4] [(unsigned short)3] [i_3 - 1] [i_4] = ((/* implicit */signed char) ((var_1) < (((((/* implicit */_Bool) arr_11 [i_3] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (var_1)))));
                        }
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_0))));
                            arr_16 [i_1] [i_1] [i_0] [16ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 659017279U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) var_0)))));
                            arr_17 [i_0] [i_0] [10ULL] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 2161727821137838080ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))) : (arr_8 [i_0] [i_1] [i_2 + 2] [i_3] [i_5])))));
                            var_18 += ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (8388607U)))));
                        }
                        arr_18 [i_1] [i_2 + 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2 + 1])) ? (arr_2 [i_2 - 1]) : (arr_2 [i_2 + 1])));
                    }
                }
                var_19 = ((/* implicit */unsigned long long int) ((max((3592761289890737044ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_1] [(signed char)21])))) < (((((/* implicit */_Bool) arr_6 [(signed char)14] [16U] [16U] [i_1])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_15 [i_0] [i_0] [i_0] [i_1])))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 24; i_7 += 4) 
                    {
                        {
                            arr_25 [i_0] [i_6] = ((/* implicit */_Bool) (short)8239);
                            arr_26 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((max((arr_3 [i_0] [i_7 - 1]), (((/* implicit */unsigned int) var_9)))) > (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 1; i_8 < 7; i_8 += 3) 
    {
        for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 4) 
        {
            {
                var_20 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [7ULL])) ? (var_7) : (14853982783818814551ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) (short)12264)))))) : (max((14853982783818814577ULL), (var_1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_8] [i_8 + 4] [i_8]))));
                /* LoopSeq 3 */
                for (unsigned short i_10 = 1; i_10 < 7; i_10 += 4) 
                {
                    var_21 ^= max((((((/* implicit */_Bool) min((var_11), (var_3)))) ? (((/* implicit */unsigned long long int) ((659017282U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : ((+(14853982783818814579ULL))))), (((/* implicit */unsigned long long int) arr_0 [i_8])));
                    var_22 = max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_9 [i_8] [i_8] [(signed char)22])))) ^ (max((3592761289890737041ULL), (11374843070914048360ULL))))), (((/* implicit */unsigned long long int) ((short) 617449639U))));
                }
                /* vectorizable */
                for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_9 [i_9 + 1] [i_8] [i_11]))));
                    arr_37 [i_8] [9] [i_9 + 3] [i_8] = ((/* implicit */unsigned long long int) arr_24 [i_8] [(signed char)12] [12U] [i_11] [i_11]);
                    /* LoopNest 2 */
                    for (short i_12 = 1; i_12 < 10; i_12 += 4) 
                    {
                        for (unsigned long long int i_13 = 2; i_13 < 8; i_13 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) (+(2209785197U)));
                                arr_44 [i_8] [i_12] [i_12] [i_8 - 1] [i_8 + 1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))));
                                var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_8 + 1] [i_8 + 1] [i_11])) ? (575633006) : (((/* implicit */int) arr_11 [i_8 + 3] [i_13 + 3]))));
                                arr_45 [i_8] [i_9 - 1] [i_12] [i_11] [i_9 - 1] [i_13] = ((/* implicit */unsigned short) 10808003896563981660ULL);
                            }
                        } 
                    } 
                    var_26 += ((/* implicit */unsigned short) var_7);
                }
                /* vectorizable */
                for (short i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_8])) ? (((/* implicit */long long int) arr_19 [(unsigned short)13] [i_9] [i_9] [(unsigned short)13])) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)8191)) : (((/* implicit */int) var_9))))) : (arr_7 [i_9] [(unsigned short)21] [i_9 + 3] [1LL])));
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_8] [i_9 + 3])) ? (((/* implicit */int) (short)9)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3592761289890737031ULL)))))));
                }
                arr_49 [i_8] [i_9] [i_9 + 2] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_9] [i_8 + 3] [i_8] [i_8 + 2])) + (((/* implicit */int) var_8))))), (arr_0 [i_8]))), (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_9 + 3] [i_9] [2ULL] [i_9 + 1] [i_9] [i_9] [i_8 + 3])) > (((/* implicit */int) arr_14 [6U] [i_9] [i_9] [i_9] [i_8 + 2] [i_9 - 1] [i_8 + 2])))))));
            }
        } 
    } 
}
