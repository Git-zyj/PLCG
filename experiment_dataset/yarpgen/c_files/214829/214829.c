/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        var_15 += (max(((max(((~(arr_1 [i_1]))), (arr_9 [i_0 + 2] [i_0 + 2] [i_2] [i_0 + 2])))), ((((max(var_11, (arr_4 [i_0 - 1])))) ? (min((arr_4 [i_0]), (arr_3 [i_3 - 1]))) : (((arr_5 [13]) ? -1903424259560114745 : (arr_12 [15] [i_1] [i_1] [i_0] [i_0])))))));
                        var_16 ^= (min(5774539518092611396, var_11));
                        arr_13 [i_0] [5] [i_2] [i_3] = var_4;
                    }
                }
            }
        }
        var_17 = ((!((((((var_2 * (arr_3 [i_0])))) ? var_11 : (((arr_2 [i_0]) - var_6)))))));
        var_18 += (arr_7 [i_0 + 3] [i_0 - 3] [i_0 + 2]);
    }
    for (int i_4 = 3; i_4 < 23;i_4 += 1)
    {
        var_19 = (max((1255483719 || 1), (arr_15 [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_20 ^= ((((((511 || (arr_14 [i_6] [i_6]))) && ((max((arr_20 [i_6] [18] [i_6]), var_1))))) || (((var_11 ? (arr_17 [i_4 + 1] [i_4 - 2] [i_4 - 3]) : var_1)))));
                    var_21 = (min(var_21, 5774539518092611396));
                }
            }
        }
    }
    var_22 = ((((max(var_3, var_7))) ? var_3 : var_12));
    var_23 = (var_7 % var_14);
    var_24 = (var_12 ? 1 : var_2);
    var_25 = -var_2;
    #pragma endscop
}
