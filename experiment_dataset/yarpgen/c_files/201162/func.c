/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201162
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
    var_11 |= ((/* implicit */short) ((((/* implicit */int) var_3)) * (((/* implicit */int) (short)28120))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) arr_3 [i_0]);
        var_13 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_3))))) ^ (((var_0) * (var_0)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned long long int) arr_2 [i_0] [4ULL]);
            var_15 &= ((/* implicit */int) 3632564864U);
            var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
        }
        for (int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_2] [i_0])));
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                var_18 = ((/* implicit */unsigned long long int) var_0);
                var_19 = ((/* implicit */int) (+(((arr_0 [i_0] [i_2]) / (((/* implicit */long long int) arr_6 [i_0] [i_0] [9LL]))))));
            }
            for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 4) 
            {
                var_20 = ((/* implicit */unsigned char) -1113504576);
                var_21 = ((/* implicit */int) arr_9 [i_0] [(signed char)9] [i_0]);
            }
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_22 = ((/* implicit */int) ((1152921504606846975ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_2] [i_0])))));
                var_23 = ((/* implicit */unsigned int) (-(arr_6 [i_5] [i_2] [i_0])));
                var_24 = ((/* implicit */int) (short)28120);
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_25 = ((/* implicit */unsigned int) (((~(((/* implicit */int) (short)-28120)))) & (((((/* implicit */int) var_8)) | (((/* implicit */int) (unsigned char)159))))));
                var_26 = var_1;
                var_27 = ((/* implicit */signed char) var_8);
                arr_20 [i_6] = ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_14 [i_0] [i_2])) ^ (arr_2 [i_0] [i_0]))) + (2147483647))) >> (((/* implicit */int) arr_12 [i_0] [i_2] [i_2]))));
            }
        }
    }
    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        var_28 = ((/* implicit */unsigned char) arr_22 [i_7]);
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (2945045384453221316LL)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7] [i_7]))) | (var_9)))) : ((~(7028916897389096580LL)))));
    }
}
