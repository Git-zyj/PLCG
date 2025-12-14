/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 += 392176419865171127;
    var_13 = (((-((23085 ? -1 : -65)))) / (~var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 -= ((!(min((arr_3 [0] [i_1] [i_1]), ((-10830 > (arr_4 [i_1] [0])))))));
                    var_15 *= (((-13 + 2147483647) << (52 - 52)));
                    var_16 = (min((arr_0 [i_1]), (((arr_5 [9] [9] [i_2]) ? 1 : (arr_3 [i_1] [i_1] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
