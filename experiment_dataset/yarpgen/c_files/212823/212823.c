/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += min(var_5, 4427);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = (185 ? 127 : 65533);
                    arr_9 [i_2] [i_0] [i_0] [i_0] = (max(((((min(var_5, var_7))) ^ (((191 == (-2147483647 - 1)))))), (min((~var_9), (~164)))));
                    arr_10 [i_0] [i_1] [i_0] = (arr_2 [i_0] [i_2]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_14 = (((((-(arr_4 [i_0])))) ? (((arr_16 [i_0] [i_3] [i_4]) / var_1)) : ((+(max((-2147483647 - 1), 131071))))));
                    arr_18 [i_0] = (+-131084);
                    var_15 = ((var_3 == (min((arr_6 [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_0] [i_0])))));
                    arr_19 [i_0] = (min((arr_13 [i_0]), ((((arr_13 [i_0]) == (-2147483647 - 1))))));
                }
            }
        }
        var_16 &= ((((((min((arr_16 [i_0] [i_0] [i_0]), (arr_15 [i_0] [i_0] [i_0])))) && (arr_16 [i_0] [i_0] [10]))) ? (arr_4 [20]) : (arr_12 [i_0] [i_0] [i_0])));
    }
    for (int i_5 = 2; i_5 < 24;i_5 += 1)
    {
        var_17 -= (max(((((arr_22 [i_5 - 2]) && (arr_22 [i_5 - 2])))), (max((arr_22 [i_5 - 1]), (arr_22 [i_5 - 2])))));
        arr_23 [i_5 - 1] = var_10;
    }
    for (int i_6 = 1; i_6 < 24;i_6 += 1)
    {
        arr_26 [i_6] = ((((min((max(2147483626, 7364604621662288746)), (arr_21 [i_6])))) && 0));
        arr_27 [i_6] = ((-(((!(arr_25 [i_6 + 1]))))));
        var_18 = (max(((min((arr_24 [i_6]), -15315))), ((71 ? 164 : -7364604621662288746))));
    }
    var_19 = ((((var_8 ? var_5 : var_0))));
    #pragma endscop
}
