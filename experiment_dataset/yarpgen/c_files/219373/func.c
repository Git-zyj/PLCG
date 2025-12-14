/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219373
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
    var_16 = ((unsigned int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) var_3)))))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) - (var_14))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (9223372036854775807LL))))));
                arr_6 [i_0] [i_1] = ((((/* implicit */long long int) arr_1 [i_0])) - ((~(((((/* implicit */long long int) arr_1 [i_0])) / (4081589736606033456LL))))));
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned int) max((((((4081589736606033454LL) >> (((4081589736606033456LL) - (4081589736606033418LL))))) >> (((((/* implicit */int) var_12)) - (172))))), (((/* implicit */long long int) min((((/* implicit */int) max((var_12), (((/* implicit */unsigned char) var_0))))), (((((/* implicit */_Bool) 4081589736606033456LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3)))))))));
}
