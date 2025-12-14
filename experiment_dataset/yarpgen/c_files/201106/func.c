/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201106
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
    var_11 &= ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
                {
                    arr_7 [i_0] [i_0] [i_2] = 9223372036854775792LL;
                    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_0 - 2])), (arr_0 [i_0])))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (-9223372036854775805LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_13 = (~((~(arr_5 [i_1] [i_0 - 2] [i_0 + 2]))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 2; i_4 < 9; i_4 += 4) 
                    {
                        var_14 = ((/* implicit */_Bool) ((var_10) << (((((((/* implicit */int) arr_10 [i_0 - 1] [i_0 + 1] [i_4 + 3] [i_0 - 1])) + (3316))) - (2)))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1] [i_4])) ? (var_7) : (((/* implicit */unsigned int) 2147483647))))) ? (((((/* implicit */int) arr_4 [0U] [i_1] [0U])) + (((/* implicit */int) (unsigned short)65535)))) : (arr_5 [i_0 + 1] [i_4 + 2] [i_4 - 2])));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 1; i_5 < 10; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned short) arr_1 [i_5 + 1]);
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_0 [i_1]))));
                            var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_8 [(short)8] [i_1] [(short)8] [8LL])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_19 |= ((/* implicit */_Bool) ((long long int) var_4));
                                var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                                arr_19 [i_0] [i_0 + 1] [i_0] [i_6] [i_0] = ((/* implicit */long long int) arr_13 [i_0] [i_6] [i_0] [i_6] [i_0] [i_3] [i_0]);
                                arr_20 [i_0] [i_6] [i_1] [i_3] [i_6] [i_7] = ((/* implicit */int) arr_1 [i_0]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
                {
                    var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 1])));
                    var_22 = ((/* implicit */_Bool) (unsigned char)254);
                }
                var_23 = ((/* implicit */long long int) (unsigned char)57);
            }
        } 
    } 
}
