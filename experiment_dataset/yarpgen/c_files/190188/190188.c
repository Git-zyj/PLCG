/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (8192 >= 7087500690928234182);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (arr_0 [i_0]);
        arr_2 [i_0] |= ((((arr_0 [i_0]) >= (arr_1 [i_0]))));
        var_21 = (min(77, 6633564496944713162));
        var_22 = (~4294967295);
        var_23 = (((!(arr_1 [i_0]))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = (((arr_4 [i_1]) % 6633564496944713152));
        var_24 -= 3125224870110492660;
        var_25 += ((((min(172, 9006649498927104))) ? ((((min(var_6, (arr_1 [i_1])))) ? (((var_9 ? (arr_0 [i_1 + 1]) : (arr_5 [i_1])))) : (max((arr_4 [i_1]), (arr_1 [i_1]))))) : (((((min((arr_5 [i_1]), (arr_4 [i_1 - 2])))) ? (arr_1 [i_1 - 2]) : (arr_1 [i_1 - 2]))))));
    }
    #pragma endscop
}
