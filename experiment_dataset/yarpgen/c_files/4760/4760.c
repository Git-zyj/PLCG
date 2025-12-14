/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(-79, (max(-98, var_5))))) ^ (((var_13 ^ var_3) ? -120 : ((min(var_6, var_8)))))));
    var_19 = max(120, var_0);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (min((((max(32, -1)))), 1));
        arr_3 [i_0] = (((((arr_0 [i_0]) - (arr_1 [i_0]))) >> ((((min(-43, (arr_0 [i_0])))) + 57))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                arr_9 [i_1] [4] [i_2 - 3] = (max(var_11, (min((-59 * 54), ((max(127, -94)))))));
                arr_10 [1] [i_1] [i_1] [i_0] = (((arr_1 [i_2 - 2]) == (arr_1 [i_2 - 1])));
            }
            arr_11 [i_0] = (max((~-31), ((max((arr_7 [i_1] [i_0] [i_0]), 127)))));
            arr_12 [i_0] [i_1] [i_1] = (max((((var_4 - 32) ? (!-64) : (((arr_5 [i_0] [i_0] [i_0]) ? 108 : (arr_5 [i_0] [i_0] [i_0]))))), (min((arr_8 [i_0] [i_1] [i_0]), -58))));
            arr_13 [i_1] = ((((min((min(100, (-127 - 1))), (!var_16)))) <= (arr_0 [i_1])));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_18 [i_0] [i_3] = (((arr_15 [6] [i_3]) * ((max((max(var_7, (arr_6 [i_0]))), var_4)))));
            arr_19 [i_0] = ((((max((arr_16 [i_3]), var_15))) > ((-52 ? -121 : ((min((arr_16 [i_0]), 68)))))));
            arr_20 [i_0] = (max((max(((-45 & (arr_5 [i_0] [i_0] [6]))), ((max(var_9, 49))))), (((((arr_15 [i_0] [i_0]) ? 95 : -125))))));
            arr_21 [9] = (min((((arr_6 [i_3]) ? (-127 - 1) : (arr_6 [i_0]))), ((((((18 < (arr_8 [6] [5] [5])))) > (var_13 || 19))))));
            arr_22 [i_0] = (((arr_17 [i_3] [i_3] [i_0]) ? (max(((var_16 ? -58 : (arr_6 [i_3]))), (((arr_8 [i_0] [i_3] [i_3]) ? (arr_5 [i_0] [i_0] [i_0]) : (-127 - 1))))) : ((((((arr_4 [i_0]) ? var_2 : 75))) ? ((var_6 ? var_0 : var_6)) : ((-93 / (arr_5 [i_0] [i_0] [i_0])))))));
        }
    }
    var_20 = ((((((93 ? var_11 : var_5)) + (var_6 * -79))) <= ((max(var_13, var_13)))));
    #pragma endscop
}
