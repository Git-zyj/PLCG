/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207769
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246)))));
        var_19 = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0 - 2]))));
    }
    for (unsigned char i_1 = 2; i_1 < 11; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            var_20 = ((/* implicit */int) min(((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109))) : (arr_6 [7ULL] [i_1 + 2] [7ULL]))), (((/* implicit */unsigned long long int) (signed char)71))));
            arr_7 [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))) ^ (18446744073709551615ULL)));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            arr_11 [i_3] [(unsigned char)10] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_1 - 2])) : (((/* implicit */int) arr_1 [i_1 - 2])));
            arr_12 [i_1] [i_1] = ((/* implicit */int) (unsigned char)11);
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                var_21 |= var_18;
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    for (int i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        {
                            arr_22 [i_3] [(unsigned char)4] [(unsigned char)4] [1] [i_1] [7ULL] [i_4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_18)) ? (var_4) : (arr_15 [i_1] [i_3] [i_3] [i_1])))));
                            arr_23 [i_1] |= ((/* implicit */unsigned char) 10711589428206801320ULL);
                        }
                    } 
                } 
            }
        }
        var_22 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_15 [i_1] [i_1] [(unsigned char)10] [i_1 + 1])), (arr_21 [i_1]))) <= ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) : (var_12))))))));
        arr_24 [i_1 + 1] = ((/* implicit */_Bool) arr_0 [i_1 - 2]);
    }
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) != (var_8)));
}
