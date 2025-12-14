/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    {
                        var_11 = ((var_3 <= (((((var_4 & (arr_9 [i_0] [i_1 - 1] [i_2] [i_0])))) ? (arr_3 [i_0] [i_0]) : ((((arr_7 [i_0] [i_0] [i_2] [i_3]) ? (arr_4 [i_0] [i_0] [i_0]) : var_7)))))));
                        arr_10 [i_0] [i_1] [i_0 - 2] [i_1] [i_1] [i_3] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                    }
                }
            }
        }
        arr_11 [i_0] = (min(((~(arr_5 [i_0 + 1] [14] [i_0 - 2] [i_0 + 1]))), (((arr_2 [i_0] [12]) ? (arr_5 [i_0] [i_0] [i_0 - 1] [0]) : (arr_2 [i_0] [i_0])))));
        arr_12 [i_0] [8] = (arr_3 [i_0] [i_0]);
    }
    var_12 = ((!((min((!var_5), var_7)))));
    var_13 = var_10;
    var_14 = ((var_8 <= (max(3503202022, var_9))));
    #pragma endscop
}
