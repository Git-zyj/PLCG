/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_16, (!var_13)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = var_14;
                var_19 = (min(var_19, (((((((((var_8 ? 1463212347 : var_12))) ? (((arr_4 [i_1] [i_0 + 3] [i_0]) ? var_10 : var_10)) : ((min(7, 65528)))))) && ((!(((arr_1 [i_0]) && var_7)))))))));
                arr_5 [i_0 - 1] [i_0] = (max((arr_4 [i_1 - 1] [i_1 + 1] [i_0 + 3]), (arr_4 [i_1 - 1] [i_1 + 1] [i_0 - 3])));
                var_20 |= arr_4 [i_1] [i_0] [i_0];
            }
        }
    }
    var_21 = (var_5 & var_12);
    #pragma endscop
}
