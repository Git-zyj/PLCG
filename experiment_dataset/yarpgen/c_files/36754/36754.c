/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = var_2;
    var_13 = var_3;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [17] = ((max((17472416794245550465 && var_1), (arr_1 [i_0]))));
        var_14 &= (((min((max(var_2, 13974441555901537480)), (arr_2 [i_0]))) > ((((!(13974441555901537480 & var_1)))))));
        var_15 = (((((arr_0 [14]) > (arr_2 [i_0]))) ? var_7 : (((var_10 ? -91 : (arr_0 [i_0]))))));
        var_16 = (((min(-91, -5028378142869579898))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (5765901101930528814 >= var_6);
        arr_7 [i_1] [5] = ((~((-(((arr_5 [7] [i_1]) >> (arr_0 [i_1])))))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_3] = -4858997197656658472;
                        arr_15 [i_3] [i_3] [i_2] [i_3] [3] [3] = ((~((-(arr_12 [i_2] [i_2 + 2] [i_2 + 1] [i_2 + 1])))));
                        arr_16 [i_3] [i_2] [i_4] = ((-(max((arr_12 [i_2] [i_2] [i_2 - 1] [i_2 - 1]), (arr_8 [i_4] [i_2 - 1] [i_4])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
