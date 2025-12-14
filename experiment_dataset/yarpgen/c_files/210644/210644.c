/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;

    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_18 -= ((-3912205080953375794 != (((((37 ? var_9 : var_1)) - var_0)))));
        var_19 ^= (+(((4440626737098261429 < -4440626737098261429) ? (31 + var_4) : 4503612313575817693)));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_20 ^= ((((((~(arr_3 [i_1])))) ? (max(4440626737098261443, (arr_6 [i_1 + 3] [i_0 - 2] [14] [1] [i_0] [i_0]))) : (arr_7 [i_0 - 1]))));
                        var_21 -= 214;
                        var_22 ^= 4440626737098261429;
                        arr_8 [i_3] [i_1] [i_1] [i_0] = (((min((min(2815088226768258975, var_0)), (arr_6 [i_3] [i_1] [i_1 + 3] [i_1 - 2] [i_0 - 3] [i_0 - 3]))) >= ((-4440626737098261430 ? 2 : -4440626737098261430))));
                    }
                }
            }
        }
        var_23 = (max(var_23, -3315108908989560188));
    }
    for (int i_4 = 3; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_24 = (max((arr_0 [i_4]), 3315108908989560188));
        var_25 &= ((((max(6524772984627211110, -4440626737098261445))) ? (((arr_10 [22]) / 6924908303084727829)) : (((max((arr_10 [22]), (arr_10 [4])))))));
    }
    for (int i_5 = 3; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_14 [i_5] = ((-(((max((arr_6 [i_5] [4] [i_5] [i_5] [i_5] [i_5 - 3]), (arr_3 [i_5]))) ^ ((((arr_6 [i_5 - 2] [i_5 + 1] [i_5] [i_5] [i_5] [11]) ? 4440626737098261403 : var_3)))))));
        var_26 += (max((914558015210188313 / 4440626737098261426), (((((var_2 ? (arr_7 [13]) : 1))) ? 1861789854 : ((var_6 ? (arr_9 [i_5] [i_5 + 1]) : 18446744073709551615))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_27 = (arr_9 [i_6] [i_6]);
                    var_28 = (((~4440626737098261413) ? (((((var_3 || (arr_11 [i_6])))) << (-4440626737098261413 + 4440626737098261439))) : ((((var_15 ? (arr_10 [i_7]) : -4440626737098261410))))));
                }
            }
        }
    }
    #pragma endscop
}
