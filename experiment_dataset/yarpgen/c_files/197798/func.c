/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197798
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_3)) : (var_14))) : (((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned long long int) var_3))))))) ? (((var_0) | (((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)24370)) >> (((((/* implicit */int) var_12)) - (26272))))), (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_12))))))))));
    var_20 = ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) >> (((arr_6 [i_0] [i_1] [i_2 + 2]) + (252370577)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) arr_3 [i_2]))))) : (((/* implicit */int) var_18))));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_2 - 2] [i_2 - 1] [i_2 - 2])) & ((~(((/* implicit */int) arr_5 [i_2])))))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2 + 3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0]))));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) != (0ULL))))))));
                }
            } 
        } 
    }
}
