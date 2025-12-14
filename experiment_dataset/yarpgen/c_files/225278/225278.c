/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = (max(18360159255679006988, ((36882 ^ (min(86584818030544614, 1436009979))))));
                arr_5 [6] &= 199;
                var_11 = ((-((((var_3 ? 129 : 86584818030544614)) - (((var_2 ? 33837 : var_6)))))));
                arr_6 [13] [i_0] [i_1] = (min((23 ^ var_2), ((1497427236 ^ (arr_2 [i_0] [i_0] [14])))));
                var_12 = ((129 ? 145 : (-61 == 31698)));
            }
        }
    }
    var_13 = ((((2969525595 ? var_3 : 129))) ? (min((((0 ? 36894 : var_2))), (max(162889548, 139)))) : var_2);
    var_14 = (min(var_14, (((1418 ^ (min((min(64117, 1)), 0)))))));
    var_15 = max(((var_7 | (((86584818030544633 ? -601475621 : -2))))), (min(var_0, (max(var_4, 601475620)))));
    #pragma endscop
}
