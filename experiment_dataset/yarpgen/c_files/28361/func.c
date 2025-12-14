/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28361
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
    var_13 -= ((/* implicit */signed char) ((unsigned char) var_4));
    var_14 = ((var_0) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((var_4), (((/* implicit */signed char) var_0)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        arr_4 [(unsigned char)7] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (0ULL)))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((signed char) arr_2 [i_0 - 2]))))) != (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 - 4]))))) ? (((/* implicit */int) arr_3 [i_0 - 4] [i_0 - 4])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0 - 4] [i_0 + 3])) : (((/* implicit */int) arr_2 [i_0]))))))));
        arr_5 [i_0 - 2] [i_0] = ((/* implicit */unsigned long long int) arr_1 [(_Bool)1]);
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) arr_6 [i_1 + 1]);
        arr_9 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) 2174678698834439268ULL))));
    }
}
