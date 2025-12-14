/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241014
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_15))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_2 [19U]))))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (unsigned char)7))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    var_19 -= ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28005))) ^ (18446744073709551615ULL))), (min((((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_0 + 1])), ((-(14201240073923530507ULL)))))));
                    var_20 = ((/* implicit */long long int) ((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1] [(unsigned char)6] [i_0] [0ULL])) ? (arr_4 [i_4]) : (((unsigned long long int) arr_5 [i_2] [i_1])))))))));
                                var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_14 [i_3] [1LL] [i_3 + 1] [i_3] [i_3]) >= (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 1] [i_2] [i_2])))))) ^ (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_2] [i_2]))))) == (((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) (short)32331))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((unsigned long long int) var_2)))));
    }
}
