/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~var_2) ? 62966 : (((((1475810966 < -853822172) == ((1475810967 << (1475810966 - 1475810966)))))))));
    var_13 = (min(var_13, var_6));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_14 *= 4294967295;
                var_15 = (((((min(var_7, var_10)) ? (arr_4 [i_1] [i_1 + 1] [i_0 - 3]) : (arr_4 [i_0] [i_0] [i_0])))));
                var_16 = ((!-10808) ? (-1475810980 > -4) : -1475810972);
                var_17 = (arr_1 [i_0 + 1] [i_0 + 1]);
            }
        }
    }
    #pragma endscop
}
