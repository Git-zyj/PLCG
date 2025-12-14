/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42043
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
    var_16 = ((/* implicit */unsigned long long int) var_2);
    var_17 &= var_6;
    var_18 = ((/* implicit */unsigned long long int) (-(1873509117)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min((min((14291797457593269748ULL), (((/* implicit */unsigned long long int) arr_5 [i_0 + 3] [i_1 - 1] [i_1])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)123))))))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_4 [i_0])))) ? ((~(arr_4 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 33554368U))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1873509131))));
                            arr_13 [i_0 + 3] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */int) var_13);
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (8640943572200562457ULL)));
            }
        } 
    } 
}
