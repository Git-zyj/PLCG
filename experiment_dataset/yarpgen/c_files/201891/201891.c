/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((-45741645665796565 ? (min((arr_2 [i_0]), -1479901907)) : ((((var_12 / var_5) ? ((((arr_0 [i_0] [i_1]) || (arr_3 [i_0] [i_1])))) : (~1479901907))))));
                var_15 = (((((arr_2 [i_0]) ? 66 : -24171)) - -1479901908));
                arr_5 [i_0] [i_1] = (75 + 1);
                var_16 = var_7;
                arr_6 [i_0] [i_0] [10] = (min((((~(arr_1 [i_0])))), 2345791841));
            }
        }
    }
    var_17 = var_4;
    var_18 = ((var_11 ? ((max(var_12, 711457904)) : (min(536862720, -1855942287)))));
    var_19 = (-(((!((((-66 + 2147483647) >> (6782407461547412363 - 6782407461547412357))))))));
    #pragma endscop
}
