/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223280
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
    var_12 = ((unsigned int) ((_Bool) (-(((/* implicit */int) (unsigned short)4745)))));
    var_13 = var_10;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [2] = ((/* implicit */int) ((((arr_1 [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50763))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0]))))) : ((-((+(6628073372014877481ULL)))))));
                var_14 = ((/* implicit */int) (-((+(max((2354036310U), (((/* implicit */unsigned int) arr_3 [2U] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned short) max((((((((/* implicit */unsigned long long int) 2147483647)) - (var_6))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (28672U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (232048019U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10)))))))));
}
