/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] = (((((((arr_7 [i_0] [i_0] [i_2] [i_0]) | 2891209999)) + (((2891209999 ? 65535 : (arr_5 [i_1] [i_2] [i_3])))))) + (min(var_8, var_12))));
                            var_16 = (max((((1403757296 * 0) % (arr_3 [i_2]))), (((((-(arr_6 [i_0]))) <= (((min(var_15, -1)))))))));
                            arr_14 [i_2] [i_1] = (((min((!5), (~444463284))) >= ((0 ? (arr_8 [i_2] [i_1]) : (arr_8 [i_0] [i_1])))));
                            var_17 = ((~(-1366156860 == var_6)));
                        }
                    }
                }
                var_18 = ((~((-(max(var_14, 444463284))))));
            }
        }
    }
    var_19 = ((((((((1 ? -13 : var_2))) ? 48075 : var_11))) ? ((((27298 ? 9 : 1)) << (((2891210000 % -27298) - 2891209984)))) : 582649507));
    var_20 = ((var_11 * (min((~-10414), (!0)))));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_21 = (min(var_21, (((~(arr_15 [i_4]))))));
        var_22 = (min(var_22, (arr_16 [i_4] [i_4])));
        var_23 = (var_1 && (arr_17 [i_4] [i_4]));
        arr_19 [i_4] = -var_4;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_24 -= var_8;
        var_25 = (var_7 / (min(2891209994, (arr_3 [i_5]))));
    }
    #pragma endscop
}
