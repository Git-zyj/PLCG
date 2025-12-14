/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207827
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
    var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-(-1949884917))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((9928968567611976414ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))))) : (((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)4] [i_1])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_1 + 4])) : ((+(((/* implicit */int) arr_2 [i_0 + 1] [8LL]))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) 0ULL);
    var_19 = ((/* implicit */short) var_13);
}
