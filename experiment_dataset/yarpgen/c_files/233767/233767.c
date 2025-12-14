/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 1876200126));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_13 += ((((max((arr_1 [i_0 - 3]), (arr_1 [i_0 - 1])))) ^ ((~(arr_1 [i_0 - 1])))));
        var_14 = (arr_0 [7] [i_0 + 1]);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 &= (((((((-93 ? 4187452476 : 1319678372))) || (arr_1 [11]))) || var_7));
                    arr_6 [i_0] [i_2 + 1] = ((arr_4 [i_2 + 1] [i_1 + 3] [i_0 - 2]) ? ((((((15755 || (arr_3 [i_1]))))) ^ (arr_3 [i_0]))) : -1876200127);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_9 [i_3] &= (min(((min(var_8, (max((arr_8 [1]), var_11))))), 1));
        arr_10 [i_3] &= (((((((arr_8 [i_3]) < 58021)))) ? ((((max((arr_8 [i_3]), var_11))) ? ((65535 % (arr_7 [i_3] [i_3]))) : (max((arr_7 [i_3] [i_3]), -1876200125)))) : (min((arr_7 [i_3] [i_3]), (arr_7 [i_3] [i_3])))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_16 = (min((max((arr_13 [i_4]), (max((arr_11 [11] [i_4]), -512489044623156372)))), -1876200120));
        var_17 -= (min((min((arr_13 [i_4]), (arr_14 [i_4] [i_4]))), var_6));
        var_18 = (min(var_18, ((max((max((arr_12 [i_4] [i_4]), (arr_12 [i_4] [i_4]))), (max((arr_12 [i_4] [i_4]), (arr_12 [i_4] [i_4]))))))));
    }
    var_19 = (min(var_19, var_3));
    var_20 = 28;
    #pragma endscop
}
