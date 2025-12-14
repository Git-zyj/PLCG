/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((~(arr_1 [i_0])));
        var_21 = (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : 18415));
        var_22 = (((((var_7 * (arr_2 [i_0] [i_0])))) ? var_6 : var_18));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (max(((-3835024117755273497 ? 1 : 1)), (((arr_2 [i_1] [i_1]) ? ((max((arr_5 [i_1] [i_1]), -7031))) : (((var_15 || (arr_1 [i_1]))))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_23 = 12637;
                    var_24 ^= (((arr_4 [i_2 + 2] [i_2 + 2]) + -var_3));
                    var_25 = ((arr_5 [1] [i_3]) <= (arr_2 [i_2] [i_2]));
                    var_26 = (((var_14 & (arr_5 [i_2] [i_2 + 2]))));
                    arr_11 [i_1] [i_2] = ((30721 ? (arr_7 [i_1] [1] [i_3]) : var_2));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_14 [21] = (arr_8 [i_4] [i_4] [i_4]);
        var_27 = (max((((arr_4 [i_4] [i_4]) ? (arr_4 [i_4] [i_4]) : var_8)), ((-110 ? 1 : (arr_4 [i_4] [i_4])))));
    }
    var_28 = (max(var_28, ((max(1, 1)))));
    #pragma endscop
}
