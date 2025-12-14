/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = ((((1 ^ 16212196961790840737) > (20206 && var_14))));
                                arr_12 [i_0] [i_2] [i_1 - 1] [i_0] = var_0;
                                arr_13 [12] [i_2] [i_2] [i_0] [i_4] = var_1;
                            }
                        }
                    }
                }
                arr_14 [12] &= ((var_1 ? ((((min(var_6, var_0))) % (((arr_0 [16] [16]) ? 31 : 31)))) : (((4467323676017575221 ? ((min(-112, (arr_6 [i_0] [i_0] [2] [i_0])))) : (((arr_6 [12] [i_1] [8] [i_0]) ? var_3 : 0)))))));
                arr_15 [i_0] [i_1] [i_1] = (arr_10 [i_1 - 1] [8] [i_1] [i_1] [i_1 - 1] [i_1 - 1]);
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_21 [i_6] [i_5 + 1] [i_1 - 1] [i_6] &= (((-(min(var_0, 126)))));
                            arr_22 [i_0] = var_10;
                            var_18 ^= (min(((max(var_14, (min(-112, (arr_4 [i_6] [i_5] [i_1] [i_6])))))), (min(127, (arr_7 [i_0] [i_0] [i_0] [i_0] [i_6])))));
                        }
                    }
                }
                arr_23 [i_0] [8] = (min(7890162160286889880, var_2));
            }
        }
    }
    var_19 -= ((((min(((var_13 ? -56 : 511)), ((max(var_8, 1)))))) > (var_12 - 9404)));
    var_20 = var_10;
    #pragma endscop
}
