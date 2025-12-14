/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = ((61895 / (((arr_1 [i_0]) ? 1 : 219))));
        var_20 = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) + (((-48 + 2147483647) >> (65535 - 65528)))));
    }
    var_21 = ((var_4 ? (((((1 || 5) > var_13)))) : ((var_15 ? (var_18 > 2834992882041554403) : (max(3752511541776387508, var_17))))));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_4 [i_1] = 29460;
        var_22 |= (((((arr_2 [14]) % 73)) | 182));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_23 = (arr_5 [i_2] [i_2]);
        var_24 = 8945331875630116504;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_25 = ((-(40 >> 1)));
        var_26 = (min(var_26, -var_4));
        var_27 = (min(var_27, (((((min((var_0 >= 1), ((~(arr_8 [i_3])))))) ? ((-(arr_9 [0] [i_3]))) : (max((((arr_1 [10]) - var_6)), var_5)))))));
    }
    for (int i_4 = 1; i_4 < 6;i_4 += 1)
    {
        var_28 = (min(var_28, ((((min((arr_0 [i_4 + 4]), var_7)) ^ (arr_6 [i_4 + 1]))))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_29 = ((~(~-30568)));
                    arr_17 [9] [i_5] [i_6] [i_4] = (1 == 1);
                    arr_18 [i_6] [i_5 + 1] [i_6] = 17326;
                }
            }
        }
    }
    var_30 = ((((min(16368, (var_9 != var_7)))) ? (max(((var_16 ? var_7 : var_2)), var_16)) : ((min((!1), (~var_3))))));
    #pragma endscop
}
