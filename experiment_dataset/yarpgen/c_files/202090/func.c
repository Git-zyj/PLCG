/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202090
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_2 [(unsigned char)6] [(short)8] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28485)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
        arr_3 [i_0] [i_0] = var_8;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            arr_11 [6LL] = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_2 + 1])) * (((/* implicit */int) (unsigned short)65519))));
            arr_12 [8] = ((/* implicit */unsigned int) ((arr_4 [i_2 - 1]) + (((/* implicit */int) var_6))));
        }
        var_16 |= ((((arr_4 [9]) < (321406047))) ? (arr_8 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) arr_1 [i_1] [i_1])));
        var_17 ^= ((/* implicit */unsigned int) (short)-1);
        /* LoopNest 2 */
        for (long long int i_3 = 4; i_3 < 15; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) arr_1 [i_4] [4]);
                    var_19 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_16 [(short)0] [0] [i_3] [i_1])) ? (arr_15 [i_4] [i_3] [i_1]) : (((/* implicit */int) (short)28484)))) + (((/* implicit */int) var_5))));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [5LL] [i_3 - 4] [i_3 - 2] [i_3])) % (arr_7 [i_3] [i_3])));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-28485))))) || (((/* implicit */_Bool) (unsigned short)25)))))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(arr_20 [i_3 + 1] [i_3]))))));
                            var_23 ^= ((/* implicit */unsigned short) ((arr_20 [i_3 + 1] [i_3 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [0ULL] [i_3] [i_3 - 1] [i_6])))));
                            var_24 = ((/* implicit */unsigned int) var_3);
                        }
                        var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-63)) - (321406039)))) && (((/* implicit */_Bool) (unsigned short)12936))));
                        arr_26 [i_4] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)46611)))) != (((/* implicit */int) arr_10 [i_3 - 1]))));
                    }
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        arr_30 [i_1] [13] [i_1] [i_4] [4ULL] = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_29 [(short)3] [11LL] [i_4] [i_7] [i_7] [i_1])))));
                        var_26 *= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)64))));
                        arr_31 [i_4] [(short)14] [(unsigned char)9] [10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_1] [i_3 - 2] [10LL] [i_7])) ^ (var_9)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */int) (unsigned short)6111))))));
                        arr_32 [1ULL] [i_4] [i_3] = var_0;
                    }
                }
            } 
        } 
    }
    var_27 ^= ((/* implicit */unsigned short) max((max(((((_Bool)1) ? (((/* implicit */int) (short)14788)) : (((/* implicit */int) (signed char)-63)))), (((2147483647) >> (((((/* implicit */int) var_1)) - (37727))))))), (var_9)));
}
