/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232814
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
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_11 = min(((~(((/* implicit */int) ((unsigned short) (_Bool)1))))), (max((((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_1 + 2])) ? (2147483647) : (((/* implicit */int) var_6)))), (0))));
                    var_12 |= ((int) max((max((-2147483644), (((/* implicit */int) arr_4 [(_Bool)1] [i_1] [8U])))), (arr_6 [i_0 + 1] [i_0] [i_0 + 1])));
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (unsigned short)7904))));
                    var_14 *= ((/* implicit */unsigned long long int) (((+(arr_0 [i_0 - 2] [i_1 - 2]))) != (((/* implicit */int) (_Bool)1))));
                    var_15 = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))));
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */unsigned long long int) ((signed char) 1032192));
    var_17 = ((/* implicit */signed char) var_4);
}
