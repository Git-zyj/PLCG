/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189594
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
    var_19 = ((/* implicit */int) ((long long int) var_6));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) (~(((int) arr_4 [i_1] [i_0] [i_0]))));
                var_21 ^= arr_2 [i_0];
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max(((+(arr_2 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))))));
                var_22 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_7))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (((((-(((/* implicit */int) arr_7 [i_3 - 3] [i_2] [i_2] [i_3 + 4])))) + (2147483647))) << ((((((+((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))) + (7211))) - (5)))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_2 [i_3 - 3])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3 - 2] [i_2]))) / (arr_2 [i_3 - 3])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) (~(max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_17))))), ((~(var_15)))))));
}
