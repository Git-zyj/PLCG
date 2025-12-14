/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((var_0 + 2147483647) >> (var_3 - 1207936367)))) ? (var_8 | var_3) : ((((min(18446744073709551612, -87))) ? var_15 : (-467768446 == var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [4] [10] [i_0] = ((((((arr_2 [i_0] [i_0] [i_1]) < ((((arr_4 [i_1]) > var_1)))))) > ((~(arr_2 [i_0] [i_1] [5])))));
                arr_7 [i_0] [i_1] = ((!(((-(!-467768446))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_10 [1] = (min(((min((arr_1 [7]), 1))), (min(2248299624, 18446744073709551590))));
                    arr_11 [6] [6] [i_1] [i_2] = (arr_2 [i_0] [i_1] [i_2]);
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 7;i_3 += 1)
                {
                    arr_14 [i_3] = (arr_0 [i_0]);
                    var_17 = var_3;
                    arr_15 [i_3] = (((arr_9 [i_0] [i_1] [i_3]) ? (arr_5 [i_3] [i_3 + 1] [i_1]) : (18446744073709551612 * 25)));
                }
                arr_16 [0] [i_1] [i_0] = (min((((!((min((arr_1 [i_1]), var_8)))))), ((((arr_8 [6] [i_0]) ? 15982560068895855501 : (arr_4 [7]))))));
            }
        }
    }
    var_18 = var_4;
    #pragma endscop
}
