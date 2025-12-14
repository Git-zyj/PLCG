/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-((((min(var_0, var_16))) ? -var_9 : var_6)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] = ((var_11 ? (((!(((var_10 ? var_2 : var_8)))))) : (min(((-503582360 ? -8891 : 214)), (~var_14)))));
                                arr_12 [i_0] [5] [i_0] [i_3] [1] = (min(((~(arr_1 [i_0]))), (arr_8 [i_3])));
                                arr_13 [i_0 - 1] [i_1] [i_1] [i_0 - 1] [i_2 - 2] [i_0] [i_1] = ((+(min((arr_1 [i_0]), (min((arr_8 [i_0]), (arr_7 [i_4] [i_3] [1] [i_0] [1] [i_0])))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_8 [i_0]);
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_0] [i_2 - 1] = (((((127 ? 0 : 2147483647))) <= (((~(arr_3 [i_0 - 1] [i_0 - 1] [i_2 - 1]))))));
                    var_20 = (min(var_20, (((var_3 * (((arr_4 [i_2] [i_1] [i_2 - 1]) & (arr_4 [i_1] [i_0] [i_2 - 1]))))))));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_21 = (max(var_21, (((~((((((arr_0 [i_1] [i_0]) << (((arr_4 [i_5] [i_5] [i_6]) - 8939735219590524429))))) ? (arr_0 [i_5] [i_5]) : ((((!(arr_16 [i_0] [i_0] [i_1] [i_6]))))))))))));
                            arr_22 [i_0] [i_6] = ((!(((~(((arr_4 [i_0] [i_1] [21]) ? var_10 : (arr_7 [i_0] [i_0] [i_5] [7] [i_0] [i_5]))))))));
                            arr_23 [i_0] = (arr_10 [i_0] [i_0] [i_6]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
