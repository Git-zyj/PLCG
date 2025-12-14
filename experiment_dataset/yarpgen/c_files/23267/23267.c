/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((+(((arr_0 [i_0]) * (arr_0 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 4; i_4 < 18;i_4 += 1)
                            {
                                arr_15 [i_4] [i_3] [i_0] [i_1] [i_0] = (min((max((((var_5 || (arr_3 [i_0])))), ((-1129828 ? (arr_12 [i_0] [i_0]) : (arr_7 [i_0] [i_1] [i_2] [i_3]))))), (((!((max(9223372036854775807, var_2))))))));
                                var_14 += ((max(-37, -2165036316464925758)));
                                var_15 *= 3579647321;
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_16 ^= ((!(((arr_13 [i_0] [i_1] [i_2] [2] [i_5]) && var_7))));
                                arr_18 [i_0] [i_0] = (max((arr_4 [i_0]), (max((arr_10 [i_5] [i_3] [i_1] [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0])))));
                                arr_19 [i_0] [i_1] [i_5] [i_3] [i_1] [i_0] [i_5] = (min((arr_5 [i_0]), (-37 && -3227444988639640476)));
                                var_17 += (max((((1 ? (arr_8 [i_3]) : ((((arr_13 [i_0] [i_0] [i_2] [i_3] [i_5]) || var_3)))))), ((((var_5 ? 0 : var_1)) % (arr_16 [i_3] [i_1] [i_3] [i_5])))));
                                var_18 = (arr_0 [i_0]);
                            }
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_3] = var_1;
                            arr_21 [i_0] [i_0] [i_1] [i_3] [i_0] = var_7;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_19 = 13567870126315411907;
                            var_20 = (max(var_20, (((((max((~var_4), (max(var_4, var_5))))) ? var_1 : (((((((arr_24 [i_0] [i_1] [i_6] [i_0] [i_1]) ? var_3 : (arr_14 [i_6] [i_1] [i_0]))) > -39)))))))));
                            var_21 ^= max((max(2147483647, 12746568819454384065)), ((((arr_1 [i_0] [i_6]) < 1))));
                            var_22 = -44951178;
                            var_23 = ((var_9 ? var_9 : ((-(((1 <= (-2147483647 - 1))))))));
                        }
                    }
                }
                var_24 = ((((arr_24 [i_0] [i_1] [i_0] [i_1] [i_0]) || var_2)));
            }
        }
    }
    var_25 = var_1;
    #pragma endscop
}
