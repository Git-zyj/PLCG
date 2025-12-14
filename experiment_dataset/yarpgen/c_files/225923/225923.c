/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = ((~((3924103678 ? (arr_0 [i_0]) : 124))));
        var_20 = ((!((var_11 || (arr_3 [i_0] [i_0])))));
        arr_4 [i_0] = (((arr_2 [i_0]) || ((!(arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_21 = ((~3924103678) ^ ((~(arr_6 [10]))));
        arr_7 [i_1] = (((arr_5 [i_1]) < (arr_5 [i_1])));
        var_22 -= (((55 | 255) & (~var_7)));
        arr_8 [i_1] = (((arr_6 [i_1]) > ((~(arr_6 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_23 = ((var_6 ^ var_10) ? ((-(((arr_6 [i_2]) - var_14)))) : -var_1);
        var_24 *= ((var_5 <= (((!(((-26268 ? var_15 : (arr_10 [i_2])))))))));
        var_25 = arr_10 [i_2];
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                var_26 = (min(var_26, (((2645257921 ? ((-(23363 > 1348))) : ((max((2235182236 || 219), 255))))))));
                var_27 = (max(var_27, ((((((2235182236 ? (arr_9 [i_3] [i_3]) : 4294967295))) ? ((max(-18013, 0))) : 232)))));
            }
        }
    }
    #pragma endscop
}
