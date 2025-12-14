/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (15428020607524844302 % 15428020607524844282);
    var_20 = min(var_15, (((!((min(3018723466184707334, 4246523586)))))));
    var_21 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [10] = (~(min(((var_4 ? (arr_1 [i_1]) : 16773120)), (((-(arr_1 [i_0])))))));
                arr_6 [i_0] [i_0] [i_0 - 3] = 15428020607524844282;
                var_22 = max(((((((arr_2 [i_0]) << (2979908354 - 2979908333)))) ? ((var_13 ? var_17 : (arr_2 [i_0]))) : ((((arr_3 [i_1] [4]) ? (arr_3 [15] [15]) : 0))))), ((((arr_1 [i_0]) <= (((arr_2 [0]) ? -4062191298479781025 : (arr_3 [6] [6])))))));
                arr_7 [6] = min(758594448, ((((min((arr_4 [i_0]), 21469))) ? 2979908349 : (((0 ? (arr_4 [12]) : (arr_3 [i_0] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
