/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35219
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
    var_13 = ((/* implicit */long long int) var_1);
    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_11))) >= (var_8)))) * (((((/* implicit */int) (unsigned short)16383)) | (((/* implicit */int) (unsigned short)16396))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 *= ((/* implicit */signed char) ((((var_11) * (((/* implicit */unsigned int) var_8)))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56)))));
                var_16 += ((/* implicit */_Bool) ((((((((((/* implicit */int) var_1)) + (((/* implicit */int) var_9)))) + (((/* implicit */int) var_9)))) + (2147483647))) >> (((((((/* implicit */int) (unsigned short)16383)) << (((/* implicit */int) ((_Bool) var_5))))) - (32739)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1 - 1] [(unsigned char)5] [i_0] = ((/* implicit */unsigned int) var_2);
                            var_17 = ((/* implicit */int) 3047474822810972262ULL);
                        }
                    } 
                } 
            }
        } 
    } 
}
