/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;
    var_15 = ((!(!var_2)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [6] = ((var_8 + (((((-9 ? var_6 : var_2))) ? (max(var_8, 965317430)) : 1))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] = ((var_12 ? (((!3075326519) ? var_1 : (arr_5 [i_0] [i_1] [i_2]))) : ((var_13 ? (arr_3 [i_2]) : var_0))));
                    arr_8 [i_0] [i_2] = (arr_0 [i_0]);
                    var_16 = (((((((0 ? var_7 : (arr_1 [2]))) / var_12))) ? 7221475319853392920 : (arr_3 [i_0])));
                }
            }
        }
        var_17 = (min((((!(!var_7)))), -7221475319853392915));
        var_18 = 4119436586833365068;
    }
    #pragma endscop
}
