/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204721
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
    var_14 = ((/* implicit */signed char) min((812566152), (16777215)));
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), (min((((/* implicit */int) var_12)), (var_2)))))), (var_6)));
    var_16 = ((/* implicit */long long int) min((min((max((var_2), (var_9))), (min((var_2), (((/* implicit */int) var_10)))))), (max((max((812566155), (((/* implicit */int) var_1)))), (var_4)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [1U] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) max((arr_1 [i_1]), (((/* implicit */long long int) var_1))))), (var_6))), (((/* implicit */unsigned long long int) max((arr_1 [i_1]), (arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)21)), (arr_11 [i_0] [i_1] [i_2] [i_0] [i_0])))), (min((((/* implicit */long long int) var_10)), (arr_10 [i_1] [i_1] [i_1] [i_2])))));
                            var_17 = ((/* implicit */int) min((min((-5663543447174384474LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) min((var_3), (234107554))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_6);
}
