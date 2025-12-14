/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231589
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
    for (short i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_12 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_0 - 2] [i_0 + 1]))))), (max(((+(0U))), (((/* implicit */unsigned int) (short)-30807))))));
                    arr_13 [i_0] = ((/* implicit */short) min((min((((/* implicit */unsigned int) arr_9 [i_0] [i_2 - 2] [i_0])), (12U))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_0 - 1])))))));
                    var_16 = ((/* implicit */unsigned int) arr_6 [i_0]);
                    var_17 = ((/* implicit */int) min((max((0U), (((/* implicit */unsigned int) (short)-30807)))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0 + 1] [i_2 - 2])))))));
                    arr_14 [7U] [i_0] [i_2] [i_2] = ((/* implicit */signed char) max((1064498067U), (1064498067U)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((unsigned long long int) ((var_15) >= (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (-(min((((((/* implicit */long long int) ((/* implicit */int) (short)-30807))) | (var_8))), (((/* implicit */long long int) var_2)))))))));
}
