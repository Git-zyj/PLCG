/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0 - 1]);
        arr_4 [i_0] [15] = ((!((min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2]))))));
        arr_5 [i_0] = (!33554432);

        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            var_12 = (min(var_12, 3293222693));
            arr_8 [i_1] [i_0] = ((-((min((arr_7 [i_1] [i_1 - 2] [i_1 - 2]), (arr_7 [i_1] [i_1 + 1] [i_1 + 1]))))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_13 = (min(var_13, (((~(((((3293222687 ? 1599726615 : (arr_10 [i_0 + 1])))) ? ((-(arr_1 [i_0]))) : (!3072))))))));
            arr_11 [i_0] [i_2] [i_2] = 1001744608;
            arr_12 [i_0] [i_2] &= arr_1 [i_0 + 2];
        }
        arr_13 [i_0] = (((((2695240681 ? 18310 : 0))) ? (((32463 && (((47225 ? 2981978164 : -7920)))))) : ((min((arr_9 [i_0 + 1] [i_0]), (arr_9 [i_0 + 1] [i_0]))))));
    }
    var_14 = 1675938205;
    var_15 &= ((((max(var_9, 1511355873)) ? var_5 : var_1)));
    var_16 = 2695240666;
    #pragma endscop
}
