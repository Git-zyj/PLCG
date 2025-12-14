/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((~((var_3 ? var_3 : var_0)))), (1940017058 == 8906748644281106681)));
    var_17 = 25;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (((((((min(var_6, 4294967270))) ? (((arr_3 [i_0]) ? (arr_0 [3]) : (arr_0 [i_0]))) : (arr_2 [i_0] [i_0])))) ? (arr_0 [i_0]) : var_8));
                arr_6 [i_0] = ((-2354950238 ? -83 : (((!var_2) ? (3 >= 59) : ((((arr_5 [i_0] [i_0] [i_1]) >= var_6)))))));
                arr_7 [i_0] [1] = (arr_5 [i_0] [i_1] [i_0]);
                arr_8 [i_0] [i_1 - 2] [i_1] = (arr_0 [4]);
            }
        }
    }
    #pragma endscop
}
