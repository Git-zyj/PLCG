/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = (min(var_10, (6 / 249)));
    var_20 = (~var_2);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((((~530876643) == ((((arr_3 [i_0 + 2] [i_0 + 1] [i_0 + 1]) ? (((arr_3 [i_0] [i_1] [i_1]) / 22)) : (arr_0 [i_1] [i_0])))))))));
                arr_4 [i_0] [i_0] = ((~((3 >> (62 - 48)))));
                var_22 -= ((((arr_1 [i_1]) ? (2076255135 - 2757463000) : (6 * 29518))) << (((arr_0 [i_1] [i_1]) + 1644611053)));
            }
        }
    }
    #pragma endscop
}
