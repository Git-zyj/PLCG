/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (((((((var_10 ? var_9 : -1801891299))) ? ((var_8 ? -1801891318 : var_1)) : ((var_4 ? var_1 : var_7))))) ? (min(2228758443, 1801891282)) : 2433683486);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = (min(var_12, (((((min((((1 != (arr_4 [14])))), ((1370235240 ? (arr_1 [i_0]) : 1861283813))))) ? (arr_4 [4]) : (((((-1801891346 ? 1135464194 : 65534))))))))));
                            arr_9 [i_0] [i_1] [i_1] [i_0] [i_1] = ((((arr_0 [i_2] [i_0]) ? ((((!(arr_1 [i_2]))))) : var_9)));
                            arr_10 [i_0] [i_1] [6] [i_1] [i_2] [i_3] |= arr_7 [i_2 - 1] [i_2 - 1] [i_3] [1] [i_3 - 1];
                            var_13 = ((((-((152 ? (arr_5 [i_1] [i_1]) : (arr_8 [i_0] [1] [i_1] [i_2] [i_3] [i_3]))))) / ((((var_9 != (arr_7 [1] [i_2] [1] [i_0] [i_2]))) ? -1801891311 : (arr_8 [i_0] [i_1 - 1] [i_1] [i_1 - 2] [i_2 + 1] [i_2])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_14 += ((((max(var_8, ((!(arr_5 [i_0] [15])))))) <= (arr_7 [i_5 + 1] [i_5] [1] [1] [i_5 - 2])));
                            var_15 = (max(var_15, (((!(((-(arr_7 [i_5] [i_5] [12] [16] [i_5 - 1])))))))));
                            arr_15 [i_0] [i_0] [i_0] [i_4] [i_0] [i_5] = ((((max(11235, (arr_8 [i_1] [7] [i_4] [7] [i_4 + 1] [i_4 + 1])))) && (min(((60 == (arr_14 [i_0] [i_0]))), (arr_8 [i_0] [i_0] [i_1] [i_4] [i_4] [i_5])))));
                        }
                    }
                }
                arr_16 [1] [i_1] |= (min(-1801891346, -1801891323));

                for (int i_6 = 3; i_6 < 18;i_6 += 1)
                {
                    var_16 = ((arr_3 [i_0]) ? (((((0 * (arr_8 [i_0] [i_1 + 3] [i_1 + 3] [i_0] [i_0] [i_1])))) ? (arr_13 [i_1 - 2] [i_1 - 2] [i_1] [i_6 + 1] [i_6 + 2]) : (((arr_7 [9] [i_1] [i_1] [i_0] [1]) ? (arr_13 [i_0] [i_0] [i_1] [i_6 + 1] [i_6]) : (arr_14 [i_0] [i_0]))))) : 2225588806);
                    arr_19 [i_0] [i_0] = (((((4099711104 ? var_1 : var_8)))) ? (((min((arr_8 [3] [3] [i_0] [i_1] [3] [i_6 - 2]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : ((~(arr_2 [i_0] [i_1 + 3]))));
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    var_17 |= ((arr_21 [i_1 + 3] [i_1 + 2] [1]) ? ((((70 == (arr_1 [i_0]))))) : (((arr_3 [i_1]) ? (arr_14 [1] [i_1 - 2]) : 50745)));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_28 [i_7] [i_1] [i_7] [i_0] [i_9] [i_8] = (arr_2 [i_0] [i_1 + 1]);
                                arr_29 [i_0] [i_0] [i_1] [i_7 + 1] [i_8 - 1] [7] = (arr_5 [16] [16]);
                                arr_30 [i_0] [i_7] [i_8] = arr_12 [i_0];
                                arr_31 [i_0] [i_0] [i_7] [i_0] [i_9] = (arr_13 [i_0] [i_1] [i_7] [i_8] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_10;
    #pragma endscop
}
