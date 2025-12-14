/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (max(var_19, var_13));
        var_20 = (max(var_20, var_2));
        arr_2 [i_0] = ((((-2310 <= var_4) ? (!7567081388932228849) : var_15)));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_7 [i_0] = ((((max(var_6, ((var_6 ? -2310 : -1919172451783573891))))) ? 3 : ((~((-2320 ? 204806201 : var_9))))));
            var_21 = ((((max((((var_5 ? 224 : var_16))), (max(var_17, (arr_5 [i_0])))))) ? ((max(117, var_16))) : (max(var_1, ((var_11 ? var_17 : var_11))))));

            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    var_22 = (((((((max(var_18, var_15))) + ((max(var_18, 2320)))))) ? (arr_1 [i_2 - 1]) : (max(-1049941692095576397, (~-13)))));
                    var_23 = ((~(max(var_6, var_14))));
                    var_24 = var_0;
                    var_25 = (((!65535) ^ (max(var_4, ((~(arr_8 [i_2])))))));
                    arr_14 [i_2] [i_2 - 2] [i_1] [i_2] = ((((((var_8 + 2147483647) << (3504854140 - 3504854140)))) ? (arr_11 [i_3] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3] [3]) : var_10));
                }
                var_26 = ((~((2758579731 ? 104 : 576))));
                arr_15 [i_2] [i_1] [i_2] = ((~(((arr_11 [i_2] [i_2] [i_2 - 3] [i_2] [i_0] [7]) ? (arr_11 [i_2] [i_2] [i_2 - 2] [i_2] [i_2] [i_2]) : var_13))));
                var_27 = (max(var_27, (((((((arr_9 [i_2 - 3]) ? (((var_12 ? var_18 : var_8))) : (max(var_6, var_9))))) ? ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? -8511 : ((-37 ? var_17 : 656446655))))) : (var_16 * var_3))))));
            }
        }
        for (int i_4 = 1; i_4 < 6;i_4 += 1)
        {
            var_28 = (max(var_28, ((((((3638520641 ? var_7 : var_9))) ? ((var_12 ? 2505002070 : (arr_3 [i_0] [i_4 - 1] [i_4 + 3]))) : var_5)))));
            var_29 = (((!3278187059) ? (max(3638520641, var_9)) : (((((max(8796093022207, -2311))) ? -79 : var_8)))));
            var_30 = (max(var_30, ((((((127 ? var_1 : 1))) ? ((((~var_13) ? ((var_10 >> (var_17 - 24047))) : ((var_6 ? (arr_9 [i_0]) : var_10))))) : ((var_2 ? (!var_18) : (~var_13))))))));
        }
    }
    var_31 = (max(var_31, var_9));
    var_32 = ((((((((0 ? -13 : 0))) ? 40594 : -6))) && ((max(var_0, (((var_17 ? 58343 : 0))))))));
    #pragma endscop
}
