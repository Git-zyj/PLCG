/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3220
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
    var_18 = ((unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (var_10)))) : (max((var_14), (((/* implicit */unsigned int) var_5))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_3 [i_0] [i_1]) : (2542195591U)))))));
                var_19 = ((/* implicit */unsigned char) 1484312994);
                var_20 = ((/* implicit */unsigned char) min((var_20), ((unsigned char)14)));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_8)), (0))))))))))));
}
