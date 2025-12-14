/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32033
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
    var_12 |= ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */int) (signed char)-108)) <= (-381951826)))) | (((/* implicit */int) min((var_5), (((/* implicit */short) var_4))))))) * (((/* implicit */int) ((var_2) >= (3174585886U))))));
    var_13 ^= ((/* implicit */signed char) var_0);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) max((var_14), (17184998779997586345ULL)));
            var_15 ^= ((/* implicit */signed char) (+((-(min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_6 [i_0] [i_0])))))));
            var_16 |= ((/* implicit */int) arr_5 [i_0 - 2]);
        }
        arr_7 [i_0 - 4] |= ((/* implicit */int) var_7);
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 22; i_2 += 4) 
    {
        var_17 -= ((/* implicit */short) (-((-(var_7)))));
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 - 1])))))));
    }
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (var_6)));
    var_20 |= ((/* implicit */signed char) min((((15786175188221043775ULL) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) var_0))));
}
