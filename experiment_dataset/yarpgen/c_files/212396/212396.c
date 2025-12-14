/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 16727190468163597823;
    var_11 = ((((-926783035 ? (135230483 == 135230473) : var_2))) ? (var_7 | var_0) : -1905100731);
    var_12 = (min(((((min(135230483, var_7)) > var_1))), (-27 ^ var_2)));
    var_13 = (max((((var_8 ? 809140939 : -1072205306069263152))), ((max((var_0 == var_8), ((1 ? var_0 : -135230469)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((3138570107 ? (arr_1 [i_0]) : 3972350503))) && (((3131218063 ? (arr_1 [i_0]) : 1)))));
                arr_7 [i_0] = (((((var_3 ? (arr_2 [i_1]) : -27720))) ? ((0 ? -64 : (arr_5 [i_0] [i_0]))) : (arr_2 [i_1])));
                arr_8 [i_0] [i_1] [i_1] = ((((min((arr_4 [i_0]), (~-3187)))) || (((+(min((arr_5 [i_0] [i_1]), 14187280857995056087)))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_14 = (min(var_14, ((((((!100) && (!var_7))) ? (arr_5 [i_0] [i_1]) : ((6258493092743522769 ? ((max((arr_2 [i_0]), 1))) : ((3131218063 ? (arr_1 [i_0]) : 37)))))))));
                    var_15 = (min(var_15, 1));
                    var_16 |= ((((((!(arr_4 [i_2]))))) - (min((min(var_6, var_3)), (3 * 112)))));
                }
                var_17 = (arr_2 [i_0]);
            }
        }
    }
    #pragma endscop
}
