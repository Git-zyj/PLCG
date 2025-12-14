/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((((min(var_7, var_7))) && var_0));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((max((-1265641974 * var_8), (((var_6 || (arr_4 [i_2 - 2] [i_1 + 2])))))))));
                    var_12 = (min(var_12, ((min((((var_5 > (arr_9 [i_2 + 1] [i_2 + 1] [i_1] [i_0])))), (var_4 | -112))))));
                }
            }
        }
        var_13 = (min(var_13, (((var_5 & var_3) ^ (((1604121682 - var_2) + (arr_4 [i_0] [i_0])))))));
        var_14 = (max(var_14, ((min((((arr_4 [i_0] [i_0]) / -30336)), ((min(146, var_1))))))));
        var_15 = (((min((max((arr_1 [i_0]), 1444642077)), ((max(89, (arr_7 [i_0] [i_0] [i_0])))))) * (((arr_5 [i_0]) + (arr_9 [i_0] [i_0] [i_0] [i_0])))));
        var_16 = min(((min(var_0, var_5))), (((7 + var_7) + 5355447125108149391)));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_17 = (((var_6 - (-9223372036854775807 - 1))) + ((((arr_7 [4] [i_3] [i_3]) - (arr_7 [4] [i_3] [i_3])))));
            arr_15 [i_4] [i_4] [i_4] = (max((((((max((arr_8 [i_3]), var_4))) || ((((arr_13 [i_4] [i_4]) | -21388)))))), ((((max(var_1, -1))) & (var_5 + 37066)))));
        }
        arr_16 [i_3] = ((((((arr_0 [i_3]) | var_9))) & ((18446744073709551606 | (arr_0 [i_3])))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = ((((((arr_3 [i_5]) > (((max(var_6, var_7))))))) >> ((((((((arr_19 [i_5] [8]) == (arr_5 [i_5]))))) > (var_3 - 5685581291509880168))))));
        arr_21 [i_5] = (min((max((arr_14 [i_5] [i_5]), (((-6 && (arr_11 [i_5])))))), (((((max((arr_10 [i_5]), (arr_2 [i_5])))) && ((40943 || (arr_12 [i_5]))))))));
    }
    #pragma endscop
}
