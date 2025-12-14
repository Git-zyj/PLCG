/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25154
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_18 &= ((/* implicit */signed char) ((int) ((short) arr_1 [(signed char)16])));
        arr_2 [12] |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) arr_0 [i_0]))) <= (var_0)));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0]);
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                var_19 *= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((int) arr_0 [i_2]))), (arr_3 [i_2])));
                arr_9 [i_0] [i_0] [(unsigned short)4] [i_2] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)8)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27))))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((short)-17), (((/* implicit */short) arr_1 [i_2]))))))))));
            }
        }
    }
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 2; i_4 < 22; i_4 += 2) 
        {
            for (long long int i_5 = 3; i_5 < 23; i_5 += 4) 
            {
                {
                    var_20 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))) <= (min((var_1), (arr_11 [i_4 + 2])))))) <= (((/* implicit */int) arr_18 [i_3] [i_3] [i_3]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        arr_23 [i_5] = ((/* implicit */int) arr_18 [i_4 - 1] [i_5 + 1] [i_5 - 1]);
                        var_21 = ((long long int) arr_21 [i_5] [i_5]);
                    }
                    arr_24 [i_3] [i_5] = ((/* implicit */signed char) arr_15 [(unsigned char)6]);
                }
            } 
        } 
        var_22 = ((min((arr_4 [i_3] [i_3] [(short)12]), (((/* implicit */long long int) arr_8 [(signed char)22] [(signed char)22])))) - (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_17 [i_3] [(short)18] [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_8 [(unsigned short)6] [(unsigned short)6]))))) ? ((-(((/* implicit */int) arr_1 [2LL])))) : (min((((/* implicit */int) arr_12 [(unsigned short)9] [(unsigned short)9])), (var_6)))))));
    }
    var_23 = ((/* implicit */long long int) var_12);
}
