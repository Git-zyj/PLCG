/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        var_13 = (((max(((((arr_1 [i_0]) ? (arr_5 [i_2] [i_1] [i_0]) : 1))), (arr_8 [i_1 + 1] [i_2 - 1] [i_2] [i_3 + 1]))) ^ (((~(max(0, -1190320686)))))));
                        var_14 = (~(arr_6 [i_1] [i_2 + 3]));
                        var_15 = arr_0 [i_2];
                        var_16 -= -1190320686;
                    }
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        arr_12 [i_4] [i_4] [i_4] [i_1] = (min((((arr_6 [i_1] [i_1]) ^ 0)), (((arr_6 [i_1] [i_2 - 2]) ^ 646129434))));
                        var_17 = (max(125, (((arr_3 [i_0] [i_0]) ? (arr_0 [i_1]) : (((arr_4 [i_0] [i_0]) % (arr_7 [i_1] [i_4])))))));
                    }
                    arr_13 [i_1] [i_1] = (((((2080374784 & ((~(arr_8 [i_2] [i_1] [i_1] [i_0])))))) ? -64 : var_9));
                }
            }
        }
    }
    var_18 = (max(var_18, (((((min(15, (10973365957145724555 | var_5)))) ? (min((var_3 ^ 1973406628), (~var_11))) : (--0))))));
    var_19 = (max(var_19, 469414423));
    #pragma endscop
}
