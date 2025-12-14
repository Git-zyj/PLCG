/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_1 <= ((((1822420104 < var_3) ? (~var_2) : (var_2 > 3467608268246935617))))));
    var_13 = (min(268435456, var_7));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (max((min((arr_1 [i_0] [i_0]), (max(2203, 592047921616053515)))), ((min((arr_1 [i_0] [i_0]), (((2190107450 <= (arr_1 [17] [i_0])))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (3467608268246935617 + 1519);

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                arr_9 [i_2] [i_2] = (((((1 ? -7982 : 64033))) < -2206057055));
                arr_10 [i_2] = ((~((~(arr_7 [i_2] [i_2] [i_1])))));
                var_14 = (((0 * (arr_8 [i_2] [i_2]))));
                arr_11 [i_2] [i_2] [9] [i_2] = (((arr_0 [i_1]) << (((arr_8 [i_2] [i_0]) - 3702905037))));
            }
        }
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = (max((arr_13 [i_3] [i_3]), (((arr_3 [i_3]) ? (1259695423 * 7827040476749990559) : 179))));
        arr_16 [i_3] [15] = (max((((8241654537153226495 ? (arr_0 [i_3]) : (((~(arr_12 [i_3]))))))), 3467608268246935617));
        arr_17 [i_3] [20] = 2732209698;
        arr_18 [i_3] [i_3] = (!127);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_15 = ((~(((arr_1 [i_4] [i_4]) & (arr_20 [i_4] [i_4])))));
        arr_21 [i_4] = (17751891858134156043 - 4389456576512);
        arr_22 [i_4] &= ((~(arr_20 [i_4] [i_4])));
    }
    #pragma endscop
}
