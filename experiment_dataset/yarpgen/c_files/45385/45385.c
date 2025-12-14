/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_1 [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0] [i_0])))) ? ((((arr_1 [i_0]) ? (arr_2 [i_0]) : ((~(arr_0 [i_0] [1])))))) : (arr_1 [i_0])));
        arr_4 [i_0] = ((239 ? (arr_0 [i_0] [i_0 - 1]) : (arr_2 [i_0])));
        arr_5 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_8 [20] [i_1] = -43549;
        arr_9 [i_1] |= (!7455);
        arr_10 [i_1] [i_1] = 1;

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_13 *= ((arr_11 [1] [i_2]) ? (((!(arr_11 [0] [i_2])))) : (((arr_11 [12] [i_2]) ? (arr_11 [16] [i_2]) : (arr_11 [12] [i_2]))));
            arr_13 [i_2] [i_2] [i_2] = 858293790582208072;
        }
    }
    var_14 = (((~123) ? var_6 : (~var_7)));
    #pragma endscop
}
