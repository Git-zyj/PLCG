/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((21930 ? 5106 : 4205115024));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = ((((-3618440289739575271 ? var_1 : (arr_4 [i_1]))) <= (arr_2 [i_1])));
            arr_7 [i_0] [i_0] [i_1] = ((((((arr_0 [i_1]) * (arr_0 [i_0])))) & (max((((-3618440289739575280 ? 40020 : 5844))), (max(var_1, 75))))));
        }
        arr_8 [9] &= 5846;
        var_17 -= (min(255, 214));
        arr_9 [i_0] = ((5106 | ((((arr_1 [i_0]) <= (arr_1 [i_0]))))));
    }
    var_18 = (((59684 | -3618440289739575271) ? (((min(607477392, 240)) ^ (59688 ^ var_11))) : 40020));
    #pragma endscop
}
