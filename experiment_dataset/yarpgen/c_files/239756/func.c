/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239756
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)94)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_10)))))))), (((long long int) (!(((/* implicit */_Bool) var_2)))))));
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [13ULL])) - (((/* implicit */int) arr_3 [i_0]))))) - (min((((/* implicit */unsigned int) arr_3 [i_1])), (1218407696U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_0])))) - (((/* implicit */int) ((_Bool) var_9)))))) : (((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [(unsigned char)3])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) (-(((/* implicit */int) var_2))))))));
}
