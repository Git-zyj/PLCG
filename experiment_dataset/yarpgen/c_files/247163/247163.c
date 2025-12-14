/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = 8694954250680111984;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (max(var_14, 9751789823029439647));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_15 |= (arr_2 [i_1]);
                    var_16 = (((arr_1 [i_1]) ? 9751789823029439647 : var_7));
                }
                for (int i_3 = 4; i_3 < 10;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [i_3 - 4] [i_0] [i_5] = (((var_2 << (((-4419 + 4438) - 19)))));
                                var_17 = (max(var_17, (((~((~(arr_15 [0] [i_1] [i_1] [i_4] [i_1] [i_4] [i_0]))))))));
                                arr_19 [i_0] [i_1] [i_0] [i_4] = ((~(arr_16 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1] [9] [i_3 - 3])));
                            }
                        }
                    }
                    arr_20 [i_0] [i_1] [i_0] = ((min(((min(38574291, (arr_0 [i_0] [i_1])))), (var_2 + 1))) + 30164);
                    var_18 = (min((~-7430533898729584721), ((((arr_16 [9] [i_3 - 2] [i_3 - 1] [i_3] [i_3] [i_1]) - (arr_5 [i_0] [i_3 - 1]))))));
                }
                var_19 = (max(var_19, ((max(var_2, var_8)))));
                arr_21 [i_0] [4] = (((((-7351230153399064585 ? -7369930596775529515 : 7114553953808091973))) / (min(9751789823029439632, (arr_17 [i_1] [i_1] [i_1] [10] [i_0] [10] [i_0])))));
            }
        }
    }
    var_20 = var_9;
    #pragma endscop
}
