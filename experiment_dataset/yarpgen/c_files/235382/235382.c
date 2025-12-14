/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((-var_1 ? 8192 : -var_2));
                    var_15 = (max(var_15, (((var_10 - (((arr_3 [i_1]) - 1055531162664960)))))));
                    var_16 = (min(var_16, 18445688542546886664));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((!(((arr_7 [i_2] [i_1] [i_2] [i_0]) >= (arr_7 [10] [i_1] [i_0] [i_0])))));
                    arr_10 [i_0] [i_0] [1] [i_2] = ((-(arr_1 [i_0])));
                }
            }
        }
    }
    var_17 = ((((!(1739883948 && var_9))) ? var_0 : (min(-var_13, (~var_14)))));
    var_18 = (max(var_13, (~var_9)));
    var_19 = var_1;
    var_20 = 17461669263061208532;
    #pragma endscop
}
