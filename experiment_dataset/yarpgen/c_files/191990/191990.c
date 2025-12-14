/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_14, ((min(((~(arr_0 [i_0]))), (~4014361695))))));
        var_15 = (((((((arr_1 [i_0]) == 31744)))) ? ((0 ? 1 : (arr_0 [i_0]))) : (arr_0 [i_0])));
        arr_2 [i_0] = (max((((1 * (arr_0 [i_0])))), var_8));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((((((632716416 ? -5985 : -3010))) ? 4014361695 : (arr_0 [i_1]))))));
        var_17 = (((((36706 ? 0 : (arr_1 [i_1])))) ? (((0 ? -29520 : 652))) : (arr_3 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = (((arr_7 [i_2]) ? -31744 : (arr_5 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_14 [7] [7] [7] [i_4] = ((~(arr_10 [i_3 + 1] [i_3 - 1])));
                    var_18 = (max(var_18, 4100505917));
                    arr_15 [i_2] [i_3 + 1] = (((arr_3 [i_3 + 2]) ? -18930 : 0));
                    var_19 = (((arr_12 [i_2] [i_3 + 2] [i_4]) / (arr_12 [9] [i_3 + 1] [i_4])));
                }
            }
        }
        var_20 = (min(var_20, ((((arr_6 [i_2]) ? ((4100505917 ? 8200629820172452072 : (arr_13 [i_2] [1] [i_2]))) : (arr_5 [i_2]))))));
    }
    var_21 *= (max(((var_12 | (var_1 || 0))), 5));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                var_22 = (max(var_22, (1283611919 % 5057)));
                arr_21 [i_5] [i_6] [i_5] = ((((5048 ? 31744 : (-632716400 % -736984020)))) ? (((((((arr_19 [i_5]) ? var_0 : (-2147483647 - 1)))) ? 1 : ((2019506748 ? 32767 : (arr_18 [i_5] [i_6])))))) : ((-108 ? 280605600 : 121)));
            }
        }
    }
    #pragma endscop
}
