/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] = ((((-((42424 ? var_0 : (arr_4 [i_0] [i_3] [i_1]))))) == (((2 ? 42422 : 23112)))));
                                var_10 |= var_3;
                                var_11 += -var_1;
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [0] &= (((((((min((arr_0 [i_0]), var_5))) ? -30971 : ((42449 ? -1383688390 : (arr_4 [0] [i_1] [i_1])))))) ? ((min((arr_10 [4]), (!6184871665462218153)))) : (((arr_10 [0]) ? (arr_10 [6]) : (arr_10 [4])))));
                            }
                        }
                    }
                    var_12 = 42423;
                    var_13 = (arr_7 [i_2] [i_1] [i_0]);
                    var_14 = ((arr_1 [1] [1]) ? (max((arr_5 [i_0]), var_4)) : ((var_0 / (arr_3 [i_0] [i_1] [i_2]))));
                    var_15 = ((var_8 ? var_0 : ((30955 ? 30971 : var_9))));
                }
            }
        }
    }
    var_16 = ((((max(var_8, (max(10205, -4953))))) ? -var_1 : (max((((-9202531973356131733 ? var_1 : -4963))), (max(10916955445550503331, 17041))))));
    var_17 = (((max(((max(22, 4963)), var_2)))));
    var_18 = ((!((max(var_5, 4964)))));
    var_19 *= (max(((var_5 ? ((65535 ? var_0 : var_8)) : ((min(229, 1023))))), (((((-4953 ? var_3 : 0))) ? var_1 : ((var_0 ? 42418 : var_1))))));
    #pragma endscop
}
