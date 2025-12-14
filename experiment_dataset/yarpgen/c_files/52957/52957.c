/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] |= (((arr_6 [i_0 - 2] [i_0] [i_0 - 2]) * (max((min((arr_7 [10] [i_1] [i_2]), var_16)), ((((-39 + 2147483647) >> (-1 + 13))))))));
                    var_17 = (min(var_17, (((!(((38 ? -1495864434 : -26))))))));
                }
            }
        }
    }
    var_18 = (max(var_16, ((((max(var_10, 38)))))));
    #pragma endscop
}
