/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] = 1;
            var_16 = var_14;
            var_17 = (((arr_1 [i_0 + 1] [i_0 - 1]) ? 1349832522 : 56253));
            var_18 = (max(var_18, (1 != 251)));
        }
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                {
                    arr_13 [i_0] = (((((max(2945134774, var_5)) >> ((2 ? 0 : (-127 - 1))))) >= (((((max(1349832510, 58)) < 66))))));
                    arr_14 [i_2] [i_0] [i_0] = (min(1349832512, (((66 >> ((((var_5 ? 16553 : -893370503)) - 16544)))))));
                    arr_15 [i_0] = (((((var_6 % (arr_0 [9])))) ? (((~-47) - (233 & 1))) : ((((-19332 == 366632723) >= (var_9 + 2))))));
                }
            }
        }
    }
    var_19 = ((!((max(var_4, var_2)))));
    #pragma endscop
}
