/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((var_0 | (2298861947172118766 / var_10))), ((max((var_0 || var_10), ((var_4 << (var_8 - 63))))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((-var_2 ? ((~((var_13 << (((arr_10 [i_3] [i_2] [i_2] [i_1] [4]) + 138)))))) : (((((21438 ? -2298861947172118766 : 36))) ? -234 : 11537733241859470304))));
                        arr_12 [i_1] [i_1] [4] [4] [i_1] = (arr_2 [2]);
                    }
                }
            }
        }
        arr_13 [i_0] = (max((arr_0 [i_0]), (((-(arr_5 [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_17 [i_4] = (((arr_6 [i_4] [i_4] [0]) <= var_8));
        arr_18 [i_4] = (((arr_14 [i_4]) == (((!(arr_14 [i_4]))))));
    }
    #pragma endscop
}
