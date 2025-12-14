/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27819
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
    var_10 &= ((/* implicit */int) ((534858540) < (var_9)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            var_11 = ((/* implicit */long long int) ((_Bool) 15211304309467289761ULL));
            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 2] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_1 - 1] [(_Bool)1]))));
            var_13 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 1704349070)) && (((/* implicit */_Bool) arr_1 [i_0])))))));
        }
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (1704349065)));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((arr_4 [i_0] [i_0]) / (((/* implicit */unsigned int) arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_15 -= arr_2 [i_0] [i_2] [i_2];
            var_16 ^= ((/* implicit */unsigned char) (~(-1704349065)));
        }
    }
}
