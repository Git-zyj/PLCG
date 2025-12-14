/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((~(~79)))) ? ((((((var_5 ? 1 : var_1))) ? (((var_7 ? 15856 : var_5))) : ((1 ? var_3 : 4111755525678450752))))) : ((2772208574 ? 5565156326355251874 : -70))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] = (((((var_6 ? ((var_2 ? (arr_7 [i_3 + 3] [i_0 + 2]) : -1863269247)) : (~59632)))) ? (((~((72 ? var_3 : var_2))))) : (((((var_8 ? var_9 : (arr_6 [i_3 + 2] [i_1] [i_3 + 2])))) ? var_6 : (((var_8 ? (arr_8 [i_0] [1] [i_3 - 3]) : var_8)))))));
                        var_11 = ((~(((arr_0 [i_0 + 1]) ? ((-118 ? var_4 : (arr_3 [i_2]))) : (~var_1)))));
                        var_12 = ((~(((14215850027579760558 ? var_0 : var_9)))));
                    }
                    var_13 = ((~(((((~(arr_10 [4] [i_0 + 1] [i_1] [12])))) ? (~var_7) : (((arr_8 [i_0] [i_1] [i_1]) ? var_9 : (arr_6 [i_0 - 1] [i_0] [10])))))));
                }
            }
        }
    }
    #pragma endscop
}
