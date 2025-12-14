/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, ((min(((min(18446744073709551615, (!var_10)))), -1105452968)))));
                        var_17 &= ((((0 << (8158676606103078985 - 8158676606103078964))) <= (arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3])));
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = ((((~(max((arr_1 [i_0]), var_1)))) / -62));
        arr_12 [i_0] [i_0] = (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_18 = ((-(arr_7 [i_0] [i_0] [i_0] [i_0] [8] [i_0])));
        var_19 -= 55;
    }
    var_20 = var_2;
    var_21 = (~var_15);
    var_22 = var_3;
    var_23 = (1 || 1678);
    #pragma endscop
}
