/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((1 & var_9) >> (0 + 1)));
        var_18 = (min(var_18, (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_1] = ((var_12 ? ((((arr_1 [i_0] [i_1]) ? (arr_2 [1] [i_1]) : (arr_0 [i_0])))) : ((0 ? 4100921367 : 2034165993188647374))));
            arr_7 [i_0] [i_1] [i_0] = (~237);
        }
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_11 [i_2] [17] = (arr_8 [i_2]);
        arr_12 [i_2] = 61664;
        arr_13 [i_2] = (min((!4100921367), 39824));
        var_19 = -14;
        arr_14 [i_2] = (((((!(arr_10 [i_2])))) - (((!(arr_8 [i_2]))))));
    }
    var_20 = var_7;
    var_21 = (min(var_13, (max(var_13, (240 + 16)))));
    #pragma endscop
}
