/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208838
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
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)38740)) <= (((/* implicit */int) (short)(-32767 - 1))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */int) (unsigned short)38764);
                var_19 = arr_2 [i_1 - 1] [i_0];
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */short) var_9)), ((short)0)))) ? ((+((-2147483647 - 1)))) : (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) (_Bool)1))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (1837213727)))))))));
}
