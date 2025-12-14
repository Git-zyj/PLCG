/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32509
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */short) var_11);
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) ((short) (-(max((1457044563U), (((/* implicit */unsigned int) (short)-7046)))))));
                            var_14 = ((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */signed char) arr_0 [i_2 + 1])), ((signed char)84)))), (((long long int) arr_8 [i_0] [i_1] [i_2 - 1]))));
                            arr_10 [1U] [i_0] [i_3 - 1] [i_3] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                            var_15 = ((/* implicit */int) (signed char)118);
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_8 [i_1] [i_1] [i_0]) / (((/* implicit */int) (signed char)64))))) ? (((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_1] [i_0]))) : (((int) arr_8 [i_1] [(short)5] [i_0]))));
                var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */unsigned int) var_5))))) ? (((1452535946U) / (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) var_1)))) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20)))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_5);
    var_18 = ((/* implicit */int) var_4);
    var_19 = ((/* implicit */unsigned char) (signed char)-20);
    var_20 = var_6;
}
