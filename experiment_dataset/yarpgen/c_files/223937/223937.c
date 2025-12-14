/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_10 = (arr_4 [1] [i_0] [i_1 + 1]);
                arr_5 [i_1] [i_1] = var_0;
            }
        }
    }
    var_11 = (min(var_2, (((!((min(var_1, 2773489899))))))));

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_12 -= (max((arr_4 [i_2] [i_2] [1]), (((101 ? 157 : (arr_7 [i_2]))))));
        arr_8 [i_2] [i_2] = (((((0 * ((min(var_4, 1)))))) ? 89 : 12119308119987518815));
    }
    #pragma endscop
}
