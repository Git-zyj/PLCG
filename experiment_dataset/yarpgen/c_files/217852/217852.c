/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [1] = ((((max(23, (arr_2 [i_0])))) + ((((arr_1 [i_0] [i_0]) == (arr_2 [i_0]))))));
        var_18 = (((arr_1 [i_0] [9]) ? ((var_14 ? 23 : ((23 ? 232 : var_4)))) : ((~(arr_2 [i_0])))));
        var_19 = ((-var_4 ^ (~41)));
        arr_5 [i_0] = ((((((arr_1 [i_0] [i_0]) ? var_5 : (arr_0 [i_0])))) ? ((~(arr_3 [i_0] [i_0]))) : (4593671619917905920 > 20)));
        var_20 = ((!((max((47 * 232), (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = var_8;
        var_21 = (!var_5);
        arr_9 [i_1] = (arr_7 [i_1]);
        arr_10 [i_1] [i_1] = (max(235, var_12));
    }
    var_22 = ((((min((var_16 ^ var_7), ((var_5 ? 6782 : var_7))))) ? ((var_4 ? ((min(var_4, var_9))) : 253)) : var_13));
    var_23 = var_13;

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_13 [i_2] = var_4;
        var_24 = (arr_7 [i_2]);
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_18 [i_3] [i_3] = (arr_7 [4]);
        var_25 = ((var_10 ? (max(-541, ((max(var_17, var_1))))) : ((var_0 / ((4593671619917905920 ? 16776960 : (arr_16 [i_3] [i_3])))))));
        var_26 ^= (min((((arr_3 [i_3] [i_3]) ? var_10 : var_3)), (min((arr_7 [1]), var_0))));
    }
    #pragma endscop
}
