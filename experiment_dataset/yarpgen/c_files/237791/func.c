/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237791
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
    var_11 *= ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_1] [i_2]))) : (var_5)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_3]))) > ((~(var_7)))))) : (((/* implicit */int) var_1))));
                                var_13 += ((/* implicit */short) arr_3 [i_4] [i_2] [i_1]);
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_1] [i_0] &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_13 [i_1 - 1] [i_1 + 1] [i_1 - 1])))), (((((/* implicit */int) arr_13 [i_1 + 1] [i_1 - 1] [i_1 + 1])) ^ (((/* implicit */int) var_1))))));
                }
            } 
        } 
    } 
}
