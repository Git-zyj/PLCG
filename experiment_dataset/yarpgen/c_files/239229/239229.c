/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_0;
    var_19 = ((((((max(var_9, 1))) ? (var_15 << 1) : (max(var_4, var_0)))) <= (((!var_0) ? (1 * var_15) : ((var_3 ? -126 : 5))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (max(var_20, ((((arr_0 [i_0]) && (arr_0 [i_0]))))));
        var_21 = ((!((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_4 [i_0] = ((+(((arr_0 [i_0]) % (arr_1 [i_0])))));
            arr_5 [i_0] = ((arr_0 [i_1]) ? (arr_3 [i_0] [i_0] [i_0]) : (((arr_0 [i_1]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_1]))));
        }
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_9 [i_2] = ((((((max(var_12, (arr_1 [i_2])))) ? ((var_10 ? 61 : 14238494316274143177)) : 60)) == ((((arr_7 [i_2]) ? (arr_7 [i_2]) : (max(57517, (arr_8 [i_2]))))))));
        var_22 = (max(((min((arr_3 [i_2] [i_2] [i_2]), (arr_2 [i_2])))), (13 | 12)));
    }
    #pragma endscop
}
