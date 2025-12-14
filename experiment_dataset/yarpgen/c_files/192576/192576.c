/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 ^= 65535;
                                arr_13 [i_0] [i_0] [i_0] [15] = (arr_5 [i_0] [i_0] [i_0]);
                                var_12 = ((-(!var_9)));
                                arr_14 [10] [i_1] [i_2] [i_3] = (((((((arr_12 [i_1 + 4] [i_1] [11] [i_2 - 2] [i_4] [i_4] [i_4]) + 2147483647)) << (!var_5))) == (((!(arr_12 [i_1 + 3] [i_1] [i_2] [i_3] [i_4] [i_2 - 1] [i_1]))))));
                            }
                        }
                    }
                }
                var_13 = ((((((arr_3 [i_0]) ? (arr_3 [4]) : (arr_11 [i_0] [i_1] [i_0] [i_1] [i_1])))) == (((((arr_0 [i_0]) == (arr_7 [4] [i_1] [i_1] [i_1 + 1]))) ? var_8 : ((-9546 ? (arr_6 [i_0]) : -9545))))));
                arr_15 [4] = ((4447901062909526028 ? (max(((min(243, 255))), (var_8 + 13998843010800025569))) : (((((var_4 ? -1 : -1))) - (((arr_7 [i_0] [i_0] [i_1] [2]) + (arr_4 [i_0])))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_23 [9] [i_1] [9] [i_6] [i_7] = (arr_8 [i_0] [i_1] [i_1] [i_6] [i_7]);
                                var_14 ^= var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    arr_31 [i_8] [i_9] [i_9] [i_10] = ((1511601427 ? (max(2355632154, 18446744073709551615)) : (((-(((arr_12 [i_8] [0] [i_9] [0] [i_9] [0] [i_10]) ? (arr_19 [i_8]) : -1)))))));
                    arr_32 [i_8] [i_9] [i_10] [i_10] = (((16707551749648951628 ? (arr_7 [i_8] [i_8] [i_8] [i_8]) : (arr_27 [i_8] [i_8]))));
                }
            }
        }
    }
    #pragma endscop
}
