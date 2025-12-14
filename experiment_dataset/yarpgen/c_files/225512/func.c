/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225512
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) arr_2 [i_0 + 2])))))));
                var_20 = ((/* implicit */unsigned long long int) 2677319016U);
                var_21 = ((/* implicit */unsigned long long int) arr_1 [1ULL]);
            }
        } 
    } 
    var_22 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), ((-(4955452283696897307ULL))))))));
}
