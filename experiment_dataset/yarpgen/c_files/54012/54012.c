/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (!(((+((((arr_1 [i_0]) != var_6)))))));
                var_18 *= ((var_16 ? ((((max(1, var_12))) ? ((6 + (arr_1 [i_1]))) : (((((arr_4 [i_1 + 1]) && (arr_2 [i_0]))))))) : (arr_4 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, (arr_4 [i_2])));
                            var_20 = ((((var_13 ? (arr_4 [i_1 + 1]) : var_1)) ^ (arr_4 [i_1 - 1])));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                            {
                                var_21 = (min(((!((!(arr_7 [i_1] [i_3] [i_4]))))), ((var_3 != (~6)))));
                                var_22 = ((20 ? ((((arr_6 [i_1 - 1] [i_3 + 1]) < (arr_6 [i_2 + 2] [i_0])))) : 30));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                var_23 = ((-(arr_7 [i_1] [i_2] [i_1])));
                                var_24 = (arr_7 [i_1] [i_1] [i_1 + 1]);
                                var_25 = (!(((56 ? (arr_8 [i_2 + 1] [i_2 - 1] [i_2 - 1]) : (arr_8 [i_2 - 4] [i_2 - 3] [i_2])))));
                                var_26 = var_7;
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                            {
                                arr_19 [i_1] [i_1 + 1] [i_2 + 2] [i_3] [i_2] = (!((min((arr_6 [i_1 + 1] [i_2 - 1]), var_16))));
                                arr_20 [i_0] [i_1] [i_0] [i_0] [i_0] = (((((arr_9 [i_0] [i_1 - 1] [i_0] [i_3] [i_3] [i_6]) < ((min((arr_4 [i_1]), -22))))) ? (((((((arr_1 [i_0]) | 29026))) ? (((arr_18 [i_1] [i_1] [i_2] [i_3]) * (arr_15 [i_0] [i_1 + 2] [i_2 - 1] [i_3] [i_3] [i_6]))) : (arr_10 [i_0])))) : (min(var_3, var_13))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (1 && var_10);
    var_28 = 1;
    #pragma endscop
}
