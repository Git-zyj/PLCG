/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (var_13 >= var_5);
                var_15 = 0;
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_9 [i_2] = (((((~(arr_8 [i_2] [i_2])))) ? (arr_6 [i_2] [i_2]) : ((((-1850185487 == (-23 / var_10)))))));
        var_16 = ((!((1488001937 == (arr_7 [1])))));
        arr_10 [i_2] = ((var_1 ? (max((arr_6 [i_2] [i_2]), (arr_6 [i_2] [16]))) : 199));
        var_17 = (min(var_17, ((((var_9 ? (((arr_6 [i_2] [i_2]) / -11709)) : (max(0, (arr_6 [3] [i_2])))))))));
        var_18 = var_11;
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_13 [5] = (((arr_12 [i_3]) ? ((var_3 ? (arr_8 [10] [i_3]) : 43539)) : 120));
        arr_14 [i_3] = ((254 == ((var_12 ? -14548 : var_5))));
        arr_15 [i_3] = ((((((arr_6 [i_3] [i_3]) ? (arr_6 [i_3] [i_3]) : 1))) ? (min((arr_12 [i_3]), (arr_12 [i_3]))) : var_13));
        arr_16 [i_3] = 20;
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            {
                var_19 &= max(var_8, (min(((-2992614483581251576 ? (arr_17 [i_5]) : var_12)), 13627254703810281058)));
                arr_21 [22] [22] [i_4 + 4] = 220;
                arr_22 [i_4] [5] = (arr_20 [i_4 - 1]);
            }
        }
    }
    #pragma endscop
}
