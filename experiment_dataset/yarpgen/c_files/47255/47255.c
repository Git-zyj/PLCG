/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 += (arr_5 [5]);
                                arr_13 [i_0] [i_1] [i_1] [i_3] = var_9;
                            }
                        }
                    }
                    var_13 = (((((-(arr_7 [i_0])))) - (((arr_7 [i_0]) - (arr_6 [i_0])))));
                }
            }
        }
    }
    var_14 = ((-1 ? (min(var_4, ((4531 ? 704 : 65535)))) : var_2));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_15 = ((-((var_10 ? (arr_15 [i_5]) : 16985))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_23 [i_5] [i_5] [i_5] [i_5] = ((-(min(12414, (max(var_9, var_10))))));
                            arr_24 [i_5] [i_5] [i_5] [i_5] = (min(((min(-16986, -105))), (max((arr_19 [i_5] [i_6] [i_7]), (arr_19 [i_5] [5] [i_5])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            {
                arr_31 [i_9] [i_10] [i_9] = var_1;
                var_16 *= ((!((((((189 ? 8 : 196))) ? -449545535 : -3)))));
            }
        }
    }
    var_17 = 12949648987981962957;
    #pragma endscop
}
