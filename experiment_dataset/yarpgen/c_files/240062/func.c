/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240062
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_12 = ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [(short)15]))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_5 [11U] [i_0])))) << (((((/* implicit */int) arr_2 [i_0] [(unsigned short)1] [i_2])) - (161))));
                    arr_6 [i_0] [(unsigned char)1] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1] [i_2])) || (((/* implicit */_Bool) (short)7970))))), (((unsigned short) min((((/* implicit */long long int) arr_3 [16ULL] [i_2])), (-3439408955453111853LL))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        for (signed char i_4 = 4; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [(unsigned char)5] [i_4] = arr_0 [i_0];
                                var_13 = ((/* implicit */unsigned char) max((1898453469U), (((/* implicit */unsigned int) arr_1 [i_1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) ((1898453469U) << (((((/* implicit */int) (signed char)-32)) + (33)))));
    var_15 = ((/* implicit */short) max((var_4), (var_1)));
}
