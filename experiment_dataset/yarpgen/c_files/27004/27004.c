/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (min(var_17, (max((min((arr_0 [i_0] [i_0]), 27134)), (max(2147483647, 1))))));
        var_18 = (min(var_18, ((max(((~(arr_0 [i_0] [i_0]))), (min((arr_0 [i_0] [i_0]), (((arr_0 [i_0] [i_0]) + 201326592)))))))));
        var_19 = var_10;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_20 = ((((((arr_2 [i_1] [i_1]) ? ((var_16 ? -2147483632 : 1)) : (arr_3 [i_1])))) ? -var_7 : 806124727));
        arr_4 [i_1] [i_1] = (((var_2 % (arr_1 [i_1]))));
        var_21 = (((arr_1 [i_1]) >= (!-18)));
        var_22 ^= 1;
        arr_5 [i_1] = (((var_6 ? (arr_3 [i_1]) : (((arr_1 [i_1]) ? 423954572 : (arr_1 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_23 = ((var_5 ? (var_3 <= 86) : -21));
        arr_9 [1] [i_2] = (max(4, 1));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_24 += ((((((((var_16 ? (arr_7 [i_4] [i_3]) : var_7))) ? ((min(var_9, (arr_14 [i_3] [i_4] [i_5] [i_3])))) : var_5))) ? ((-2147483645 ? 9223372036854775807 : -2147483637)) : -1607606533));
                                arr_24 [i_2] [i_6] [i_2] [i_2] [i_2] = ((((!(arr_8 [i_3])))));
                            }
                        }
                    }
                    var_25 = (max((arr_15 [i_4] [i_4] [i_4] [i_2]), (max((arr_10 [i_4]), (arr_10 [i_2])))));
                    var_26 = (max(var_26, (var_7 | 2147483617)));
                    arr_25 [i_2] [i_2] [i_2] [i_2] = (((arr_19 [i_3] [i_2]) ? (min(2147483644, -7310)) : var_6));
                }
            }
        }
    }
    var_27 = (min(var_15, ((23826 ? var_12 : 1985845923))));
    #pragma endscop
}
