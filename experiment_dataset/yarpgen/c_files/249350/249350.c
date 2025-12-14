/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;
    var_19 = (min((max(var_9, (((var_8 ? var_4 : var_5))))), var_6));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_20 |= (((arr_3 [i_0] [i_0]) || (~1)));
        var_21 -= var_12;
        var_22 = (max(var_22, (((-(((((arr_1 [i_0 + 1]) - var_2)) + ((-(arr_3 [i_0] [i_0 + 1]))))))))));
        var_23 -= 5532760701279840876;
        var_24 = ((var_8 > (arr_0 [i_0] [i_0 + 2])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (min((((arr_5 [i_1]) - ((((!(arr_5 [i_1]))))))), ((((32767 / (arr_5 [i_1]))) ^ 944229709792609884))));
        arr_8 [i_1] = 5532760701279840876;
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_25 *= ((var_10 || ((min((~var_9), ((((-32767 - 1) ? 1 : var_4))))))));
        var_26 |= ((arr_6 [i_2]) % ((~((98 ? 18446744073709551597 : 1)))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_27 = (arr_11 [i_4] [i_3]);
                        var_28 ^= (arr_4 [i_3 - 1]);
                        var_29 = (min(((16890179898178767250 & (arr_6 [i_2 + 1]))), ((((((((arr_15 [i_2] [4] [i_5]) > 1)))) < (max(var_7, var_13)))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                {
                    var_30 ^= var_3;
                    arr_27 [i_2] [17] [i_2] [i_2] = 71;
                    var_31 = ((!(arr_25 [i_7] [i_7] [i_7 + 1])));
                    var_32 = (min(var_32, (arr_17 [i_2] [i_2])));
                }
            }
        }
    }

    for (int i_8 = 2; i_8 < 16;i_8 += 1)
    {
        var_33 = ((+((-5532760701279840889 << (((((arr_25 [i_8 - 2] [i_8 - 2] [i_8 - 2]) << (((arr_26 [i_8]) - 1104667941)))) - 131043))))));
        arr_30 [5] = ((!(((arr_16 [i_8] [i_8 + 1] [i_8] [i_8 + 1]) || (arr_12 [i_8] [i_8 + 1])))));
        var_34 = var_0;
    }
    var_35 = (var_12 / -944229709792609884);
    #pragma endscop
}
