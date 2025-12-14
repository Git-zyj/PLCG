/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (min((min((arr_5 [i_0] [i_1] [i_0 - 1]), (arr_5 [i_0] [8] [i_0 + 3]))), (min((arr_5 [8] [i_1] [i_0 + 3]), -3096755069149389689))));
                arr_7 [i_0] [i_1] = (min((min(((var_2 >> (5989 - 5934))), (!10))), 5989));
            }
        }
    }
    var_15 = min(((var_0 ? (((15641 ? var_7 : -5615290459115497505))) : ((-27981 ? 32767 : 5398109116639788631)))), ((((min(var_10, var_13)) & (!5615290459115497504)))));
    var_16 = var_2;
    #pragma endscop
}
