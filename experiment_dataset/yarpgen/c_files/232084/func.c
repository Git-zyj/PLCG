/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232084
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (~(3290901112U))))));
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_8)))) && (((/* implicit */_Bool) ((long long int) ((signed char) 3290901099U))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((3840437781949612655ULL), (((/* implicit */unsigned long long int) var_6))))))) | ((-(((((/* implicit */_Bool) 8460708621660938809ULL)) ? (((/* implicit */long long int) arr_3 [i_0] [i_1])) : (0LL)))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) arr_2 [i_1] [i_1])))));
            }
        } 
    } 
    var_15 = var_10;
}
