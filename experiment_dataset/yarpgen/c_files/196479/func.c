/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196479
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (max((var_8), (((/* implicit */unsigned int) var_0)))) : (max((((/* implicit */unsigned int) ((int) 1887416474889798018ULL))), (min((((/* implicit */unsigned int) var_9)), (2231419742U)))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_2), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (var_0)))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_2)) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_8) : (((/* implicit */unsigned int) var_10)))))))));
    var_13 = var_9;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            arr_5 [i_1 - 2] [i_1] [i_0] = ((int) var_3);
            var_14 = ((/* implicit */long long int) arr_2 [i_0]);
            arr_6 [i_0] [6U] = ((/* implicit */signed char) 18446744073709551615ULL);
        }
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            arr_10 [i_2] [i_0] [i_0] = var_3;
            arr_11 [3U] [i_2] = ((/* implicit */int) ((unsigned int) ((max((7024458180570319390ULL), (((/* implicit */unsigned long long int) var_2)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))));
        }
        var_15 = ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) arr_7 [i_0] [i_0])), (arr_0 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3153))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_9)))))))));
    }
    var_16 = min((((/* implicit */int) (short)-15014)), ((-2147483647 - 1)));
}
