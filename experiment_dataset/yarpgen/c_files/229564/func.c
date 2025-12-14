/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229564
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
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((max((var_2), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))))))));
    var_14 = ((/* implicit */int) var_11);
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_12)), (var_9))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10)))))));
                var_17 = ((/* implicit */unsigned char) var_2);
                arr_4 [i_0] = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) var_5)))), ((!(((/* implicit */_Bool) var_7))))));
                var_18 = ((/* implicit */unsigned char) max((max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (min((((/* implicit */int) var_0)), (var_4))))), (((/* implicit */int) (!(((/* implicit */_Bool) -8571817907683460143LL)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned char)10))))));
}
