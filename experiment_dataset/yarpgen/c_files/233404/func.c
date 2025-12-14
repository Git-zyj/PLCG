/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233404
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
    var_12 = ((/* implicit */signed char) (!(var_9)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (-((~((+(((/* implicit */int) var_4)))))))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)73))) % (arr_1 [i_1])))) ? (((/* implicit */int) arr_3 [i_0])) : ((-(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */unsigned char) ((signed char) var_8))))))) : (max((arr_1 [i_1]), (((arr_1 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20388)))))))));
            }
        } 
    } 
}
