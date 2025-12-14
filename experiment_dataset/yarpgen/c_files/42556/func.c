/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42556
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
    for (short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (short)-26094)) : (((/* implicit */int) arr_2 [i_1])))) + (((/* implicit */int) arr_10 [i_0 - 2] [i_1] [i_1] [i_3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_3 + 2] [i_2 - 4] [i_1] [i_1]))))) : (((/* implicit */int) arr_1 [i_2]))));
                                arr_13 [i_0 - 1] [i_1] = ((/* implicit */unsigned char) (signed char)126);
                            }
                        } 
                    } 
                    var_11 = (i_1 % 2 == 0) ? (((unsigned short) ((((((/* implicit */int) arr_6 [i_1])) + (2147483647))) << (((arr_3 [i_1] [i_1]) - (780323437854464578ULL)))))) : (((unsigned short) ((((((((/* implicit */int) arr_6 [i_1])) - (2147483647))) + (2147483647))) << (((((arr_3 [i_1] [i_1]) - (780323437854464578ULL))) - (15554433972670508742ULL))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_8);
}
