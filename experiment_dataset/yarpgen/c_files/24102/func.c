/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24102
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) -857718086)) * (1485688377U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 + 2] [i_1] [i_2] [i_1])) <= (((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_1] [i_2]))))))));
                    var_19 &= ((/* implicit */int) arr_7 [i_0] [i_1] [i_0]);
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */unsigned int) var_14);
}
