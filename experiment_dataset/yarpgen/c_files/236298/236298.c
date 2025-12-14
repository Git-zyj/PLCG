/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((!1), var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = min((!98), ((var_19 >> ((((var_2 ? 2222347601 : (arr_0 [1]))) - 2222347593)))));
                arr_6 [i_0] [i_1] = (((arr_3 [i_1 - 3] [i_1 + 1]) ? ((-var_16 ? 19425 : -var_17)) : (arr_2 [i_0])));
                var_21 |= (~var_19);
            }
        }
    }

    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        var_22 = ((((!(((var_13 ? (arr_7 [i_2 - 1]) : (arr_7 [9]))))))) ^ (((arr_8 [i_2 - 1] [i_2 - 1]) ? (arr_8 [i_2] [i_2 + 1]) : (arr_8 [i_2] [i_2 - 1]))));
        var_23 = var_7;
        arr_9 [i_2] = 1;
        arr_10 [i_2 - 1] [10] &= -926993545786515587;
        arr_11 [i_2] = ((-(arr_7 [i_2 - 1])));
    }
    #pragma endscop
}
