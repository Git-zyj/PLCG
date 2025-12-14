/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] = (35184372088831 ? (arr_2 [i_0]) : ((((var_6 && ((max(var_5, (arr_8 [1] [i_0] [1] [i_2])))))))));
                    arr_10 [i_2] = (!((((var_11 ? 1 : -1)) == ((max(var_1, var_6))))));
                    arr_11 [i_2] [i_2] [i_2] = (((~17171617006046439535) ? (((((17171617006046439535 ? 0 : var_10))) ? var_3 : ((((arr_4 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [16] [i_0]) : var_4))))) : (((min(var_4, var_0))))));
                    var_15 = (max((arr_5 [5] [i_1] [1] [5]), ((~(arr_4 [i_0] [i_1] [i_2])))));
                }
            }
        }
    }
    var_16 = var_0;
    var_17 = (~var_10);
    var_18 = (var_6 ? (var_5 / var_3) : -5082888235864203811);
    #pragma endscop
}
