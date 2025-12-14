/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_0 + 1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] = -2161662447;

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1 - 3] [i_2] [i_0] = 3697708039;
                        var_19 *= ((~(max(((17881903491828008423 ? 2133304849 : var_5)), ((min((arr_5 [i_1 - 3] [i_2] [i_3]), (arr_8 [i_0] [i_1] [8] [i_3 - 2]))))))));
                        var_20 = ((var_1 ? (((var_2 > 2161662463) ? (!2133304855) : (min(87, var_16)))) : (((((1068 << (1068 - 1061)))) ? ((202 ? var_0 : 2133304848)) : (~191)))));
                    }
                }
            }
        }
    }
    var_21 = 1203895789;
    #pragma endscop
}
