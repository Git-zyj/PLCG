/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((var_10 ? (min(var_1, var_11)) : (((26313 ? var_7 : (((min(var_6, var_5)))))))))));
    var_13 = var_11;
    var_14 = ((-(((max(var_5, var_10)) + 141))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (((!((min(var_11, (min((arr_3 [2] [i_1]), var_4))))))))));
                    var_16 = ((+((((arr_1 [14] [12]) ? var_0 : (arr_1 [i_0] [i_2 + 1]))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (((((6955597905498825034 < (max(6955597905498825010, 1)))))) | (((((arr_1 [i_0] [i_0]) ? var_2 : (arr_2 [0] [5]))) << (((min(14282623843944979203, var_2)) - 805190285)))));
                }
            }
        }
    }
    #pragma endscop
}
