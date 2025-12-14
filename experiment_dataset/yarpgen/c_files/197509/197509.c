/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = (min(var_13, var_5));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (((var_4 == (var_3 && var_12))) ? ((((var_10 ? var_3 : var_8)) | (~var_6))) : (((((((var_1 << (var_11 - 124)))) && ((max(var_11, var_10))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 &= (0 > (min(0, (~0))));
                                var_16 = (max(var_16, (((((min(((var_0 << (var_5 - 1040677292315166540))), ((var_1 ? var_7 : var_10))))) ? ((min(((var_11 ? var_0 : var_10)), (~var_2)))) : (min((min(var_3, var_4)), (~var_8))))))));
                                arr_16 [i_1] [i_0] [i_4] = (((((((var_0 ? var_12 : var_7))) ? ((min(var_9, var_6))) : var_1))) ? (min(((var_8 ? var_8 : var_11)), (((var_5 ? var_12 : var_2))))) : var_9);
                                arr_17 [i_0] = ((~((((~var_2) <= (var_8 >> var_9))))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] [i_0] [i_2] = (((((((var_11 >> (var_3 - 60461)))) ? (var_3 >= var_8) : var_11)) <= var_3));
                }
            }
        }
        arr_19 [i_0] [i_0] = ((((~(~var_0))) >> var_6));
        arr_20 [i_0] = min(((((var_12 / var_2) ? (((var_4 ? var_11 : var_9))) : (var_1 / var_5)))), (((((var_5 ? var_9 : var_3))) ? (var_1 / var_8) : ((11324783634181202310 ? 18446744073709551607 : 629573465)))));
        var_17 = min(((~(var_5 ^ var_12))), var_8);
    }
    var_18 = (min(var_18, (((((var_0 & (var_11 + var_12)))) ? (((var_3 - var_8) | (var_2 | var_0))) : (~var_3)))));
    #pragma endscop
}
