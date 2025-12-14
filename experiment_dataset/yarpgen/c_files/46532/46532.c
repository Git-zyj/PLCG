/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_5 == (~-125))) ? ((min(var_17, ((var_1 ? var_9 : var_0))))) : (~var_13));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 ^= (((arr_0 [i_0 + 1]) % (arr_0 [i_0 + 1])));
                    var_22 = ((!((((arr_6 [i_0] [i_0] [i_2 - 2]) - 124)))));
                }
            }
        }
        var_23 = (((((arr_1 [i_0 - 1] [i_0 - 2]) >= var_17)) ? (((arr_3 [i_0] [i_0]) ? -11369 : (arr_3 [i_0] [i_0]))) : (((!(arr_2 [i_0] [i_0 + 1]))))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_24 = (arr_5 [i_3] [i_4] [i_3]);
            var_25 = var_3;
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_26 = (arr_15 [i_6 - 3] [i_5] [i_6 - 1] [i_6 - 3]);
                        arr_18 [i_5] [i_5] [i_6] [i_7] = (arr_7 [i_7]);
                        arr_19 [i_5] = 14592872422441850242;
                        arr_20 [i_3] [i_5] [i_5] [i_5] [i_5] = 21;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_27 = ((max(((1 ? 12074186022275204501 : (arr_1 [i_8] [i_8]))), (((~(arr_7 [i_8])))))));
        var_28 = ((~(max(4, var_11))));
        var_29 = 15202914011934694951;
    }
    #pragma endscop
}
