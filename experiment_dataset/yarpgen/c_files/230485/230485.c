/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = -var_3;
    var_14 = (var_6 / ((9082403932147903503 ? ((2229837449913361849 ? 2229837449913361853 : 8115135579152100305)) : (9223372036854759424 / 2147483647))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_15 = (min((((-763468229 + ((-(arr_8 [i_0] [i_0] [i_0] [i_0] [0])))))), 2229837449913361853));
                            arr_9 [i_0 - 1] [i_0 + 1] [i_0] [i_2 + 4] [i_3 + 1] [i_3] = -4095;
                        }
                    }
                }
                arr_10 [i_0] = 4294967295;
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_16 = (((-1793835826 + 2147483647) >> (16601277676388396520 - 16601277676388396503)));
                                var_17 = ((16216906623796189762 ? 1 : (+-763468233)));
                                arr_19 [i_0] [i_0] [i_4] [i_5] = (arr_6 [i_0] [i_0]);
                                arr_20 [i_0] [i_1] [i_1] [i_1] = 4641910508342925935;
                                arr_21 [i_0] [i_0] [i_1] [i_0] [i_5] [i_5] [i_6] = ((((max((max(3222098808, (arr_8 [i_0] [i_0] [2] [i_5] [i_6]))), (4294967290 || 1384081178)))) && ((max((arr_15 [9] [i_5 + 1] [i_5] [i_5 + 1] [8]), 110)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 7;i_8 += 1)
                    {
                        {
                            var_18 = -2147483630;
                            var_19 = (max((2229837449913361853 & 524284), ((((-763468233 + 2147483647) >> (762313860 - 762313844))))));
                            arr_27 [i_0] [i_1] [i_0] [i_0] = ((1 >> (763468233 - 763468207)));
                            var_20 = (max(-524284, 211));
                            arr_28 [i_0] [i_0] [i_0] [i_8] = (arr_0 [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_21 = (((max(-1, (var_10 || 75))) | 700318474));
    #pragma endscop
}
