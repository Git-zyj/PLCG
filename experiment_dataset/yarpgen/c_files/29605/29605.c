/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_13 = ((+(((arr_1 [i_0 + 2]) ? 0 : var_0))));
                        var_14 = (arr_1 [i_1]);
                    }
                    for (int i_4 = 3; i_4 < 24;i_4 += 1)
                    {
                        arr_15 [i_0] [i_4] [i_2] [i_4] = 0;
                        arr_16 [i_0 + 3] [i_1] [i_0 + 3] [1] [i_4 + 1] &= var_8;
                    }
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        var_15 = ((var_5 ? (2615090582832399106 > 2400396628) : -1572261542464074673));
                        arr_19 [i_5] [i_5] [i_5] [i_5 + 1] [i_5] [i_5 - 1] = (-1527388623 || 462533408);
                        var_16 = ((((!(arr_12 [i_5 + 1] [i_0 + 4] [1] [16]))) || ((!(arr_12 [i_5 + 2] [i_0 - 1] [14] [i_0 - 1])))));
                    }
                    var_17 &= (!-13551558893331394221);
                }
            }
        }
    }
    #pragma endscop
}
