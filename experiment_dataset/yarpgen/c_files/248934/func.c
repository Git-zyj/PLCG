/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248934
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
    var_17 = ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)127))) : (arr_1 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1278886984)) ? (((/* implicit */int) arr_2 [i_0] [(unsigned short)7] [i_0])) : (((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [i_0] [3LL])) % (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) (+(((7LL) - (9223372036854775789LL)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    var_19 |= ((/* implicit */long long int) ((var_3) >= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3])))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [17LL])) ? (((((var_9) + (2147483647))) << (((((/* implicit */int) var_6)) - (62150))))) : (((int) var_5)))))));
                    var_21 ^= ((((((/* implicit */_Bool) arr_0 [(unsigned short)8])) ? (arr_10 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */long long int) arr_6 [i_3] [i_1] [i_2] [i_3])))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65409))));
                    var_22 = ((/* implicit */unsigned short) (+(arr_7 [(unsigned short)6] [i_1])));
                }
            }
            for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((((((/* implicit */_Bool) 20LL)) ? (1880831500604454810LL) : (9LL))) <= ((~(18013298997854208LL)))))), (((unsigned short) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((arr_10 [i_0] [i_1] [i_1] [i_0]) - (1902319007764925233LL))))))));
                arr_14 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 3176509159U)) < (9223372036854775789LL)));
                arr_15 [i_0] [i_0] [i_4] &= ((/* implicit */long long int) ((int) arr_6 [i_4] [i_4] [i_0] [i_0]));
            }
            arr_16 [i_0] [18] = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))) - (arr_7 [i_0] [i_0]))));
        }
    }
}
