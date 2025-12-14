/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210817
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
    var_16 = ((/* implicit */unsigned int) var_10);
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_13))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (0U) : (((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_0 + 2]))))));
        var_19 += ((/* implicit */short) var_2);
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
            {
                var_20 += ((/* implicit */signed char) arr_3 [i_1] [(unsigned short)10]);
                var_21 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_3 + 1] [4])) ? (((/* implicit */int) arr_9 [(signed char)5] [i_3 + 1] [i_3])) : (((/* implicit */int) arr_9 [(unsigned char)20] [i_3 + 1] [15]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_9 [i_1] [i_3 + 1] [i_3])));
                arr_11 [i_1] [i_2] [(short)8] [(short)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (arr_7 [i_2] [(short)16]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)42939)) ? (((/* implicit */int) (unsigned short)31283)) : (((/* implicit */int) (short)13483)))))))) ? (arr_8 [i_1]) : (((/* implicit */int) arr_4 [(short)14] [i_2]))));
            }
            var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (arr_10 [i_2] [(signed char)0]) : (var_3)))) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_2])) : (((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_9 [(short)18] [i_1] [i_2])))))) : (var_14)));
        }
        var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((((/* implicit */_Bool) arr_3 [i_1] [(short)7])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1]))))));
        arr_12 [18U] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_7)) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_6 [i_1] [i_1]) : (var_1))) : (arr_6 [(unsigned char)2] [(unsigned short)11])))));
    }
}
