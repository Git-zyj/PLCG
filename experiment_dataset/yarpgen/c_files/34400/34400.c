/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [i_1] [i_1] [i_0] = (((arr_8 [i_0]) * (arr_6 [i_0] [i_1] [i_0] [i_3])));
                        arr_10 [i_0] [i_1] [i_1] [i_0] = (arr_8 [i_0]);
                        var_12 = 1;
                    }
                }
            }
            var_13 = (~var_10);
            var_14 = 16766080273951628942;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_18 [i_0] [i_0 + 2] [i_4] [i_0] [i_6] = (!1);
                        var_15 = ((-((max(var_8, (arr_8 [i_0 - 1]))))));
                        arr_19 [i_0] [i_4] [i_5] [i_6] = (!(((var_3 ? (((5175420913592616381 ? 1 : var_5))) : (arr_12 [i_0 + 3] [i_6])))));
                    }
                }
            }
            var_16 ^= ((-(arr_11 [8])));
            arr_20 [i_0] = (min(((var_7 ? (arr_7 [i_0] [i_4] [i_4]) : (arr_7 [i_0] [i_0 + 1] [i_4]))), var_6));
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            arr_23 [i_0] [i_0] [i_0] = ((((((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? 0 : (arr_7 [i_0] [i_0] [i_7])))) ? (((~(arr_17 [i_0] [i_0] [1] [i_0])))) : (arr_12 [i_0] [i_7]))) == ((~(arr_13 [i_0] [i_0])))));
            arr_24 [i_0] [i_0] = (arr_4 [i_0 - 1] [i_0 + 1]);
            arr_25 [i_0] [i_0] [i_0] = (((arr_4 [i_7] [i_0 + 3]) ? (arr_4 [i_7] [i_0 + 3]) : var_8));
        }
        arr_26 [i_0] [i_0] = (((((15249749127111314432 <= (max(var_1, (arr_14 [i_0] [i_0])))))) >> (15511454113735734615 - 15511454113735734600)));
        arr_27 [2] &= (min((arr_11 [8]), -1));
        var_17 = ((((((((((arr_22 [i_0] [i_0]) && (arr_14 [i_0] [i_0]))))) <= (max(var_10, var_1))))) == (((min(var_5, var_4))))));
    }
    #pragma endscop
}
