/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238725
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
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        var_16 = ((/* implicit */_Bool) ((unsigned char) arr_0 [i_0 + 3]));
        var_17 = ((/* implicit */unsigned char) (signed char)99);
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 3])) / (((/* implicit */int) arr_1 [i_0 + 2])))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_19 ^= ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_1])) > (((/* implicit */int) arr_3 [i_1] [i_1])))))) > (max((var_1), (((/* implicit */unsigned long long int) var_15))))))), (((((/* implicit */int) arr_3 [i_1] [i_1])) & (((/* implicit */int) arr_2 [i_1] [i_1]))))));
        var_20 &= ((/* implicit */short) ((((/* implicit */int) (unsigned char)63)) == (((/* implicit */int) arr_3 [i_1] [i_1]))));
    }
    var_21 = ((/* implicit */short) var_2);
}
