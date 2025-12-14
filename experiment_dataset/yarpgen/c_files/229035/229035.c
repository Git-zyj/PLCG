/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] = (((((49 << (1293641871749681073 - 1293641871749681060)))) ? var_4 : ((0 ? 0 : 1))));
                var_11 = (min(-222408874063562622, (((521077633 != 50669) % var_10))));
            }
        }
    }
    var_12 = (((var_8 && (((1 ? -19637 : -1))))) ? (max(var_4, 222408874063562601)) : (((-(var_5 & var_2)))));
    var_13 &= (((((var_4 ? var_0 : (~var_8)))) ^ (max(var_5, (-5653919186332415490 ^ 0)))));
    var_14 = (((var_2 || 222408874063562601) * ((0 ^ (var_3 & 22706)))));
    #pragma endscop
}
