/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = (max(var_20, 8));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_10 [18] = (((((!(var_15 || 6344497936968188154)))) * (((arr_9 [i_2 - 3] [i_2 + 2]) >> (arr_9 [i_2] [i_2 + 1])))));
                        var_21 = (((arr_8 [i_0] [i_2 - 3] [i_2 + 2] [i_0] [i_0] [i_3]) << ((((+((2627236707 << (((arr_6 [i_0]) - 508636447145031128)))))) - 1610612729))));
                    }
                }
            }
        }
        arr_11 [i_0] = ((((((var_17 <= (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? ((var_6 ? var_10 : var_5)) : var_7))) % var_11);
        arr_12 [i_0] [i_0] = ((((!(var_2 || var_5))) ? (arr_9 [i_0] [i_0]) : -522607081));
        arr_13 [i_0] [i_0] = ((((((arr_6 [i_0]) & (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : ((-(((var_11 < (arr_0 [19]))))))));
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_18 [1] &= ((!(arr_9 [i_4] [i_4])));
        var_22 = (((((~(arr_15 [2])))) > (arr_17 [i_4])));
    }
    var_23 ^= ((~(((((var_2 ? var_10 : var_16))) ? (var_16 | var_11) : (~var_11)))));
    var_24 += (8 || 17709);
    #pragma endscop
}
