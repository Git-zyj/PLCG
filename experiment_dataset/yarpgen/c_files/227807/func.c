/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227807
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
    var_15 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((arr_0 [i_0]) * (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48372))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / ((+(((/* implicit */int) arr_2 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_17 += ((/* implicit */unsigned char) (signed char)85);
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((arr_6 [i_0]) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_1]))))) : (arr_1 [i_0] [i_1])));
                var_18 ^= ((arr_4 [i_0] [i_1] [i_0]) < (arr_4 [i_2] [i_1] [i_0]));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_2]))) + (arr_0 [i_0])));
            }
            var_20 &= ((/* implicit */unsigned short) ((arr_7 [i_0] [i_1]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)113))));
            arr_9 [i_0] [i_1] = ((/* implicit */long long int) ((arr_6 [i_1]) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_1]))));
            var_21 &= ((/* implicit */unsigned int) (!(arr_7 [10U] [i_0])));
        }
        /* vectorizable */
        for (signed char i_3 = 2; i_3 < 17; i_3 += 1) 
        {
            arr_13 [(unsigned char)11] [(unsigned char)11] &= ((/* implicit */unsigned int) arr_7 [i_0] [i_0]);
            arr_14 [i_0] [i_3 + 1] = ((/* implicit */unsigned char) arr_7 [i_3 + 2] [i_3 - 1]);
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)85))) & (-4205711684572013727LL))))));
            arr_15 [i_3] [i_3 - 2] [(_Bool)1] = ((/* implicit */unsigned int) arr_12 [i_0] [i_3] [i_3 + 2]);
        }
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((max((arr_11 [i_0]), (((/* implicit */long long int) var_10)))) < (((/* implicit */long long int) max((115744539U), (((/* implicit */unsigned int) (unsigned char)208))))))))) & (min((max((((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0])), (-1LL))), (((/* implicit */long long int) arr_12 [i_0] [i_0] [13LL])))))))));
    }
}
