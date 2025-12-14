/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225617
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), ((-(min((((/* implicit */unsigned long long int) var_6)), (min((var_0), (((/* implicit */unsigned long long int) var_7))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (!(((/* implicit */_Bool) 5959750521099477196ULL)))))));
                arr_4 [i_0] = ((/* implicit */signed char) var_2);
                arr_5 [i_0] = ((/* implicit */unsigned int) max((min((arr_1 [i_0]), (arr_1 [i_0]))), (arr_1 [i_0])));
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_10))));
            }
        } 
    } 
}
