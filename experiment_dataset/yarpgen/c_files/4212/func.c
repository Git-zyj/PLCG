/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4212
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
    for (int i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (+((((-(var_5))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))));
                var_12 = min(((-(((/* implicit */int) var_3)))), (arr_2 [i_0] [i_0 + 2] [i_0 - 2]));
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) max((((unsigned int) arr_7 [i_2] [i_2] [i_2 - 2] [i_3] [0])), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_4] [i_1])) != (((int) var_1)))))));
                                var_14 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_0] [i_3])), ((~(((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (+(-6927820793445901647LL))))));
                arr_11 [i_1] = ((/* implicit */signed char) arr_8 [i_0] [(unsigned short)7] [i_0] [i_1] [(unsigned short)14] [i_1]);
            }
        } 
    } 
    var_16 &= ((/* implicit */_Bool) max(((-(var_5))), (((/* implicit */unsigned long long int) ((_Bool) max((var_1), (((/* implicit */long long int) 511))))))));
    var_17 = ((/* implicit */int) var_3);
}
