/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [2] [2] |= ((~((~((min((arr_0 [i_0]), 48084)))))));
        var_17 = (-((~((~(arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        var_18 &= ((+(min(((min((arr_9 [i_0]), 0))), (max(-1196045561, var_3))))));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_16 [i_0] [1] [i_2] [i_2] [4] [6] = (min((min(((min((arr_11 [i_4] [i_3 - 1] [i_2] [i_0]), (arr_14 [i_2] [i_2])))), ((-(arr_7 [i_2] [i_2] [i_2] [i_0]))))), ((min((max((arr_11 [i_0] [i_1] [6] [i_4]), (arr_0 [i_1]))), (((!(arr_15 [i_0] [i_2] [i_4])))))))));
                            var_19 = (min((((~(arr_5 [i_2] [4] [i_4])))), ((max(-var_4, -1)))));
                            var_20 = (min(((min(((max((arr_0 [i_1]), 1))), var_3))), (min(55483, -8418033069738402205))));
                            var_21 -= max((((-(min(7897, 3753832723))))), (min(65526, (min((arr_7 [i_1] [i_1] [i_3] [i_4]), var_11)))));
                            arr_17 [i_4] [i_2] [i_2] [i_0] [i_2] [i_0] = (min(((-((max((arr_0 [i_1]), (arr_8 [i_1] [i_1] [i_2] [i_1])))))), (min((min((arr_4 [i_0] [i_1]), (arr_6 [i_2] [3]))), (((!(arr_5 [6] [6] [6]))))))));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_22 = (!-1196045561);
                            var_23 = (~-var_12);
                            var_24 = (max(var_24, (((+(min((!33637), (max(1, 15974386641084356141)))))))));
                            var_25 = ((~(!6)));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_26 &= (-(~var_13));
                            arr_25 [i_6] [i_2] [i_2] [i_2] [i_0] = ((-(!142)));
                            var_27 -= (~32768);
                        }
                    }
                }
            }
        }
    }
    var_28 = (((min((min(var_7, var_2), (min(24650, 48076)))))));
    var_29 = ((-(min((min(var_7, var_8)), ((max(var_2, var_4)))))));
    #pragma endscop
}
