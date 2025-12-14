/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_8, var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = (((((~(arr_5 [i_1] [1] [i_1])))) ? (-2147483647 - 1) : (min((((-2147483647 - 1) ? 0 : 4294967289)), (arr_5 [i_0] [i_0] [i_0])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_12 [i_3] = ((!(((1998 ? var_8 : var_8)))));
                            var_14 &= (arr_3 [i_0] [i_0] [i_0]);
                            var_15 = ((1344741521 ? -8048716553578793365 : 8048716553578793345));
                        }
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            var_16 += arr_11 [i_5] [i_5 + 1] [i_5 + 2] [i_5] [i_5 + 2];
                            var_17 = (((((arr_14 [i_3]) ? (arr_8 [3] [3]) : 5422199647180777698)) >= var_6));
                            var_18 ^= (arr_2 [i_5 + 2]);
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_19 = (max(var_19, (arr_17 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0])));
                            arr_19 [i_0] [i_3] = ((~(arr_1 [i_6])));
                            arr_20 [i_3] [i_1] [i_3] = (954588895 != 2147483647);
                        }
                        var_20 = (-5097334545839023891 ? 87 : (arr_7 [i_3] [i_3]));
                    }

                    for (int i_7 = 3; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [i_0] [4] [i_7] = (((~(arr_4 [i_7] [i_2] [i_0]))) <= 45866);
                        var_21 ^= ((var_11 | (!168)));
                        arr_25 [i_0] [12] [i_0] [i_0] [i_0] = ((((((max((arr_11 [4] [i_1] [4] [i_7 - 1] [i_7]), 4294967278))) ? 1311901985 : (max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_16 [i_0] [i_7]))))) != ((max(-4294967278, (((arr_18 [i_2]) % 3685059630)))))));
                        var_22 = ((228 ? -var_3 : ((-(((arr_1 [i_2]) ? var_2 : (arr_22 [14] [i_1])))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        var_23 -= (((-9 ? -1 : 5097334545839023873)));
                        arr_28 [i_0] [i_1] [i_0] [i_2] [i_8] [i_8] = (arr_6 [i_0] [i_1]);
                        var_24 += ((-(arr_27 [i_0] [i_8] [i_8] [i_0])));
                        var_25 = (arr_18 [i_8]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
