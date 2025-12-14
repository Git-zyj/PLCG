/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = ((~((~(~23)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_1] [i_1] [i_3] [i_4] [i_0] [2] = -var_6;
                                var_14 *= ((-(arr_8 [i_0] [i_1] [12] [i_3])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_15 = (max(var_15, ((~(((!(((~(arr_2 [i_5])))))))))));
                arr_19 [8] [i_6] [i_5] |= -var_3;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    arr_27 [i_7] = ((!((!((!(arr_2 [i_7])))))));
                    var_16 = ((-((~(arr_12 [18] [18])))));
                }
            }
        }
    }
    var_17 = ((((!(~var_12)))));
    #pragma endscop
}
