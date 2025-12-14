/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 -= (((((-41 ? -41 : ((var_4 ? -41 : (arr_1 [1])))))) * (arr_5 [0] [2] [i_1])));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_17 [i_1] [i_2] = (((((40 ? ((var_3 ? (arr_16 [i_2] [i_2] [i_2]) : (arr_15 [i_2] [i_1] [i_2] [i_3] [i_4] [i_0 + 3] [i_2]))) : (arr_15 [i_2] [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_4 + 1] [i_4 + 2] [i_4])))) * (max(0, (var_9 / -8818737393873562530)))));
                                var_14 = (min(((((-41 / (arr_10 [i_2]))))), ((var_1 / (((arr_16 [i_2] [18] [2]) ? 31 : (arr_8 [i_2] [i_2] [i_0])))))));
                                arr_18 [i_4 - 2] [i_3 - 1] [i_2] [i_2] [i_2] [i_1] [i_0] = (min(40, (max(35, (max(14757586417936733815, 3689157655772817771))))));
                                var_15 = (max((max(-8818737393873562544, (arr_11 [i_2] [i_1] [i_2]))), (((!(arr_10 [i_2]))))));
                            }
                        }
                    }
                    arr_19 [i_2] [i_2] [i_2] [i_0] = ((14757586417936733815 ? 0 : 8818737393873562543));
                }
            }
        }
    }
    var_16 = (var_4 <= var_11);
    #pragma endscop
}
