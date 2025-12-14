/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_3));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (21295 && 644598477);
        var_13 = (min((((arr_3 [i_0]) ? (arr_3 [i_0]) : var_5)), ((((arr_3 [i_0]) >= var_7)))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_14 = (8191 + -8191);
        var_15 = (((max(0, 0)) ? var_5 : ((1 ? (604836806893260533 / 1893424514) : ((-19878 ? 18446744073709551615 : -19878))))));
        var_16 = -1757730316;
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_17 = ((((((((-11963 ? var_1 : var_9))) ? (arr_4 [i_2 + 2]) : ((var_9 ? (arr_9 [i_2] [i_2]) : var_5))))) ? -8192 : (((((min(0, 9223372036854775807))) || 0)))));
        var_18 &= var_4;

        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            arr_12 [i_2] [i_2] = (--0);
            arr_13 [i_2] [i_2] [i_2] = (arr_5 [i_2] [i_3 + 3]);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_24 [i_2] [i_2] [i_2] [10] [i_2] [i_2 + 1] [i_4] &= ((~(((var_1 || (arr_18 [i_3 - 1]))))));
                            arr_25 [i_3] [i_3] [i_6] [i_5] [i_6] = var_0;
                            arr_26 [i_6] [i_3] [12] = (arr_17 [i_2] [i_2 + 2] [i_2 + 1]);
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 13;i_9 += 1)
                {
                    {
                        arr_37 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_7] [i_8] [i_2 - 1] = ((77 <= 21295) >= 2147483647);
                        arr_38 [i_2] [i_7] [i_8] [i_8] [i_9] [i_9] = (1461595822 ? 6395004508138214846 : -4864582377687269370);
                    }
                }
            }
            arr_39 [i_7] = (max((min(var_6, 77)), 8457637085322497509));
            var_19 = (max(var_19, ((max((arr_33 [12] [i_7] [i_7] [1]), ((84 & (arr_33 [0] [i_2] [0] [i_7]))))))));
        }
    }
    #pragma endscop
}
