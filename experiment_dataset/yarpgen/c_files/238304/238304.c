/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_12 += (((!var_10) ? ((((((var_5 ? (arr_4 [i_0] [22]) : var_0))) && (arr_3 [i_0])))) : 2698061347217130));
                arr_8 [i_0] [i_0] = (arr_4 [i_0] [i_0]);
                var_13 = -var_7;
                var_14 = (arr_4 [i_1 + 3] [i_0]);
            }
        }
    }
    var_15 = ((max(var_4, (max(var_2, var_7)))));
    var_16 = var_10;
    var_17 |= var_10;
    #pragma endscop
}
