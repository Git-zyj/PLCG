/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 *= (((((var_7 ? var_11 : (arr_3 [i_0])))) > ((((arr_0 [i_0]) && -8327832843471520122)))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_13 = (((((((arr_4 [i_2] [i_1] [i_0]) ^ var_5)))) ^ var_10));
                    var_14 = (max(var_14, ((((arr_2 [8] [i_1]) > (arr_0 [i_1]))))));
                    var_15 = (arr_6 [i_0]);
                }
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    var_16 = ((((((~var_7) ? var_8 : var_4))) ? ((((!((max(var_5, 127))))))) : (((((37265 ? var_4 : (arr_8 [i_0] [8] [i_0] [0])))) & ((113477575839611641 ? var_1 : var_4))))));
                    arr_10 [i_0] [6] [i_0] [i_0] = (((arr_4 [4] [i_1] [i_3 + 1]) != (((arr_8 [i_0] [i_0] [i_3 - 1] [i_3]) ? (max(var_9, (arr_7 [3]))) : (((var_7 + 2147483647) << (((arr_8 [i_0] [i_0] [3] [3]) + 15556))))))));
                    arr_11 [i_1] [i_1] [i_3] = ((var_8 ? (arr_4 [i_3] [0] [i_3 - 1]) : -var_2));
                    var_17 = 17735;
                    var_18 = var_4;
                }
                var_19 = ((!(((~((var_11 ? (arr_7 [i_1]) : var_5)))))));
            }
        }
    }
    var_20 = var_0;
    #pragma endscop
}
