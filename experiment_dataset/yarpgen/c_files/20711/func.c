/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20711
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) - (((/* implicit */int) arr_1 [i_0]))))) ? (arr_0 [i_0]) : (((unsigned int) var_4))))) ? (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_1])))) : ((~(((/* implicit */int) arr_4 [i_1]))))));
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned short) (~(((var_3) & (((/* implicit */int) (_Bool)1))))));
                var_15 = ((/* implicit */unsigned char) max((((((arr_5 [i_1] [i_0]) & (((/* implicit */unsigned long long int) var_9)))) == (((/* implicit */unsigned long long int) arr_0 [i_0])))), (var_5)));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_9);
}
