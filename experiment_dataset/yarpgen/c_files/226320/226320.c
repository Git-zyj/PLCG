/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = ((!(((~((26888 ? (arr_5 [19] [i_0] [i_0] [1]) : 1965852650)))))));
                    arr_7 [9] [i_0] = (((((arr_5 [i_0] [i_1] [i_0] [i_2]) ? (arr_6 [i_2] [i_2] [1] [i_0]) : 1965852650))));
                    var_17 = ((!(((+((((arr_6 [i_0] [i_0 - 1] [6] [i_1]) <= (arr_2 [i_0] [i_1 + 1])))))))));
                }
            }
        }
        var_18 -= ((((max(116327434, (((var_6 ? 64 : (arr_3 [0]))))))) ? (9238153966061378023 >= 71) : ((min((arr_6 [8] [i_0] [i_0] [i_0 + 2]), (arr_6 [i_0] [i_0 + 2] [i_0 - 1] [i_0 + 2]))))));
    }
    var_19 ^= (9223372036854775807 ? (~38630) : var_4);
    var_20 = min((26894 > 58623), (min(2942028381, 23698)));
    #pragma endscop
}
