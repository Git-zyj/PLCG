/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = (min(var_20, 1));
        var_21 += (4227 < 1);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_22 = (1 * 8);
                            arr_11 [i_0] [i_1] [9] [i_0] [19] = -2701498246605860378;
                            var_23 = (min(var_23, (1 <= 1)));
                        }
                    }
                }
            }
            arr_12 [i_0] [i_0] = -1073741824;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            arr_21 [i_0] [i_7] [i_5] [i_6] [i_7] = (1 != 1);
                            var_24 = (max(var_24, (((6711152119500738117 << (971547818333961396 - 971547818333961396))))));
                            var_25 = -4611148145545275068;
                            var_26 = (min(var_26, (484 + 15)));
                            arr_22 [i_7] [i_1] &= (((-645036445 % -2244581056112383364) % 1));
                        }
                    }
                }
            }
            arr_23 [i_0] [i_0] [i_0] = ((-4 + 2147483647) << (112 - 112));
            var_27 &= ((-8272819108720863416 || (1 && 18158513697557839872)));
        }
        arr_24 [22] [i_0] |= (121 < 8272819108720863424);
    }
    var_28 = (((var_17 * ((60126 >> (-8272819108720863401 + 8272819108720863429))))));
    #pragma endscop
}
