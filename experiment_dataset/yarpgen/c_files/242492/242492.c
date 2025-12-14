/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_17 = (max((arr_0 [i_0]), (min(var_13, ((31788 * (arr_1 [i_1])))))));
            var_18 = (((((arr_1 [i_0]) ? -28086 : (arr_1 [i_0]))) >= (((arr_1 [i_0]) ? (arr_1 [i_1]) : (arr_1 [i_1 + 4])))));
            var_19 = (min(((var_7 ? (arr_0 [i_0]) : (((arr_2 [i_0] [i_1] [i_0]) ? 0 : (arr_3 [i_0] [i_1 + 2] [i_1 + 3]))))), (arr_3 [i_1 + 1] [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, var_3));
                        var_21 &= (min((((var_7 && -66) ? ((-(arr_7 [i_0] [i_0] [i_2]))) : -43)), (arr_3 [i_1] [i_2] [i_1])));
                    }
                }
            }
        }

        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            arr_11 [i_0] [i_4 + 3] = (min((arr_6 [i_0] [i_0] [i_0] [i_0] [i_0]), (((var_1 + var_9) ? -var_4 : (arr_3 [i_4 - 1] [10] [i_4])))));
            arr_12 [i_4] = ((arr_10 [i_0] [i_0] [i_0]) && 0);
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                {
                    arr_18 [i_5] = (!-85);
                    arr_19 [i_5] = ((-(((!((max(-85, 2147483647))))))));
                    arr_20 [i_0] [i_0] = (((!506531158) ? var_13 : 15737));
                }
            }
        }
    }
    var_22 = ((!(((0 ? 1 : 1)))));
    #pragma endscop
}
