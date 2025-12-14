/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247191
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
    for (int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) 1095572633U);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_7)))) == ((-(arr_2 [i_0 - 3] [i_0] [i_0 - 1])))));
                var_12 &= ((/* implicit */int) ((short) 538195105391669653LL));
            }
        } 
    } 
    var_13 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) 538195105391669673LL)) && (((/* implicit */_Bool) 12U))))) : (((/* implicit */int) ((short) var_2))))), ((-(((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (_Bool)1)))))))));
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (var_5) : ((+(((((/* implicit */int) var_3)) / (((/* implicit */int) var_8)))))))))));
    var_15 &= ((/* implicit */_Bool) var_10);
}
