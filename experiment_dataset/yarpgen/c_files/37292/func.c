/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37292
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
    var_14 = ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 1]), (var_3))))) <= (((var_9) * (var_5))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4 + 1] = ((/* implicit */int) min((((/* implicit */long long int) max((arr_12 [(_Bool)0] [2LL] [i_1 + 2] [(_Bool)1] [i_4 + 2]), (arr_12 [i_0] [i_0] [i_1 + 2] [i_2] [i_4 + 3])))), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_6 [i_4 + 1] [i_1 + 1]))))));
                                var_16 = ((/* implicit */long long int) ((_Bool) ((int) ((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46351)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) min((((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-43))))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_0]))) / (var_12))))), (((/* implicit */unsigned int) arr_3 [i_2]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */int) ((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56)))))) > ((-(((/* implicit */int) ((signed char) var_9)))))))));
}
