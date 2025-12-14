/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 14;i_4 += 1)
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3] = (((arr_4 [i_3] [i_1]) != ((min(11490, (arr_2 [i_1] [i_2]))))));
                                var_10 = (((((var_7 ? (arr_10 [i_0 + 3] [3] [3] [i_3] [i_1 - 1]) : (arr_2 [i_1] [i_1])))) ? ((((~3495409056) ? 524287 : (arr_12 [i_0] [i_0] [i_0] [i_0] [5] [i_0] [i_0 + 4])))) : (((arr_9 [i_1 - 1] [i_1 - 2] [i_0 + 2]) ? (min((arr_6 [1] [i_1] [i_2] [i_4]), (arr_3 [i_3] [i_4]))) : (arr_11 [i_4] [8] [i_1] [i_1] [i_0])))));
                                arr_15 [1] [i_1 + 1] [i_2] [i_2] [i_3] [i_1 + 1] = ((!(arr_2 [i_0] [i_4 - 1])));
                                arr_16 [i_3] = ((~-26922) > (arr_1 [i_0 - 1]));
                            }
                            for (int i_5 = 2; i_5 < 15;i_5 += 1)
                            {
                                arr_19 [1] [i_0 + 3] [i_2] [i_3] [i_3] = (+((((((arr_8 [i_0] [i_3] [i_2] [i_1]) ? var_3 : (arr_0 [i_1] [i_3]))) != ((var_7 >> (7360078949112404191 - 7360078949112404185)))))));
                                var_11 += ((var_1 ? (arr_8 [i_5] [i_5] [i_5] [i_0]) : (((arr_5 [i_1] [i_3]) & ((24851 ? 32766 : -22))))));
                            }
                            arr_20 [i_3] [7] [14] [1] = ((((min((var_8 ^ var_5), var_6))) ? (((-((11086665124597147409 ? 975 : (arr_5 [i_3] [i_1])))))) : (max(0, 7475412403761497404))));
                            var_12 = (min(var_12, var_4));
                            var_13 *= ((var_0 ? var_1 : (arr_7 [i_1] [i_1] [i_0])));
                        }
                    }
                }
                arr_21 [i_0 + 1] [i_0 + 3] [i_1] &= 7360078949112404221;
                arr_22 [i_0] [i_0] [i_0] = ((((min(var_4, var_6))) ? ((-13 - ((var_5 ? (arr_13 [11]) : var_2)))) : var_1));
            }
        }
    }
    var_14 = var_4;
    var_15 *= ((var_6 ? (((((7360078949112404176 < var_7) && var_2)))) : (max(var_8, (min(10049411658379534205, var_8))))));
    #pragma endscop
}
