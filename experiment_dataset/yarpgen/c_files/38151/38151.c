/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [7] = var_7;
        var_19 = (((((~(arr_0 [i_0] [i_0])))) ? ((6 ? 0 : 8366167833184092251)) : var_7));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_1] = (max((1 <= 15726985585563871667), ((~((1 ? var_6 : 8785))))));
                    arr_8 [i_1] [i_0] = var_1;
                    arr_9 [i_0] [i_1] [1] = ((2719758488145679949 ? 64378 : var_8));
                    arr_10 [i_0] [i_1] [i_2] = (max(((-(arr_5 [i_0] [i_1]))), (arr_6 [1] [i_1] [i_1] [i_1])));
                }
            }
        }
        arr_11 [i_0] = ((0 ? (arr_5 [i_0] [i_0]) : (max((arr_1 [i_0] [i_0]), (arr_3 [i_0] [i_0])))));
        arr_12 [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_15 [3] = (min((arr_14 [i_3]), ((((arr_4 [i_3] [i_3] [i_3]) ? ((var_5 ? var_4 : 0)) : 15726985585563871636)))));
        var_20 = ((-((var_15 ? (max((arr_3 [i_3] [i_3]), (arr_13 [i_3] [i_3]))) : (arr_6 [i_3] [i_3] [i_3] [i_3])))));
        arr_16 [i_3] = 2719758488145679949;
        arr_17 [i_3] = (arr_13 [i_3] [i_3]);
    }
    #pragma endscop
}
