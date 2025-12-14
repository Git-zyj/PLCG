/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(2147483644 * 2199177741)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 *= ((((((((-17797 ? (-127 - 1) : 55743))) ? (((min(-78, 255)))) : (min(1, 2440768142))))) ? (min((arr_6 [0] [i_3] [i_4]), ((30936 ? 91 : var_10)))) : ((((!(((1854199153 ? 127 : -22020)))))))));
                                var_16 = arr_11 [i_1] [i_1] [i_2] [i_3] [i_4];
                            }
                        }
                    }
                }
                var_17 = ((~(arr_7 [i_1] [i_0] [i_0])));
            }
        }
    }
    var_18 *= -49;
    var_19 = ((((((~var_4) / var_12))) < ((~(max(var_0, 2440768125))))));
    #pragma endscop
}
