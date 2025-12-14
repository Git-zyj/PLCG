/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45878
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) min((((long long int) ((_Bool) (short)13110))), (((/* implicit */long long int) arr_2 [i_0] [i_1] [i_0]))));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)13122)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) 1928782836U)) | (arr_3 [i_0]))) : (((((/* implicit */unsigned long long int) 1928782846U)) * (var_5)))))) ? (min((((((/* implicit */_Bool) arr_3 [13U])) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_1])))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_13))))) : (arr_1 [i_0])));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((unsigned int) max((max((var_4), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))))))))));
    var_16 = var_13;
}
