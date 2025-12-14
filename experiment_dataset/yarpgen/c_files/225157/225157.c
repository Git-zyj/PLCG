/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, -var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((arr_2 [i_0] [i_0] [i_0]) / ((~(arr_0 [i_0])))));
                var_18 = (max(var_18, (((((((arr_1 [i_0] [i_1]) ^ (arr_3 [i_0] [i_0] [i_1])))) ? (arr_1 [i_0] [i_1]) : (arr_0 [i_0]))))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_9 [4] &= (arr_5 [i_0]);
                    var_19 = ((!((((arr_0 [i_0]) ? (arr_1 [22] [i_1]) : (arr_1 [i_0] [i_0]))))));
                }
                for (int i_3 = 4; i_3 < 23;i_3 += 1)
                {
                    var_20 = (max(3, 65504));
                    var_21 = (i_1 % 2 == 0) ? (((((~(arr_8 [i_1] [i_3 + 1] [i_3 + 2]))) < (((((!(arr_0 [i_0])))) << (((((arr_7 [i_1]) ? var_11 : (arr_6 [i_0] [i_0] [i_3]))) - 4294946288))))))) : (((((~(arr_8 [i_1] [i_3 + 1] [i_3 + 2]))) < (((((!(arr_0 [i_0])))) << (((((((arr_7 [i_1]) ? var_11 : (arr_6 [i_0] [i_0] [i_3]))) - 4294946288)) - 2163478003)))))));
                }
            }
        }
    }
    var_22 = (((((var_15 ? (var_1 <= var_10) : (!var_9)))) ? var_13 : (((var_7 + 2147483647) << (((18446744073709486122 || var_13) - 1))))));
    #pragma endscop
}
