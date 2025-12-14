/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = (268435455 & 2175112884);
                                var_15 = min((min((min(var_10, var_6)), var_13)), (arr_12 [i_0] [i_1] [i_2] [i_3] [i_1]));
                            }
                        }
                    }
                    var_16 -= (min(var_12, ((max(((2175112876 ? var_2 : 2175112875)), (arr_0 [i_0]))))));
                    var_17 = (min(((2175112875 ? 125829120 : 2119854412)), 2119854424));
                }
            }
        }
        arr_17 [i_0] = (min((((arr_4 [i_0] [i_0] [i_0]) ? (arr_11 [i_0] [i_0] [i_0] [2]) : (arr_9 [i_0] [i_0] [i_0] [1] [i_0] [i_0]))), (arr_4 [i_0] [i_0] [i_0])));
        var_18 = var_7;
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                var_19 += 2119854414;
                arr_24 [14] [i_6] [i_5] = (((max((arr_7 [5] [i_5] [i_6]), (arr_1 [i_5] [i_5])))) ? ((((((arr_18 [i_5] [i_6]) ? var_4 : var_0))) ? ((18446744073709551615 ? var_7 : var_6)) : var_10)) : (max((((var_1 % (arr_15 [i_5] [i_6] [i_6])))), var_5)));
                var_20 = (max(var_20, var_2));
                arr_25 [i_5] [i_5] = ((-3971775351704183751 ? ((((var_13 || -6) ? ((2871006201 ? 2175112894 : 2926379310)) : var_12))) : ((~((var_6 ? var_6 : (arr_20 [i_5] [i_5] [9])))))));
            }
        }
    }
    var_21 = ((605065576 ? 2175112875 : (((min(1023, 605065575))))));
    var_22 -= (max(var_11, -20284598584608753));
    #pragma endscop
}
