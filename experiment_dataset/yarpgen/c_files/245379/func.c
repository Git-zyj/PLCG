/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245379
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
    var_12 |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (605229189U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    var_13 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_6 [i_1] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (3321142075206953941ULL)))) ? (((((/* implicit */int) arr_5 [i_0] [11LL] [i_0])) % (((/* implicit */int) arr_2 [i_1] [i_1])))) : (((/* implicit */int) ((unsigned char) (+(var_5))))));
            var_14 = ((/* implicit */short) ((signed char) var_2));
        }
        var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(var_11)))) % (var_10)));
    }
}
