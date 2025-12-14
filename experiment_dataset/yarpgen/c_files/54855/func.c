/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54855
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (3635708472U) : (3635708472U)));
                var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((signed char) (-(-1001389375))))), (3635708491U)));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)39);
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)7744))) * ((+(((((/* implicit */unsigned int) arr_4 [i_0])) / (4294967295U)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) (~(max((11U), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_6)))))))));
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) (signed char)114)), (4011909367U))))))));
}
