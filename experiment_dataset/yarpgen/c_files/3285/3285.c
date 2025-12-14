/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((var_2 >> (4294967295 - 4294967272)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (arr_8 [i_3] [9]);
                                var_21 = ((~(((2268343085372004966 <= (arr_9 [i_0] [i_1] [i_2] [5] [i_0]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((134 ? (min(((min((-2147483647 - 1), (arr_1 [i_5] [i_0])))), 5)) : (((-(min(111, -1))))))))));
                                var_23 = ((((~((8610498317558012416 ? -46 : (arr_7 [8] [i_1 - 1] [8] [i_5] [i_6] [i_2]))))) ^ (!34)));
                                var_24 = ((((min(-46, 5))) ? 30 : (((arr_18 [i_6] [i_5 + 2] [i_6]) ? (arr_18 [i_0] [i_5] [i_6]) : (arr_18 [i_0] [i_1] [i_6])))));
                                var_25 += (((((((17059939197706191667 ? var_18 : (arr_5 [i_0] [i_0] [i_0] [18]))) + -68))) <= ((0 ? ((((arr_4 [i_0] [i_2] [7]) | 1895026217))) : (arr_7 [i_6] [i_6 - 1] [i_6 + 2] [i_6] [i_6 + 3] [i_1])))));
                                arr_19 [i_6 + 2] [i_6] [6] [i_1] [i_6] [i_0] = (((arr_16 [i_2] [i_5 + 1] [i_6] [i_5]) ^ (min((arr_14 [i_5] [i_2] [i_1 + 1] [i_0]), ((-55 ? (arr_0 [i_1]) : 56))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            {
                arr_25 [i_7] [i_7] [i_8] = var_18;
                var_26 = (min(((56 ? ((min(-1957374339, 0))) : -6067959825779898152)), ((((-413787432 * 536805376) >> (!1))))));
            }
        }
    }
    #pragma endscop
}
