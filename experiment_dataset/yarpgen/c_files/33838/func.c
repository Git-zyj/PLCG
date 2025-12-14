/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33838
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned char) var_1);
                        var_13 = ((/* implicit */unsigned long long int) ((832778146) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 832778146)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 1; i_4 < 15; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */long long int) var_6);
                        var_15 = (~(((/* implicit */int) arr_3 [i_4 + 2] [i_4])));
                    }
                    /* vectorizable */
                    for (short i_5 = 2; i_5 < 17; i_5 += 4) 
                    {
                        arr_16 [i_0] [i_2] [i_2] [i_5] = ((/* implicit */long long int) ((var_9) / (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_5] [i_5 + 1]))));
                        arr_17 [i_2] [i_1] [i_2] [i_2] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((-2044852695) / (((/* implicit */int) (unsigned char)49))));
                    }
                    var_16 -= ((/* implicit */unsigned int) min((arr_6 [i_0] [i_1] [i_2]), (((/* implicit */long long int) ((((/* implicit */int) var_7)) / (var_0))))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (arr_15 [i_1] [i_1] [i_2] [(unsigned short)0])));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) 264241152U);
}
