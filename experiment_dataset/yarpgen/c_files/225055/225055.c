/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] [6] = (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 2]);
                arr_6 [i_0] = (((min(240, var_5))));
                arr_7 [1] [1] |= ((((-29248 ? 15 : (arr_2 [i_0] [i_0] [i_0]))) | (max(var_3, var_13))));
            }
        }
    }
    var_16 = (!4632199889451748313);
    #pragma endscop
}
