/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193934
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
    var_14 = ((/* implicit */int) (unsigned char)180);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            arr_6 [i_0] [12LL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) || (((/* implicit */_Bool) var_0))));
            var_15 |= ((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (var_12) : (((/* implicit */long long int) ((int) arr_2 [(unsigned short)0] [i_0] [i_1]))));
            var_16 = arr_4 [i_0] [i_0 + 1];
        }
        arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1])))));
        var_17 -= ((/* implicit */unsigned char) (signed char)54);
    }
    var_18 = ((/* implicit */_Bool) var_0);
}
