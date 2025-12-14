/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((((var_0 ? -1781344959006415849 : 9135652996637531227)))) ? (max(((((arr_1 [i_1]) << (var_9 - 2063454476)))), (min(7, var_11)))) : ((max(1, var_7))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [23] [i_3] [i_2] [i_2] = ((((min(var_10, (arr_4 [i_0] [i_2 + 3] [i_3])))) || 5854569938573683098));
                            arr_11 [i_2] = (((((arr_7 [i_2] [15] [i_2 - 3]) ? (arr_1 [i_0]) : (arr_7 [i_2] [10] [i_2]))) != var_13));
                        }
                    }
                }
            }
        }
    }
    var_15 = (((((var_1 ? ((-6893381765745020206 ? -2146273683 : 28)) : var_11))) ? var_1 : 2667055957));
    var_16 = (((min(((217 ? var_6 : 217)), (var_3 || var_13))) < var_10));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            {
                arr_18 [i_5] [i_4] [i_4] = (255 ? 8191 : 255);
                arr_19 [i_4] [i_5] = (max(245, 0));

                for (int i_6 = 1; i_6 < 7;i_6 += 1)
                {
                    arr_23 [i_6] [i_5] [i_5] [i_4] = (arr_5 [i_4] [i_4] [i_4] [i_4]);
                    var_17 -= (((((var_12 ? 151 : (arr_17 [i_5] [i_4])))) ? (arr_8 [i_4] [i_4] [i_6 - 1] [i_5]) : 86));
                }
                for (int i_7 = 1; i_7 < 7;i_7 += 1)
                {
                    arr_27 [i_4] [i_5] [i_4] [i_4] = (max(1593619885, ((var_2 ? (-5854569938573683098 + 39) : -100))));
                    var_18 = max(1, ((!(arr_1 [i_7 + 2]))));
                    arr_28 [i_4] [i_4] [i_4] |= var_10;
                }
            }
        }
    }
    #pragma endscop
}
