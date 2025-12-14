/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = ((((((min(1, var_10))) ? 1 : (arr_3 [i_0] [i_1] [i_1])))) ? ((max((((arr_0 [i_0]) ? 4294967281 : var_3)), 15))) : (((((~(arr_0 [i_0])))) & (~6108518838279900675))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_2 - 1] [i_1] [i_0] |= ((8456194844793868466 - (!2897543390)));
                                arr_13 [i_4 + 1] [i_1 - 2] [i_2] [12] [i_4 + 1] = ((-((-6108518838279900675 / (arr_11 [i_2 + 2] [i_2 + 3] [i_1 - 2] [i_1 - 1] [i_1 + 1])))));
                                var_18 += (((((-(arr_3 [i_0] [i_1 - 1] [i_2 + 4])))) || (var_16 >= var_5)));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (-37 * 1221816280);
                            }
                        }
                    }
                }
                var_19 = (max(var_19, (((((((arr_0 [i_0]) ? 1307492497 : (arr_1 [i_0] [i_1 - 1])))) / (((arr_1 [i_0] [i_0]) ? -6108518838279900655 : (arr_1 [i_0] [i_1 - 2]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                var_20 = ((((max((arr_16 [i_6]), (arr_18 [i_5] [i_5] [i_5])))) ? var_6 : ((~(arr_15 [i_5])))));
                var_21 = (min(var_21, 65535));
            }
        }
    }
    #pragma endscop
}
