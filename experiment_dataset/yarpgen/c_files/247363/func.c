/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247363
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
    var_19 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = arr_2 [i_0] [i_1] [i_1 - 1];
                var_21 = ((/* implicit */unsigned long long int) arr_0 [i_0 + 1]);
                var_22 *= ((/* implicit */_Bool) ((arr_3 [i_1 - 1] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_1 [i_0]) & (arr_1 [i_0 + 1]))) == (((/* implicit */int) arr_4 [i_0 - 2]))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((var_9) << (((((var_7) | (((/* implicit */unsigned long long int) ((var_5) * (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) - (8437408270102610227ULL))))))));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */long long int) arr_6 [i_2]);
        arr_8 [i_2] = ((/* implicit */unsigned short) arr_0 [i_2]);
        var_24 = ((/* implicit */long long int) arr_5 [3LL]);
    }
}
