/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((+(min((var_0 % var_9), ((var_5 ? var_0 : var_10))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (~(((((max((arr_3 [15]), (arr_1 [i_0] [i_0])))) || 536870400))));
        arr_4 [7] = (max(var_0, ((-(((arr_1 [i_0] [i_0]) ? 4211660765 : var_9))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((!((((!-4957268965434548795) ? ((var_2 ? 4211660747 : (arr_5 [1]))) : var_6)))));
        var_16 = var_8;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_17 &= ((var_0 & ((3584 ? (arr_6 [i_1]) : var_12))));
                    var_18 = (min(var_18, (min(9007061815787520, (-32767 - 1)))));
                }
            }
        }
        arr_13 [i_1] = (83306533 - var_11);
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_19 = (max(var_19, ((((~-76) << ((((max(var_7, var_0))) - 591471773)))))));
                    var_20 += (arr_15 [i_4 + 2]);
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 22;i_6 += 1)
    {
        var_21 = max((((((-2147483647 - 1) ? (arr_19 [i_6]) : 22400326)) >= (var_5 < var_2))), var_4);
        var_22 = ((-((var_5 / (arr_19 [i_6 - 2])))));
    }
    for (int i_7 = 2; i_7 < 23;i_7 += 1)
    {
        var_23 = (((max((max(var_13, 83306545)), ((((arr_19 [i_7 - 2]) > (arr_18 [i_7])))))) != -13));
        var_24 = -var_7;
        var_25 = ((var_7 ? ((-(max(var_1, var_0)))) : ((((min(63, (arr_21 [i_7 + 1] [i_7 + 1])))) ? (arr_20 [i_7 - 2] [i_7]) : (((arr_19 [i_7 - 1]) ^ 21595))))));
    }
    var_26 = 19;
    #pragma endscop
}
