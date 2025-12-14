/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48313
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = var_7;
                var_11 = ((/* implicit */_Bool) -1530617165);
            }
        } 
    } 
    var_12 = ((/* implicit */short) max((min(((unsigned char)224), ((unsigned char)32))), (((/* implicit */unsigned char) (signed char)45))));
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)229)) && (((/* implicit */_Bool) (short)3236))))) * (((/* implicit */int) var_4)))))));
}
