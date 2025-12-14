/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = 9223372036854775807;
                arr_6 [i_0] = (arr_3 [i_0] [18]);
                arr_7 [i_0] = 0;

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_15 = ((((max((arr_8 [i_1] [i_2]), (max(var_6, 3627244795))))) < (((((2100394364 ? (arr_1 [i_0] [i_1]) : (arr_8 [i_0] [18])))) ? (arr_8 [i_0] [i_1]) : var_3))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_13 [i_0] [i_2] [i_1] [i_0] = 1;
                        arr_14 [i_1] [i_0] [i_0] [1] = (var_7 == 1);
                    }
                    var_16 = (((19394 << var_1) % (arr_11 [i_1] [i_1] [i_2] [i_0])));
                    arr_15 [i_0] = ((~((+(((arr_11 [i_2] [i_1] [i_2] [i_2]) ? 12991 : var_1))))));
                }
            }
        }
    }
    var_17 = ((var_5 ? (((((1 ? 1 : -12986))) + (var_5 / var_3))) : (((var_8 ? var_3 : var_3)))));
    var_18 = -12992;
    #pragma endscop
}
