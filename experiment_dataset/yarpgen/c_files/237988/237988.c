/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (~var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((min(var_14, ((min(var_8, (arr_0 [i_0])))))));
                var_17 = ((!(((-(min((arr_0 [i_0]), (arr_3 [i_0] [i_1] [i_0]))))))));
            }
        }
    }

    for (int i_2 = 4; i_2 < 23;i_2 += 1)
    {
        var_18 = ((var_4 << (min(((var_11 ? 0 : (arr_7 [i_2]))), (((var_4 || (arr_6 [24]))))))));
        arr_8 [i_2] [i_2] = ((~((var_11 ? (arr_6 [i_2 + 2]) : (arr_7 [i_2 + 1])))));
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_19 += var_9;
                        var_20 = ((!((((-(arr_12 [i_2] [i_2])))))));
                        var_21 = (min((arr_9 [i_3 - 3] [i_2] [i_4]), 49));
                        var_22 = var_9;
                        var_23 &= ((((arr_7 [i_2 + 2]) + (arr_10 [i_2] [i_2 + 2] [i_5]))));
                    }
                }
            }
        }
        arr_17 [i_2] [i_2] = (min(20206, ((((min(205, 193))) << (var_8 - 53333)))));
    }

    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_24 ^= (min((((max((arr_13 [i_6] [i_6] [i_6]), (arr_18 [i_6] [i_6]))) ^ (arr_19 [i_6]))), (arr_9 [22] [22] [i_6])));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        arr_27 [3] [i_9] = var_1;
                        var_25 = (min(var_25, ((((arr_21 [i_8 + 2] [i_7]) + (min((arr_26 [i_6] [i_7] [i_8] [7] [i_9]), ((6023680723654942785 & (arr_15 [i_6] [i_6]))))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
