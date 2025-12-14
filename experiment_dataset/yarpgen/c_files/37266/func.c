/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37266
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
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) min((min((-922608783), (arr_6 [i_0] [i_0] [i_0]))), (min((arr_6 [i_0 - 1] [i_1] [i_1]), (922608808)))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_2 [i_0 + 3])))) || (((arr_6 [i_0 + 1] [i_0 + 2] [i_0 + 2]) < (min((arr_0 [i_0]), (arr_6 [i_0] [i_0] [i_0]))))))))));
                var_20 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [11]);
            }
        } 
    } 
    var_21 = (+(922608774));
}
