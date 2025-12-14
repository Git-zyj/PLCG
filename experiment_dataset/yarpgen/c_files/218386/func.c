/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218386
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_4))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned char) arr_2 [i_1])))));
                arr_7 [i_1] [(_Bool)1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0] [i_0]))))), (max((((/* implicit */unsigned int) var_13)), (arr_2 [i_1])))))) | (min((arr_5 [i_0]), (arr_5 [i_0])))));
            }
        } 
    } 
}
