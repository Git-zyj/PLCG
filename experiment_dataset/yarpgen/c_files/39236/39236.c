/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = min((min(1350426658, 14245868532649027564)), 4882843858275776810);

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_15 = (min(-1, (min((~8391), ((var_7 ? var_13 : var_5))))));
                        var_16 ^= ((-(min(((min(0, 1))), var_5))));
                        var_17 = (max(((min(187, (min(var_11, 1))))), (((((-635284619 ? var_9 : -24))) ? 3071895257 : 1))));
                        var_18 = (((((0 ? (arr_7 [i_1] [i_1] [i_2]) : -1))) ? -1710070140657398240 : ((((max(3930271879, 1)))))));
                        var_19 = ((17 ? (min(var_1, (arr_7 [i_1] [i_2] [i_2 - 3]))) : -1));
                    }
                    var_20 = 1;
                }
            }
        }
    }
    var_21 = (min((max(-10722, ((min(208, 1))))), var_6));
    var_22 &= (((((~var_2) >= -19233)) ? (min(18357, ((var_9 ? 660136103 : -10)))) : (((18555713 * (((3104290841 ? var_10 : var_0))))))));
    #pragma endscop
}
