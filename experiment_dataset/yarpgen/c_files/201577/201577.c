/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((min((var_9 / -118), ((118 ? var_2 : var_2)))), ((min(var_10, var_13)))));
    var_18 += var_14;
    var_19 = var_1;
    var_20 = -var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 += var_4;
        var_22 = ((((~(arr_1 [i_0]))) + (((79 ? var_8 : (arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 23;i_2 += 1) /* same iter space */
            {
                var_23 = (min(var_23, (((var_2 < (arr_6 [i_0] [i_2 - 1] [i_2] [4]))))));
                var_24 &= 4294967279;
                var_25 ^= (((((arr_2 [i_0] [0]) ? (arr_1 [i_0]) : (arr_4 [i_2] [i_0]))) == (arr_5 [0])));

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_26 ^= (((6201163562610694458 ? 10055 : 10055)));
                    var_27 -= 35;
                    arr_9 [6] [i_0] [i_2] [i_3] = 44760673;
                }
            }
            for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
            {
                var_28 = ((arr_8 [i_0] [i_4 - 1] [i_4 + 1] [i_4 - 1]) ^ -118);
                arr_13 [i_0] [i_0] [i_4] = (((arr_3 [i_0]) + (122 + var_8)));
                var_29 = (arr_0 [i_4 - 1]);
                arr_14 [21] [i_0] = (arr_8 [i_1] [i_1] [i_4 - 1] [i_0]);
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_30 = (min(var_30, (arr_2 [i_0] [20])));
                arr_19 [i_5] [i_0] [i_0] [i_0] = ((1962294962518518863 ? 2 : -145521206));

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_31 -= (arr_4 [i_0] [i_0]);
                    var_32 ^= ((-(arr_10 [i_0] [i_1] [i_6])));
                    var_33 -= ((var_5 ? 127 : 86));
                }
            }
            arr_24 [i_0] [i_0] [i_0] = (((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [0]) / (((arr_1 [i_1]) * (arr_20 [i_0] [1] [i_0] [22] [i_0] [1])))));
        }
    }
    #pragma endscop
}
