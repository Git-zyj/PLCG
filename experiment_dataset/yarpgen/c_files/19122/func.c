/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19122
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
    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)1462))));
    var_20 = ((/* implicit */unsigned short) min((min((((/* implicit */int) ((var_16) < (((/* implicit */int) var_12))))), (max((var_14), (((/* implicit */int) (unsigned short)35536)))))), ((~(((int) var_3))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            {
                var_21 += ((/* implicit */unsigned short) ((var_18) ^ (((/* implicit */int) min((((/* implicit */unsigned short) ((arr_2 [(unsigned short)6] [i_1]) == (var_3)))), (max(((unsigned short)11016), ((unsigned short)3760))))))));
                var_22 = ((/* implicit */unsigned short) var_7);
            }
        } 
    } 
}
