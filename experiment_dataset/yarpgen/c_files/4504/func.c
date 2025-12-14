/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4504
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
    var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_3))))) : (((/* implicit */int) var_10))))) ? ((+(((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_5)))))) : (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) arr_1 [i_0 + 1]);
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0])) >> (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)17])) ? (((/* implicit */int) arr_3 [i_1] [18U])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 1]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))) + (arr_1 [i_0 + 2])))));
                var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1] [i_0]))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)96))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0 + 2] [i_0 - 1]))))) ? (((/* implicit */int) min(((unsigned char)0), ((unsigned char)117)))) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1]))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_0);
}
