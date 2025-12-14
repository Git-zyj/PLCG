/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51491
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((_Bool) 35184372087808ULL))) : (((/* implicit */int) ((_Bool) 737957814U))))))))));
    var_18 &= ((/* implicit */long long int) (_Bool)1);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_1 [i_1] [i_1 - 1]), ((short)-32767))))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!((!(arr_3 [i_0]))))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */_Bool) var_13);
}
