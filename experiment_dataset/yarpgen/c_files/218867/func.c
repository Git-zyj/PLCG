/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218867
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
    var_18 *= ((/* implicit */short) max((var_7), (((/* implicit */unsigned long long int) var_16))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [1LL] [i_0] [i_1] = min(((signed char)-12), ((signed char)43));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) arr_8 [i_0] [i_2] [i_1] [i_3]);
                            arr_9 [i_0] [(signed char)7] [i_1] [7U] = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_2])) >> (((((/* implicit */int) min(((short)-31900), (((/* implicit */short) (signed char)20))))) + (31920))))) | (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */int) max(((signed char)20), ((signed char)6)));
    var_21 -= ((/* implicit */signed char) var_11);
    var_22 = ((/* implicit */signed char) var_11);
}
