/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_12 = min(0, 4045);
        var_13 = ((((max((arr_0 [i_0] [i_0 - 3]), -32026))) > (min(((-(arr_3 [i_0 - 2]))), ((max((arr_1 [10] [3]), (arr_2 [8] [i_0]))))))));
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        var_14 = (max((min(((-18237 ? 32752 : 30720)), (arr_5 [i_1 - 1]))), (arr_4 [i_1])));
        arr_7 [i_1] = arr_4 [i_1];
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_10 [20] |= arr_8 [i_2];
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                {
                    var_15 = (((~10342) > var_9));
                    var_16 = (min(var_16, (((~(max(((var_2 ? (arr_13 [i_4] [i_4]) : (arr_9 [i_4]))), (arr_14 [i_4 - 2]))))))));
                }
            }
        }
        var_17 = (max(var_17, var_6));

        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {
            arr_17 [i_2] [i_2] [i_2] = ((~(arr_16 [i_2] [i_2])));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        var_18 = (~var_6);
                        arr_22 [i_2] [i_7] [i_2] [i_6] [i_7] = (-32054 > -9423);
                    }
                }
            }
        }
    }
    var_19 ^= (min(((var_7 ? ((min(var_8, var_1))) : (~var_2))), ((var_7 ? ((min(var_0, var_3))) : ((min(var_11, var_9)))))));
    #pragma endscop
}
