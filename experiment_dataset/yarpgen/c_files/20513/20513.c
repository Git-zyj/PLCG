/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_0] = (min(((((((arr_4 [i_0] [i_1]) ^ (arr_6 [i_0])))) ? var_0 : (arr_7 [i_0 + 2] [i_0 - 1] [i_1 + 1] [i_1 + 1]))), 3));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((!(18446744073709551615 ^ 1608454362350520087)));
                }
            }
        }
        var_10 |= (min((!var_1), (arr_1 [i_0])));
        var_11 = (min(var_11, (((~(min(((((arr_4 [i_0] [1]) ^ 1608454362350520087))), ((249884539 ? (arr_8 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0 - 1]))))))))));
        arr_11 [i_0] = ((5631950018105817860 >= (((var_9 ? -1608454362350520111 : (!6))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_12 = -1608454362350520092;
        arr_16 [i_3] = var_6;
        var_13 &= ((~(arr_1 [i_3 + 2])));
        var_14 = (((arr_3 [i_3 + 1]) ? (arr_3 [i_3 + 2]) : (arr_3 [i_3 - 1])));
    }
    var_15 = (max(var_15, var_0));
    #pragma endscop
}
