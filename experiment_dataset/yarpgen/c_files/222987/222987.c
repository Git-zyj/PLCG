/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] = arr_3 [i_0] [i_0];
                    var_13 &= 51969;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                arr_15 [10] [i_3] &= 58183;
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_26 [i_7] [i_5] [i_5 - 1] = ((19341 >= (!19350)));
                                var_14 = (((((63142 ? (arr_21 [i_5] [i_5]) : (arr_21 [i_5] [i_5])))) ? 5879 : (((var_2 > (((arr_19 [i_3] [i_5] [i_7]) - 57661)))))));
                                arr_27 [i_3] [23] [i_3] [i_3] [i_5] = 2381;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
