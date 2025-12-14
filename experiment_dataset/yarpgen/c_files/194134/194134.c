/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((var_3 + ((min(var_5, var_3)))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_11 |= (((var_8 ? var_5 : var_0)) == var_0);
            arr_6 [7] [9] [i_0] = (((var_1 << var_8) && var_4));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [11] [i_0] = ((((min(var_0, (~1)))) <= (min((min(var_6, var_1)), ((((var_3 + 2147483647) << (((var_2 + 31919) - 7)))))))));
            arr_10 [i_0] = (min(((min(((var_3 ? var_6 : var_2)), ((min(var_5, var_3)))))), var_1));
        }
        var_12 ^= (min((((min(134081180695174294, 1)) | ((min(var_1, var_0))))), (((65535 == ((-21904 ? var_5 : 1763411838)))))));
    }
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        arr_13 [i_3 - 1] = ((~(min(((var_8 ? var_7 : var_0)), ((min(var_7, var_4)))))));
        var_13 = (min(var_13, ((((min((min(1, 0), (0 != 2032705615)))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                {
                    arr_19 [15] [i_5] [21] [1] = var_5;
                    var_14 = var_9;
                }
            }
        }
        var_15 = (min(((min(var_2, ((var_6 ? var_0 : var_7))))), ((var_4 ? var_1 : (min(var_6, var_1))))));
        arr_20 [i_3] [i_3] = (min((!var_1), (min(((min(var_3, var_4))), ((var_4 ? var_0 : var_1))))));
    }
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        var_16 = (min((!var_4), var_8));
        var_17 = (((min((min(var_7, var_7)), (min(var_3, var_9))))) ? (min(((min(var_4, var_8))), -var_1)) : (((-((min(var_7, var_2)))))));
        var_18 ^= ((+(min((var_4 && 2203493164), var_1))));
    }
    #pragma endscop
}
