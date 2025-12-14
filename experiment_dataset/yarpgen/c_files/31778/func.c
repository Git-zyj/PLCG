/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31778
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
    var_12 = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) var_6)), (var_10)))));
    var_13 = ((/* implicit */short) min((var_10), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [6U] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_2 [i_0 - 1] [i_1 - 1])), (arr_3 [i_0 + 1]))), (((/* implicit */long long int) min((var_5), (((/* implicit */int) ((unsigned char) var_5))))))));
                var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) (signed char)59)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
                arr_5 [i_1] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_2))) ? (min((((/* implicit */unsigned long long int) min((arr_3 [i_0]), (((/* implicit */long long int) var_11))))), (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0])), (arr_3 [i_0])))), (max((var_1), (((/* implicit */unsigned long long int) var_0))))))));
            }
        } 
    } 
}
