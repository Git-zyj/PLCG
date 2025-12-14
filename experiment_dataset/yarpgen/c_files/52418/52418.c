/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = (~var_6);

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_10 = (((max((arr_5 [1] [5]), (~-20424))) > (5914291505465099020 == var_6)));
                                arr_15 [i_0] [1] [4] = ((1 ? (max(var_9, (arr_5 [i_2] [i_0]))) : ((min(-8687481564458623463, 1)))));
                                var_11 = (((arr_14 [i_0] [1] [i_2] [i_3] [i_4] [i_0] [i_4]) ^ (~20425)));
                                var_12 = (max(var_12, (1 <= 4304)));
                            }
                        }
                    }
                    var_13 ^= (min((arr_11 [i_0] [i_1] [1] [i_2] [i_1]), (arr_10 [i_0] [i_1] [i_2] [i_0])));
                    arr_16 [0] [2] [i_1] = ((((((max(97, 5914291505465098998))) ? ((var_6 ? var_9 : (arr_8 [i_0] [i_1] [i_2]))) : ((5914291505465099000 ? (arr_8 [i_0] [i_1] [i_2]) : 1)))) * var_3));
                }
                var_14 *= ((~(min(2932836341822084869, (arr_11 [i_0] [i_0] [i_0] [i_1] [i_1])))));
                arr_17 [i_1] [i_0] = ((159 ? -899397785 : 200));
                arr_18 [i_0] [i_1] [i_1] = (9374 != 1665053078);
            }
        }
    }
    var_15 = (max(var_15, (max(var_9, (min(50, (1 | var_9)))))));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            {
                var_16 = ((((((arr_19 [i_5 - 1]) && (arr_23 [i_6 + 3])))) < (((arr_22 [i_5] [i_5] [i_6]) ? var_3 : var_0))));
                var_17 |= 51176;
            }
        }
    }
    #pragma endscop
}
