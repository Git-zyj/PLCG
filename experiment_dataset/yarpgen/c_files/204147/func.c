/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204147
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0 + 1])))) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (+(((((/* implicit */int) (signed char)99)) - (((/* implicit */int) arr_0 [i_0])))))))));
            var_14 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0])))));
            arr_6 [i_1] [i_0] = ((/* implicit */signed char) var_4);
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 1]))));
                arr_9 [i_0] [7U] [7U] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) var_7)) + (11698261349659052339ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 + 1])) ? (var_4) : (((/* implicit */int) arr_1 [i_0])))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_6))));
                            arr_14 [i_0] [4LL] [7U] [(_Bool)0] [i_4] [(_Bool)0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)238))) ? (((/* implicit */int) arr_5 [i_0 + 1])) : (((/* implicit */int) ((_Bool) var_6)))));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [6LL])) ? (((/* implicit */unsigned long long int) ((int) arr_8 [i_0 + 1] [(short)2]))) : (arr_3 [i_0] [i_0 + 1]))))));
                            var_18 = ((/* implicit */long long int) max((var_18), (((long long int) arr_5 [i_0 + 1]))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_3 [(short)5] [(_Bool)1])) ? (((/* implicit */long long int) var_4)) : (var_1)))));
                        }
                    } 
                } 
            }
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                arr_17 [i_0] [5ULL] [i_0] [(unsigned short)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0])) : (arr_8 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) arr_7 [i_0] [i_1] [i_5])) - (13154))))))));
                arr_18 [(unsigned short)8] [(unsigned short)8] [i_5] [(signed char)0] |= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_7 [i_5] [9LL] [i_0])) != (((/* implicit */int) var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_1 [i_5]))))) : (var_6)));
            }
            for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_7 = 1; i_7 < 7; i_7 += 2) 
                {
                    arr_24 [i_0] = ((/* implicit */short) ((arr_22 [7LL] [7LL] [i_7 - 1] [i_0]) > (arr_22 [(signed char)9] [i_7] [i_7 - 1] [i_0])));
                    var_20 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_5 [i_0]))))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((unsigned int) ((signed char) var_0))))));
                    arr_25 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [2LL])) ? (var_6) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1] [6] [(unsigned char)7])) : (((((/* implicit */int) (signed char)15)) % (((/* implicit */int) var_9))))));
                }
                for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    arr_28 [2LL] [i_1] [i_8] &= ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_6] [i_8])) : (((/* implicit */int) arr_15 [i_0] [(_Bool)1] [1] [1])))));
                    arr_29 [i_6] [i_0] = (-9223372036854775807LL - 1LL);
                }
                arr_30 [(signed char)9] [i_0] = ((/* implicit */short) arr_12 [i_0] [i_1] [i_6] [i_0 + 1] [i_0 + 1]);
            }
        }
        for (int i_9 = 3; i_9 < 8; i_9 += 1) 
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [(unsigned short)9])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-4)) || (((/* implicit */_Bool) arr_21 [i_9] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) ((_Bool) (unsigned short)65531)))));
            var_23 = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        }
    }
    var_24 = ((/* implicit */_Bool) var_10);
    var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_0))))));
}
