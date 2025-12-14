/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2362
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
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) 8388607U)) ? (((/* implicit */unsigned long long int) max((2696585696U), (((/* implicit */unsigned int) (_Bool)1))))) : (var_18)))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((((/* implicit */int) arr_3 [i_0 + 1])), ((-(max((arr_1 [i_0]), (((/* implicit */int) (unsigned char)38))))))));
                    arr_7 [i_0 - 1] [i_0 - 1] [(signed char)0] &= ((/* implicit */short) (((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((arr_4 [i_0 + 1]) + (1600101344))) - (29))))) != (max((arr_2 [i_0 - 1] [i_2] [i_2]), (arr_4 [i_0 - 4])))));
                    var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2696585696U)) ? (-568114688) : (arr_2 [i_0] [i_1] [i_2])));
                    arr_8 [i_0] [i_2] [(signed char)0] [i_0 - 4] &= ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-39)))) != (((/* implicit */int) (!(((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
                }
            } 
        } 
    } 
}
