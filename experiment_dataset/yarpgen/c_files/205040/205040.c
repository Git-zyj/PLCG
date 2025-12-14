/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        var_11 = ((((((arr_8 [20] [i_3 + 1]) << ((((-13989 + (arr_5 [i_1] [13]))) + 14198))))) ? ((32765 | (arr_1 [i_3 + 3]))) : (max((arr_8 [i_0 - 1] [i_3 + 2]), ((-31458 ? 0 : (arr_9 [i_0] [15] [i_0 - 3] [i_1] [i_3])))))));
                        var_12 = ((!(((~((5 % (arr_0 [i_0] [i_0 - 1]))))))));
                    }
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_13 = (min(((min(250, -22106))), -20));
                        var_14 = (max((arr_4 [i_4 + 1] [i_0 + 2]), ((((~18446744073709551611) < (arr_3 [i_0 - 2]))))));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_15 = (max((((!(arr_5 [11] [i_2])))), ((~(!-64)))));
                        var_16 = 3845222907;
                        arr_17 [22] [i_1] [i_1] [i_0] [i_1] [0] = ((-(!18446744073709551577)));
                        arr_18 [i_0] = (((((51 != (min(var_6, 14))))) + (min((0 % -57), (min(var_10, (arr_15 [i_0] [11] [i_0] [i_0] [i_0 + 3] [i_0 - 3])))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        var_17 = ((!(arr_8 [i_1] [i_2])));
                        var_18 = ((550742116 ? (arr_1 [i_0 - 2]) : var_2));
                        var_19 = (~var_1);
                    }
                    var_20 = 18446744073709551610;
                }
            }
        }
    }
    var_21 = var_8;
    #pragma endscop
}
