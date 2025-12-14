/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = (var_10 > var_16);

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((min(var_10, (!22930835))));
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_19 = 12;
            var_20 = ((~(arr_8 [i_1])));
            arr_10 [i_1] [i_2] [i_2] = (~(max((max((arr_9 [i_2] [i_2] [3]), var_5)), ((((arr_5 [i_1] [i_2]) != (arr_7 [i_1])))))));
            var_21 = ((((~((((arr_0 [9] [i_1]) > 33550336))))) ^ (((((!(arr_7 [1])))) / 244))));
        }
        arr_11 [i_1] [i_1] = ((-((~(arr_5 [i_1] [i_1])))));
    }
    #pragma endscop
}
