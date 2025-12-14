/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max(var_6, var_7)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] = (((max(var_8, -2147483636))));
                                arr_16 [i_3] = ((((max((arr_12 [i_2] [i_2] [i_2] [i_2]), (arr_12 [i_1] [i_2] [i_3] [i_4])))) >= 5631));
                                var_13 &= var_8;
                                arr_17 [i_3] = (5628 / (((-2147483636 || (~var_5)))));
                            }
                        }
                    }
                    var_14 = (((min(-84, (!835541358))) | (arr_3 [i_0])));
                    var_15 = (arr_1 [i_2]);
                    var_16 = (((-1069820780 ? var_11 : var_0)));
                }
            }
        }
    }
    #pragma endscop
}
