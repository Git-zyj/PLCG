/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20624
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_15 = arr_0 [i_1];
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) arr_2 [i_2 - 1] [i_2]);
                            var_16 = ((/* implicit */unsigned short) min((var_16), ((unsigned short)44522)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 |= ((/* implicit */long long int) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) (unsigned short)20987)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))))));
}
