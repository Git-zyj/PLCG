/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((8256517766441496530 ? -1194 : var_6)) ^ ((min(var_1, var_1)))))) & (min(((var_4 ? 1134399461245476476 : var_13)), var_11))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((156959499 ? 1 : (arr_1 [i_0])))) + (arr_1 [i_0]))));
        arr_3 [i_0] = (max((35 == 1931779420236158262), ((((min((arr_1 [1]), (arr_1 [i_0])))) ? (((min(61, 1194)))) : (arr_0 [i_0])))));
        arr_4 [i_0] [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_8 [0] [0] = (((arr_7 [2]) ? ((((!(arr_1 [i_1]))))) : ((var_3 ? (((min(0, (arr_1 [i_1]))))) : (var_12 * 1172)))));
        arr_9 [12] [12] = (((((65527 ? 116 : (arr_1 [i_1]))))) == ((((9223372036854775807 ? (arr_5 [0]) : (arr_5 [2]))) & (((max(1, 3584)))))));
    }
    var_16 = var_13;
    var_17 = var_4;
    #pragma endscop
}
