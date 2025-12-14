/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230143
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
    var_17 = ((/* implicit */short) (~(1887932773)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) arr_7 [i_1] [i_1 + 1] [i_1])))));
                                arr_13 [i_0] [(unsigned short)15] [i_0] [i_1] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) 4240081958U)) ? (351078451829247625LL) : (((/* implicit */long long int) -1887932774)));
                                arr_14 [i_1 - 1] [i_1] [i_3] [i_4] = ((/* implicit */short) ((unsigned int) (!(arr_1 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [(signed char)16] [i_1] = ((/* implicit */unsigned int) 2147483647);
                }
            } 
        } 
    } 
}
