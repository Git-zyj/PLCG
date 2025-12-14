/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2614
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) ((((var_8) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0] [(unsigned char)5] [i_2]))))) : (max((arr_2 [i_0 + 1] [i_2]), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_2])))))) <= (((/* implicit */long long int) ((max((((/* implicit */unsigned int) var_1)), (var_5))) | (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (var_8))))))))));
                    arr_8 [i_0] [i_1] [10LL] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_2))));
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2]))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1] [i_2] [i_3])) && (var_3))))))) & (((/* implicit */unsigned long long int) min((arr_5 [i_3 - 1]), (((/* implicit */long long int) var_3)))))));
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_1])))) ? (arr_7 [i_0] [i_1] [i_2] [i_3 + 2]) : (((/* implicit */int) var_0))));
                        var_15 = ((/* implicit */int) var_6);
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */signed char) max((arr_6 [i_1] [i_4]), (((/* implicit */unsigned long long int) ((max((arr_10 [i_3] [i_3]), (((/* implicit */long long int) arr_7 [i_1] [i_3] [i_3] [(unsigned short)4])))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_5)))))))))));
                            var_17 = ((/* implicit */int) ((((_Bool) arr_10 [i_3] [i_3 + 2])) ? (((((/* implicit */_Bool) var_4)) ? (max((3008172371179881005ULL), (3008172371179881005ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (arr_9 [i_0] [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (arr_14 [i_0 + 1] [i_0 + 1] [i_4])))), (max((((/* implicit */unsigned short) arr_3 [i_0 - 1] [i_0 - 1])), (arr_1 [(unsigned short)14])))))))));
                        }
                        for (short i_5 = 1; i_5 < 15; i_5 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_11))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) var_5)))))) ? (max((((/* implicit */unsigned int) ((signed char) var_7))), (min((((/* implicit */unsigned int) var_2)), (arr_9 [i_1] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_5 + 1])))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_5 [i_0 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5 - 1] [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_5)))) && (((/* implicit */_Bool) min((arr_5 [i_0]), (((/* implicit */long long int) var_3))))))))) : (((((arr_9 [i_0] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 - 1]))))) ? (((((/* implicit */_Bool) 3008172371179881024ULL)) ? (15438571702529670592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12680))))) : (((/* implicit */unsigned long long int) arr_9 [i_3 + 2] [i_0 - 1]))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 1; i_6 < 15; i_6 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]);
                            var_21 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned long long int) var_11)) : (arr_16 [i_0] [i_0] [i_0 - 1])))) && (((((/* implicit */int) var_2)) != (((/* implicit */int) var_8)))));
                        }
                    }
                    for (unsigned short i_7 = 4; i_7 < 14; i_7 += 1) 
                    {
                        arr_21 [i_0] [(signed char)14] [i_2] [i_7 - 1] = ((/* implicit */long long int) min((arr_11 [i_0 - 1] [(unsigned short)9] [(unsigned char)7] [i_7] [i_0 - 1] [i_7 + 2]), (((/* implicit */unsigned int) max((arr_17 [i_0] [i_0 - 1] [i_2] [i_0] [i_7 - 1] [i_7] [i_1]), (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_1] [i_2])) && (((/* implicit */_Bool) arr_18 [i_0] [i_0] [(unsigned short)8] [i_0] [i_0]))))))))));
                        var_22 = ((/* implicit */_Bool) min((((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [(short)6]))) | (arr_5 [i_0])))), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_7])) != (((((/* implicit */_Bool) arr_19 [3U] [3U])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))))))));
                    }
                    var_23 *= ((/* implicit */unsigned int) min((((/* implicit */int) min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1])))), (((((/* implicit */_Bool) max((arr_11 [i_2] [1ULL] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_15 [i_0] [6ULL]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1])) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) arr_13 [i_0 + 1] [i_2] [(unsigned short)14] [6ULL]))))));
                    var_24 = ((/* implicit */signed char) ((long long int) ((arr_10 [i_1] [i_0 + 1]) >= (arr_5 [i_0 - 1]))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_7);
    var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) min((15438571702529670622ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (var_6) : (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_2)) : (var_7)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
}
