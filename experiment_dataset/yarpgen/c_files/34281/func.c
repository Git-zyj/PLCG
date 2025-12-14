/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34281
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)35552))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -6413833006534630575LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)0)), (var_2)))) || (((/* implicit */_Bool) 10ULL)))))) : (867207542U))))));
    var_20 = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_17))))));
}
