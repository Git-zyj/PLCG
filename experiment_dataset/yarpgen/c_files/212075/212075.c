/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [12] |= (arr_0 [4] [4]);
        arr_3 [i_0] = ((((var_11 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0 + 1]))) % ((max((arr_0 [i_0] [i_0 + 1]), (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_18 -= (max((arr_1 [20]), -2147483624));
        var_19 -= (-2147483647 - 1);
        arr_7 [i_1] = ((-((((arr_5 [i_1]) ? 996974098 : (arr_1 [14]))))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_20 = ((!(!14)));
            var_21 = (max(var_21, ((max(((max((max((arr_14 [i_3] [i_3] [i_2]), var_0)), (arr_14 [i_2] [i_3] [i_2])))), ((((max(-2147483624, 42512))) ? ((min((arr_4 [i_2]), var_9))) : (((arr_0 [6] [6]) * var_1)))))))));
            var_22 = (((arr_11 [i_2] [i_2] [i_3]) ? ((((((arr_12 [i_2] [i_3] [i_2]) % var_6))) ? ((1 ? 3597826650 : -2147483624)) : (((-(arr_6 [i_2])))))) : (arr_8 [i_2] [i_3])));
        }
        arr_15 [i_2] = (((arr_13 [i_2]) ? var_12 : (min((arr_8 [i_2] [i_2]), (arr_12 [i_2] [i_2] [i_2])))));
    }
    var_23 = ((~(max(20, -2147483615))));
    #pragma endscop
}
