/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(!87)));
    var_13 = (max(193, 1));
    var_14 = (min(var_14, ((max((!1), ((~(!4219678921))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 += (!1);
        var_16 = (arr_3 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] = 58;
        arr_7 [i_1 + 1] = (arr_0 [i_1]);
        var_17 += 51;
        arr_8 [i_1 - 1] [i_1 - 1] = (max(((~(arr_4 [i_1 + 1]))), ((max(23, (!740804287740043328))))));
    }
    for (int i_2 = 3; i_2 < 24;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            arr_14 [i_2] [i_2 - 3] = (arr_10 [i_2]);
            arr_15 [i_2] [i_3] [22] = ((~(((!((!(arr_12 [15]))))))));
            arr_16 [i_3] = 58;
        }
        arr_17 [i_2] = ((-(((!(arr_11 [i_2 - 2]))))));
        var_18 = (min(var_18, (((-(!188))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_19 = (max((arr_9 [i_4] [i_4]), (--193)));
        var_20 = (max(238, (((!(~8912))))));
    }
    #pragma endscop
}
