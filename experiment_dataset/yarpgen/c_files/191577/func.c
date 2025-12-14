/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191577
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
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 19; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_11 [(signed char)11] [i_1 - 2] [i_2 - 4] [i_3 - 1] [i_1 - 1] [i_3 - 1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_0))))))), (max((arr_6 [(short)8] [i_0 - 3]), (((/* implicit */unsigned long long int) var_1))))));
                            var_13 = ((/* implicit */int) (-(min((((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))), (((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((((((/* implicit */int) arr_2 [i_0 - 1])) << (((((int) var_2)) - (2133017233))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_4)) + (((/* implicit */int) var_8)))))))))));
                arr_12 [i_0] [i_1 - 2] = ((/* implicit */signed char) min((((((((/* implicit */int) arr_9 [i_1] [i_1] [i_1 - 2] [i_0])) >> (((/* implicit */int) arr_10 [i_1 - 2] [i_1 - 2] [i_0 - 1])))) & (((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_0 + 3])))), (((/* implicit */int) min((((/* implicit */signed char) var_9)), (var_8))))));
                var_15 = ((/* implicit */signed char) var_3);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((var_4) ? (((/* implicit */unsigned long long int) (~(var_10)))) : (min((var_2), (((/* implicit */unsigned long long int) var_0)))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_4)))))));
}
