/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((!var_4), (min((((var_8 ? -1672028214 : var_1))), var_7))));
    var_13 = (min((((!(!var_1)))), var_5));
    var_14 ^= (max(var_5, (min((1428324528 + var_6), (max(var_7, var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [4] [i_2] [i_2] [4] = (min((3893808427 && var_2), (max(59887, (-1 + 0)))));
                        var_15 = (max(((((((arr_8 [i_2] [1] [i_2] [1]) ? var_9 : 1428324520))) ? -68 : (((arr_6 [i_2]) ? var_2 : var_3)))), ((((45 ? var_6 : var_10))))));
                    }
                    var_16 = (i_2 % 2 == zero) ? (((1428324520 ? ((((((2147483647 >> (((arr_6 [i_2]) - 3608714317))))) ? (((arr_3 [1] [i_1]) * -11)) : ((min(var_1, var_1)))))) : (((arr_8 [i_2] [i_1 - 2] [i_1 - 4] [i_2]) ? (arr_8 [i_2] [i_1 - 2] [i_1 - 4] [i_2]) : var_9))))) : (((1428324520 ? ((((((2147483647 >> (((((arr_6 [i_2]) - 3608714317)) - 3956649315))))) ? (((arr_3 [1] [i_1]) * -11)) : ((min(var_1, var_1)))))) : (((arr_8 [i_2] [i_1 - 2] [i_1 - 4] [i_2]) ? (arr_8 [i_2] [i_1 - 2] [i_1 - 4] [i_2]) : var_9)))));
                    arr_12 [i_2] = ((!(((~(arr_1 [i_1 + 2] [i_1 + 2]))))));
                }
            }
        }
    }
    #pragma endscop
}
