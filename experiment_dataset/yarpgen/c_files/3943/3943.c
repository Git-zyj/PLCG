/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max(((3757518635 % (min(10900003267766325528, 2019683766)))), 13942));
        arr_2 [i_0] = ((((min(1, 0))) || ((max(((((arr_1 [i_0] [i_0]) != (arr_0 [i_0] [i_0])))), (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = (((((max((arr_5 [i_1] [i_1]), (arr_3 [i_1]))) * (((arr_5 [0] [i_1]) - (arr_3 [i_1]))))) << (((max((~-5814118216998203192), ((max((arr_4 [i_1]), (arr_5 [i_1] [i_1])))))) - 5814118216998203171))));
        var_18 = (arr_4 [i_1]);
        var_19 = (arr_3 [16]);
        var_20 |= (max((!1907803258), ((((~(arr_3 [14]))) & (max((arr_3 [i_1]), 182))))));
    }
    var_21 = (min(1129, 9));
    #pragma endscop
}
