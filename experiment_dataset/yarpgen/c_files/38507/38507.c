/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_10 = ((-(arr_1 [i_0])));
        var_11 = (min(var_11, -2817281209876515577));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((!-2817281209876515577) != (((((arr_4 [16]) ? -2817281209876515596 : (arr_1 [i_1 - 1]))) * (((-(arr_5 [i_1 + 1]))))))));
        var_12 = (min(var_12, (arr_2 [9] [i_1 - 1])));
    }
    var_13 = 4824;

    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = arr_8 [i_2];

        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_14 -= (min((min(2817281209876515576, (!2817281209876515576))), ((13836514290984710198 ? 2817281209876515576 : (min((-9223372036854775807 - 1), (arr_8 [i_2])))))));
                            var_15 = (max(var_15, ((min((min((arr_21 [i_3 - 3] [i_3] [i_4] [i_6]), (arr_4 [i_3]))), (!2817281209876515562))))));
                            var_16 -= ((((((arr_13 [i_5] [i_2]) ? (arr_13 [i_6] [i_6]) : (arr_13 [i_5] [i_5])))) ? (arr_11 [i_2] [i_4]) : 2817281209876515573));
                        }
                    }
                }
            }
            var_17 = 0;
            var_18 = (min(var_18, (((((min(var_7, -2817281209876515574))) + (--2817281209876515574))))));
            var_19 = var_1;
        }
        var_20 = var_0;
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (((-10771569579385868564 < (((-((240 / (arr_3 [i_7])))))))))));
        var_22 = (((((arr_2 [i_7] [13]) != (arr_2 [i_7] [i_7])))) != var_5);
        arr_26 [13] = (((((arr_7 [i_7]) % var_2)) * (min((((arr_22 [i_7]) ? 60726 : (arr_15 [i_7]))), (arr_5 [i_7])))));
    }
    #pragma endscop
}
