/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192356
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
    var_16 |= ((/* implicit */_Bool) var_12);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [10] [(unsigned short)0])) >> (((/* implicit */int) ((((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_1 [(_Bool)1])))) >= ((~(((/* implicit */int) arr_1 [17]))))))))))));
    }
    var_18 = ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */int) var_5)), (var_2))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_13)))) : (((((/* implicit */_Bool) 18446744073709551599ULL)) ? (0U) : (((/* implicit */unsigned int) 427479459)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
}
