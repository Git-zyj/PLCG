/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((6005 ? (var_6 % var_2) : 31892)) | (~var_4)));
        arr_3 [i_0] = ((((((max(112, var_5)) * 511))) ? 3761584542 : (min(var_3, (min(var_6, var_5))))));
        arr_4 [i_0] = (~103);
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = (~32767);
        var_13 = -103;
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            var_14 = var_6;

            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                var_15 = ((+((~((var_10 ? (arr_12 [i_2] [i_2]) : var_4))))));
                var_16 = ((~((50151 & (arr_8 [i_2 + 1])))));
                var_17 = ((+(max((((arr_6 [i_2] [i_3]) ? (arr_8 [i_2 + 1]) : 0)), (arr_11 [i_4 - 1] [i_4] [i_4])))));
                arr_15 [i_2] [i_3] [i_4] = var_5;
            }
            arr_16 [i_2] [i_2] = (~var_1);
        }
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            var_18 = (min(((-(var_4 * var_8))), (max((arr_6 [i_2 - 1] [i_5 + 1]), (var_7 - 59537)))));
            var_19 = ((((min((var_11 * 3968), 5979))) ? 1 : -var_1));
            arr_19 [i_2] = ((((((((var_12 ? var_3 : 0))) ? (var_0 * var_3) : 0))) && (!-92)));
        }
        arr_20 [i_2] = (((~91) ? ((((var_7 <= (arr_5 [i_2]))))) : (arr_18 [i_2])));
        var_20 = var_0;
        arr_21 [i_2] = var_8;
    }
    for (int i_6 = 2; i_6 < 14;i_6 += 1)
    {
        arr_25 [i_6] = (~-47727);
        arr_26 [i_6] = ((~(((((var_4 ? var_1 : (arr_6 [i_6] [i_6])))) ? (min(var_10, var_9)) : (((arr_11 [13] [10] [i_6 - 2]) & var_9))))));
    }
    var_21 = -3672638125451106340;
    #pragma endscop
}
