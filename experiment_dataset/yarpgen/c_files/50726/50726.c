/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 4186112;
    var_17 = (min(var_17, ((max(((((min(3212391636757994260, var_15))) ? ((27355 ? 38180 : 38182)) : (~var_10))), var_9)))));
    var_18 = var_10;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (!-9223372036854775807);
        arr_3 [i_0] [i_0] = (max(4323455642275676160, (((-268330649612656291 >= (var_3 + 38169))))));
        arr_4 [i_0] [i_0] = (min((max((arr_1 [i_0] [i_0]), (((arr_1 [i_0] [i_0]) ? var_11 : (arr_0 [i_0]))))), ((~(arr_0 [i_0])))));
        arr_5 [i_0] |= ((~(min(((35184372088831 ? 12 : 5)), ((2147483646 ? (arr_1 [9] [i_0]) : var_7))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] = (((((arr_7 [i_1]) / ((((var_10 != (arr_6 [0]))))))) == (arr_6 [i_1])));
        var_19 &= min(((((((arr_6 [i_1]) ? (arr_6 [i_1]) : 9223372036854775806))) ? (((arr_6 [i_1]) ? 35184372088824 : (arr_6 [i_1]))) : -var_7)), (min(((var_6 ? var_15 : 8428622210724718008)), (arr_7 [i_1]))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                {
                    arr_16 [i_3] = 6;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((((max((max((arr_14 [i_1] [i_2] [i_4] [i_5]), (arr_13 [i_1] [i_2] [i_3 + 1] [i_4]))), (min((arr_20 [i_1] [i_2] [i_2]), (arr_7 [i_1])))))) ? 3584 : ((((!(arr_19 [i_1]))))))))));
                                arr_22 [i_1] [i_3] [i_3] [i_5] = ((((((9294 ? -1 : 400965453789481320)))) ? ((((max(6307508657208616241, (arr_9 [i_1] [i_2])))))) : (min((((arr_6 [i_1]) ? (arr_12 [i_5] [i_3] [i_3] [i_1]) : 3391422991639604283)), (arr_18 [i_5 + 1] [i_5 + 1] [i_3 - 1] [i_2])))));
                            }
                        }
                    }
                    arr_23 [i_2] [i_1] [i_3] = ((((((arr_20 [i_3 + 1] [i_3 - 1] [i_3 - 1]) ? (arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1]) : (arr_20 [i_3 + 1] [i_3 - 1] [i_3 - 1])))) ? (((!(((3584 ? (arr_13 [i_3 - 1] [i_2] [i_1] [i_1]) : var_13)))))) : ((max((arr_12 [i_3] [i_3 - 1] [i_3] [i_3 + 1]), (!3564319375751209305))))));
                }
            }
        }
    }
    #pragma endscop
}
