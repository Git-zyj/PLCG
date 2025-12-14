/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30272
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
    var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_1)), (max((var_11), (((/* implicit */unsigned long long int) var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((short) ((-3613859060094802464LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_9 [i_0 + 1] [21] [21] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(var_5)))), (max((var_11), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
                    arr_10 [i_0 - 1] [0LL] [(unsigned char)4] = ((/* implicit */long long int) var_7);
                    arr_11 [i_0] [(unsigned short)18] [i_0] |= ((/* implicit */int) ((signed char) (-(var_9))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((_Bool) var_8));
}
