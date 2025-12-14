/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += -32759;
    var_12 = var_9;
    var_13 = (((min(50517, 19)) / var_0));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = ((((min(-20, 3668073473140473417))) ? (arr_0 [i_0]) : var_10));
        arr_3 [i_0] = (arr_0 [3]);
        arr_4 [i_0] = 10;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_8 [i_0] [i_1] [i_0] = 11562097560820858612;
            arr_9 [i_0] [i_0] = -3668073473140473409;
            var_15 = (max(var_15, ((((arr_2 [4]) ? (min(1130559959, 2178204204)) : -32429)))));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_13 [i_0] [i_0] = ((((((min(var_6, -17))) - ((max(8, (arr_2 [i_0])))))) > (((arr_12 [i_0]) ? 11608 : (arr_12 [i_0])))));
            var_16 -= 19;
        }
    }
    for (int i_3 = 4; i_3 < 12;i_3 += 1)
    {
        arr_16 [i_3] = (arr_15 [i_3] [i_3 - 3]);
        arr_17 [i_3 + 1] [i_3 + 1] = (((arr_14 [i_3]) & (max((arr_14 [i_3 - 2]), 0))));
        var_17 ^= (min((arr_14 [1]), (32429 % var_10)));
    }
    #pragma endscop
}
