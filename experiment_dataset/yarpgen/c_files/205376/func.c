/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205376
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) arr_3 [(unsigned char)8] [i_1]);
                var_18 = ((/* implicit */unsigned short) arr_2 [i_0] [i_1]);
                var_19 = ((/* implicit */short) (((_Bool)0) ? (5LL) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3086355997U)) ? (((/* implicit */long long int) 3868658039U)) : (8275840708374645915LL)))) ? (8275840708374645908LL) : (((long long int) -8275840708374645916LL))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) min((var_15), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))));
    var_21 = ((/* implicit */unsigned int) var_4);
}
