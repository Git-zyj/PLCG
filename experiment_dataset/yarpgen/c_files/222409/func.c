/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222409
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */long long int) var_10);
                    var_11 = ((/* implicit */unsigned int) ((short) arr_3 [i_1 - 1]));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    arr_17 [i_4] [i_4] [i_4] = ((/* implicit */int) ((unsigned int) ((long long int) 18446744073709551609ULL)));
                    arr_18 [i_3] |= ((/* implicit */long long int) (-(arr_16 [i_3] [i_3])));
                    var_12 = ((/* implicit */signed char) arr_12 [i_3] [i_4]);
                    var_13 = ((/* implicit */long long int) var_9);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_0)), (((((((/* implicit */int) var_7)) == (((/* implicit */int) var_7)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_9))) : (var_10)))));
}
