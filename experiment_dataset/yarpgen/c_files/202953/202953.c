/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((max(var_6, var_8))) == var_9)) && (((var_10 ^ ((max(var_0, -107)))))));
    var_12 *= ((max((max(4161266551, var_5)), var_6)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        var_13 = ((((((!(arr_3 [i_1 - 1]))))) < (((arr_10 [i_1] [i_3] [i_3] [i_1]) ? (arr_3 [i_1 + 3]) : var_8))));
                        var_14 *= ((((60163 & (arr_11 [i_3]))) & ((max((arr_11 [i_3]), (arr_11 [i_3]))))));
                        var_15 = (min((((-var_2 * (arr_11 [i_1])))), ((-(arr_2 [i_0 - 1] [i_1 + 3])))));
                    }
                    for (int i_4 = 4; i_4 < 22;i_4 += 1)
                    {
                        arr_16 [i_1] [i_1 + 1] = ((((((var_7 & (arr_12 [i_1]))))) ? (arr_5 [i_0 + 1] [i_1] [i_1]) : (arr_0 [i_0 + 2])));
                        var_16 = ((((var_5 / (arr_3 [i_4])))) || (((~(arr_11 [i_1])))));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_17 = (min((var_4 == 2147352576), (min(2147352576, (((arr_4 [i_0] [i_1]) & -2147352576))))));
                        var_18 = 16031;
                        var_19 = ((!((!(arr_14 [i_1 + 1] [i_0 + 1])))));
                        var_20 = (arr_4 [i_0 + 2] [i_1]);
                    }
                    arr_19 [i_1] [i_1] = (min((arr_8 [i_1]), (arr_8 [i_1])));
                    var_21 ^= ((((max(4, (((1 || (arr_3 [1]))))))) ? (((var_8 / var_2) / (min((arr_2 [i_0 - 1] [i_0 - 1]), 4095)))) : ((((var_5 * var_4) | ((-(arr_13 [i_0] [i_0 - 1] [0] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
