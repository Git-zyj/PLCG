/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_9;
    var_19 = (!var_3);
    var_20 = var_2;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_21 = (arr_2 [i_0]);
        var_22 = (max((min(8766191842964257358, -56)), ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_23 = (((var_1 ? (!4294967295) : (max(1, (arr_0 [i_1] [8]))))));
        var_24 = (min(var_24, ((((min((arr_1 [i_1]), (var_14 % var_3))) >= (((1 ? 3 : 85))))))));
    }
    for (int i_2 = 4; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_25 = ((var_17 - ((~(arr_5 [i_2] [i_2])))));
        var_26 = ((!(((arr_5 [i_2 - 4] [i_2 + 2]) <= var_16))));
    }
    for (int i_3 = 4; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_27 = (arr_8 [i_3 - 4]);
        var_28 = -21035;
        var_29 = (min(var_29, (((((max(72, (((arr_8 [i_3]) ? var_6 : 196))))) ? (var_4 / -56) : (arr_6 [i_3 + 2]))))));
    }
    #pragma endscop
}
