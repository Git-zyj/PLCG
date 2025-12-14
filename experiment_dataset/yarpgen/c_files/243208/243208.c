/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((min((max(1464355119, 8388607)), ((min(943910507, 102))))), (min((min(var_7, var_15)), ((min(var_0, var_14)))))));
    var_21 += (min(((((min(-943910515, var_17))) ? (((var_6 ? 1 : 32767))) : (max(var_15, var_0)))), ((max((min(var_11, 32768)), ((max(var_14, var_17))))))));
    var_22 = (min(((((max(var_2, 2680828479))) ? ((var_3 ? var_2 : var_15)) : (min(var_7, 562881233944576)))), (min(((var_12 ? var_1 : var_10)), ((min(var_17, var_7)))))));
    var_23 = (max((((((var_4 ? var_4 : var_0))) ? ((var_12 ? var_6 : var_15)) : ((min(var_9, var_10))))), ((min((max(2830612182, var_9)), ((max(1464355118, 2147008564))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_24 = (max((((((2830612177 ? (arr_6 [i_0] [10]) : var_2))) ? ((min((arr_8 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0])))) : ((0 ? 0 : var_4)))), ((max((min(-943910508, var_5)), (((arr_2 [i_0] [i_0]) ? 47 : (arr_8 [9] [i_1] [i_2]))))))));
                    arr_10 [i_0] [i_1 + 2] [i_1] = ((((((((var_17 ? (arr_4 [i_1]) : (arr_3 [i_0] [i_2])))) ? ((var_4 ? var_12 : (arr_8 [5] [i_1] [i_2]))) : (((var_18 ? var_17 : (arr_7 [i_0] [i_2]))))))) ? (min((((var_6 ? var_19 : (arr_9 [i_2])))), ((18446744073709551606 ? var_15 : (arr_8 [13] [i_1] [i_1]))))) : (min((((arr_8 [i_2] [i_1 + 1] [i_2]) ? var_0 : 8388599)), ((max(-27587, var_2)))))));
                    var_25 = ((((min((min(var_0, 153)), ((min((arr_4 [i_0]), (arr_5 [i_0] [i_1] [i_2]))))))) ? ((((max((arr_9 [i_0]), var_10)) ? ((((arr_6 [i_0] [i_1]) ? 943910507 : 0))) : (((arr_7 [i_0] [i_2]) ? 2780149445 : (arr_5 [i_2] [i_1 - 1] [15])))))) : ((((max(var_4, 66))) ? (((var_5 ? 4527007696658194519 : (arr_7 [5] [5])))) : ((153 ? 5799864985134534338 : 10))))));
                }
            }
        }
    }
    #pragma endscop
}
