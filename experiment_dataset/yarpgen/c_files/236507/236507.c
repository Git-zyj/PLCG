/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_6 [1] [i_0] [i_2] = (arr_2 [8] [i_0]);
                    var_11 = var_7;
                    arr_7 [i_0] = ((~(arr_5 [i_0] [1] [i_0])));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_12 = (arr_8 [i_0]);
                    arr_10 [9] [1] [i_3] [i_0] = (((((-1 ? var_4 : var_5))) ? ((~(arr_3 [i_0]))) : (var_3 < 9223372036854775807)));
                    var_13 = ((65 ? 2632954310 : -99));
                }
                var_14 = ((-3753503397791413783 ^ ((((~(arr_3 [i_0]))) % (((arr_4 [i_0] [i_0]) ? (arr_3 [i_0]) : -102))))));
                var_15 = ((~((~(min(var_3, var_9))))));
                arr_11 [i_0] [i_0] [i_0] = ((!((max((((var_3 ? var_10 : (arr_5 [i_0] [i_0] [12])))), ((var_5 ? -4142350719352078901 : (arr_3 [i_0]))))))));
                arr_12 [i_0] [i_0] [i_0] = var_3;
            }
        }
    }
    var_16 = (min((var_4 == var_3), ((((var_2 ? 99 : var_10)) <= var_7))));
    var_17 = (var_1 && var_4);
    var_18 += var_4;
    #pragma endscop
}
