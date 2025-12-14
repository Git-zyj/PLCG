/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202473
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
    var_17 = -243375095;
    var_18 = ((/* implicit */short) ((_Bool) -8310036105701443647LL));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) (signed char)3);
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) min((max((min((((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_1])), (var_2))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8310036105701443646LL)) ? (1119024136) : (((/* implicit */int) var_4))))))), (min((((/* implicit */unsigned int) arr_1 [i_0] [i_1 + 1])), ((-(1408077885U)))))));
                arr_5 [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0]);
                var_20 += ((/* implicit */unsigned char) ((unsigned long long int) min((arr_1 [i_1] [i_1 - 1]), (arr_1 [i_0] [i_1]))));
            }
        } 
    } 
}
