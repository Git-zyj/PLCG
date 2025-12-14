/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209121
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    var_15 = ((long long int) arr_3 [i_1] [i_2 - 1]);
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((arr_5 [i_0] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_2 - 1])))))))) + (((((((/* implicit */long long int) 535822336U)) < (-3191365562305580367LL))) ? (((/* implicit */unsigned long long int) ((long long int) 36028795945222144ULL))) : (15568226928522967088ULL)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) var_2);
    var_17 = ((var_6) + (((/* implicit */unsigned long long int) 3191365562305580347LL)));
    var_18 = ((/* implicit */unsigned int) ((max(((+(-3191365562305580342LL))), (((/* implicit */long long int) 3759144950U)))) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_11))))));
}
