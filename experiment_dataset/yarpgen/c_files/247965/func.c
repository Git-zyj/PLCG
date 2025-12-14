/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247965
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_14 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_1 [i_0 + 1] [i_1 + 2]), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0 - 1]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 4) 
        {
            {
                arr_9 [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) arr_8 [i_2] [i_3]);
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (-(((((/* implicit */int) arr_7 [i_2] [i_3 - 1])) >> ((((~(arr_5 [i_2]))) - (2770983893U))))))))));
                var_17 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) arr_8 [i_3 - 2] [i_3 + 1])) + (((/* implicit */int) (short)21634)))));
            }
        } 
    } 
}
