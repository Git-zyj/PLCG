/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_17 = (((arr_1 [i_0 + 1] [i_0 + 1]) + (max((arr_1 [i_0 + 1] [i_0 - 1]), (arr_1 [i_0 + 1] [i_0 - 1])))));
        var_18 = (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_19 = (max((((arr_5 [i_1]) ? var_5 : (arr_0 [i_1]))), ((max((((arr_3 [i_1]) << (var_4 + 7148370368860932045))), var_7)))));
        var_20 = (min((max((((arr_2 [i_1 + 1]) ? 17763609235363697695 : 1)), (((var_14 ? (arr_3 [i_1]) : var_2))))), (((((~(arr_2 [i_1])))) ? (((arr_5 [i_1]) ? var_1 : var_12)) : (~var_13)))));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_21 = (((!var_13) << (-3224219200504273979 + 3224219200504273988)));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_22 -= ((((max((((~(arr_11 [i_3] [i_2])))), ((17763609235363697695 & (arr_8 [12] [12])))))) ? ((((arr_7 [0]) ^ var_2))) : (min(((683134838345853918 ? 683134838345853919 : 1)), 2998101108))));
                    var_23 = (((((var_9 || (arr_9 [i_3 + 1] [i_3 - 1])))) << ((((var_2 ^ (((arr_1 [i_4] [i_2]) | var_0)))) - 8791025235642932848))));
                }
            }
        }
    }
    var_24 &= ((max(-var_12, var_9)));
    var_25 = var_1;
    var_26 = (min(((var_1 ? var_9 : ((113 ? var_10 : var_0)))), (((!(var_16 % var_16))))));
    #pragma endscop
}
