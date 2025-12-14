/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_0] [i_3] = min(var_5, (max(var_9, (~var_5))));
                            arr_9 [i_0] [0] [i_2] [i_1] [i_1] &= var_3;
                            var_14 = (max(var_14, (((((min((arr_1 [8] [i_3]), (arr_4 [i_0] [i_1] [11])))) ? ((var_8 & (arr_4 [i_0] [i_1] [i_3]))) : (((((arr_1 [i_0] [i_1]) > (arr_4 [i_0] [i_1 + 1] [i_2]))))))))));
                            arr_10 [i_0] [i_0] [i_1] [i_0] [i_3] = (max((max(4611686018427387903, (arr_4 [i_0] [i_1 - 4] [i_1 + 3]))), (max((arr_4 [i_0] [i_1 - 4] [i_1 - 3]), (arr_4 [i_1] [i_1 + 4] [i_1 + 3])))));
                            arr_11 [i_3] [i_0] [i_0] [i_0] = (((((~4255555042) ? ((min(-348846063, (-9223372036854775807 - 1)))) : var_12)) & -496720734));
                        }
                    }
                }
                arr_12 [i_0] [i_1 + 4] = (-(!var_11));
            }
        }
    }
    var_15 = var_1;
    var_16 = var_0;

    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        arr_15 [i_4] = var_9;
        var_17 = var_6;
    }
    #pragma endscop
}
