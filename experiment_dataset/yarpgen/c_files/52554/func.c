/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52554
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
    var_14 |= ((/* implicit */unsigned int) var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_0 [i_0])), (min((max((var_8), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) (+(var_2))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_16 = max((max((((/* implicit */unsigned int) (_Bool)1)), (arr_9 [i_0] [i_0] [i_0] [i_4]))), ((((!((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3] [i_2]))) : (max((((/* implicit */unsigned int) (_Bool)1)), (var_7))))));
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) max((max((-5335305310283343750LL), (((/* implicit */long long int) (_Bool)1)))), (6279521275136562960LL))))));
                                var_18 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_8 [i_0] [i_2] [(unsigned char)13] [i_3])))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_3 [i_0])), (arr_8 [i_4] [i_0] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
