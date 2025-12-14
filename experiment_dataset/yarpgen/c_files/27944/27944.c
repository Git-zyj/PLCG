/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [6] = ((var_1 << (((((max((arr_3 [10] [i_0] [i_1]), var_10)) << ((((var_10 << (var_1 - 26260))) - 15305694439851163625)))) - 17742518572489375730))));
                var_18 -= var_13;
                var_19 = 3461547422;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_20 = (max((arr_8 [i_3] [i_3 + 1]), -var_13));
                    var_21 = (((((-var_5 + 2147483647) << (((((var_11 + 9223372036854775807) << (((arr_2 [i_2] [i_3]) - 6146359551354069262)))) - 8240429021797822006)))) << 0));
                    arr_12 [i_3] [i_3] [i_3] [i_3] = (((((+(((arr_7 [i_3]) << (var_4 - 18694)))))) ? var_2 : ((((max((arr_3 [i_2] [i_3] [i_2]), (arr_1 [i_3] [i_4])))) ? var_7 : var_12))));
                    var_22 = 43911;

                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        var_23 = ((((-(max(18446744073709551606, (arr_8 [i_3] [i_3 - 3]))))) << ((((-(min((arr_5 [i_2]), 18446744073709551583)))) - 18446744073709543556))));
                        var_24 = (25 * 18446744073709551615);
                    }
                }
            }
        }
    }
    var_25 = -9;
    var_26 = var_15;
    #pragma endscop
}
