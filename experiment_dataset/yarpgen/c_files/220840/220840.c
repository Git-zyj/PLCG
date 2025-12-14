/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [1] = (((arr_3 [i_1]) ? (((((max((arr_2 [i_0] [i_0] [i_0]), (arr_0 [8])))) && (~65525)))) : ((((((arr_0 [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_3 [i_0])))) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
                arr_5 [3] = (min(((-(((var_8 + 2147483647) << (((arr_1 [i_0]) - 987397370)))))), (((!((((arr_3 [3]) * var_6))))))));
            }
        }
    }
    var_13 += ((((!var_3) <= var_6)));
    var_14 += (max((min(((min(var_3, var_8))), (min(var_4, var_8)))), (((3918377930 ? 788951472 : 4294967287)))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_2] [i_4] = ((((min((arr_14 [i_2] [i_3] [i_4]), ((min((arr_13 [i_2] [i_2] [i_2] [i_2]), var_2)))))) ? (min((((arr_14 [18] [i_3] [18]) ? (arr_11 [2] [i_3] [i_4]) : var_1)), (arr_14 [i_2] [i_2] [i_2]))) : (arr_14 [i_2] [i_2] [18])));
                    arr_17 [i_3] = (arr_11 [i_2] [18] [i_4]);
                }
            }
        }
    }
    #pragma endscop
}
