/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = var_7;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_8 [i_0] [i_0 + 1] = ((max((arr_5 [i_1] [10]), ((48039 ? (arr_3 [8]) : (-127 - 1))))));
                var_13 = ((65526 ? 48039 : (((max(-8, (arr_4 [i_0] [12])))))));
                var_14 = 201;
            }
            var_15 &= ((((max((var_9 && var_6), 18374686479671623680))) && (arr_3 [i_0])));
            var_16 = var_7;
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_14 [23] [i_0] [i_0] [i_4] = min(48039, 158);
                        arr_15 [i_0] [22] [0] [23] [6] [i_0] = var_8;
                        arr_16 [i_0] [3] [5] [i_1] [i_0] [i_4] = ((((34143 || ((min(1, var_1))))) ? (((!((min(var_5, 1)))))) : var_10));
                    }
                }
            }
        }
        arr_17 [i_0] [21] = (max(((min(var_4, var_11))), ((min(32472, 1)))));
    }
    #pragma endscop
}
