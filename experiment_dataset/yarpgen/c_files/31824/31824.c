/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_15 = (max(var_15, (((~(((arr_2 [i_0 - 1] [i_0 + 2]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 3]))))))));
        var_16 = (((((((33 ? 26 : (arr_2 [i_0] [i_0])))) ? 0 : (max((arr_1 [i_0]), (arr_3 [i_0]))))) != ((((arr_1 [i_0 + 2]) ? (((arr_1 [i_0]) ? -74 : var_1)) : ((-35 ? 1882425088 : -64)))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        var_17 = (((2865007692201840572 ? (arr_3 [i_0]) : (arr_1 [i_0 - 1]))));
                        arr_11 [i_0] = (((arr_1 [i_0 + 2]) ? var_13 : (min((max(-284388640, var_10)), (min(var_14, var_3))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_18 = ((arr_13 [i_4]) ? (arr_13 [i_4]) : var_12);
        arr_16 [i_4] = (((arr_14 [i_4] [i_4]) ? -31487 : (arr_12 [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_19 = (min(var_19, var_12));
                    var_20 = (max(var_20, (((960 + (arr_12 [i_5 + 2]))))));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        var_21 = (min(((min(((min(var_12, 102))), (((arr_22 [i_7] [i_7] [i_7] [i_7]) & 1))))), ((2865007692201840576 ? 1882425097 : var_6))));
        var_22 = ((((max((arr_23 [i_7]), (arr_23 [i_7])))) - (min((arr_23 [i_7]), (arr_20 [i_7] [14] [i_7])))));
        var_23 *= 1;
    }
    var_24 = -var_3;
    #pragma endscop
}
