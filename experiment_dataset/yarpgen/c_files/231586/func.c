/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231586
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
    var_16 &= ((/* implicit */unsigned char) var_6);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_7 [i_0] [(_Bool)1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32752)) ? (((/* implicit */unsigned int) arr_1 [i_0 - 1])) : (arr_6 [i_0 + 1])));
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_5))));
            arr_8 [i_1] [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_1] [i_0 - 1])) ? (((/* implicit */int) ((var_5) || (((/* implicit */_Bool) arr_4 [1ULL] [i_1] [i_1]))))) : ((~(((/* implicit */int) arr_4 [(_Bool)0] [(_Bool)0] [i_1]))))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (short)32752)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-30146))))))) ? ((+(((((/* implicit */int) arr_4 [i_0] [i_2 - 1] [(_Bool)1])) / (((/* implicit */int) (short)32767)))))) : (((/* implicit */int) (unsigned char)4))));
            arr_11 [i_0 + 1] [i_2] [i_2] = ((/* implicit */long long int) arr_4 [i_2 - 1] [i_0 - 2] [i_0]);
            arr_12 [(_Bool)1] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
        }
    }
}
