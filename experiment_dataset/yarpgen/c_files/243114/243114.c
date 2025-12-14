/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_5 >> var_0);
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((!(arr_2 [i_0] [i_0])));
                arr_5 [i_0] = (arr_2 [i_0] [i_1]);
                arr_6 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
            }
        }
    }
    var_12 += (!(((((max(var_3, 92))) ? (((127 >> (var_8 - 512589749)))) : var_9))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_2] [i_2] |= ((max((~-99), ((var_0 ? var_6 : 128)))));
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_22 [i_3] [i_3] [6] [i_2] [i_2] [1] = -var_8;
                            var_13 = (min(var_13, (((var_8 && ((max(((15872 ? (arr_3 [i_2]) : 1)), (arr_1 [i_3 - 1] [i_4 - 2])))))))));
                            var_14 = (arr_8 [10]);
                            var_15 = (((((-(arr_1 [i_4 + 1] [i_3 - 1])))) && 2147483647));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
