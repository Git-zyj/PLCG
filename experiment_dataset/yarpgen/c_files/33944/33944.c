/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((((max(var_7, (((arr_0 [i_0] [i_0]) >> (((arr_4 [i_1]) + 790422787))))))) ? ((~((var_0 ? (arr_1 [i_0]) : (arr_4 [i_0]))))) : ((-var_7 % (arr_4 [i_1 + 1]))))))));

                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    var_12 = ((((((((max((arr_2 [3]), (arr_1 [10]))))) + (min(var_10, var_0))))) ? -var_2 : ((((!(arr_8 [i_2 - 2] [i_0] [i_0])))))));
                    var_13 &= (arr_3 [i_2 + 1] [i_1] [i_2]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                {
                    var_14 = (1 % -3284780937313003232);
                    var_15 &= (min((min(9952, 25)), (arr_13 [i_4 + 1] [i_4] [i_4 + 2])));
                }
            }
        }
    }
    var_16 = var_9;

    for (int i_6 = 2; i_6 < 16;i_6 += 1)
    {
        var_17 = ((~(((arr_18 [i_6 - 1]) >> (arr_21 [i_6 - 2] [i_6 + 2])))));
        arr_22 [i_6 - 1] &= (arr_18 [i_6 - 1]);
        var_18 = (max(var_18, var_4));
    }
    var_19 = (max(var_19, 62));
    #pragma endscop
}
