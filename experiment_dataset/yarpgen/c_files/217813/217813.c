/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_16));
    var_18 = (max(var_18, ((max((var_7 % var_2), ((((max(var_8, var_14))) & var_7)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((((((-(arr_8 [i_1] [i_1 - 1])))) <= (((((18446744073709551608 % (arr_3 [i_0])))) ? -2149 : (arr_4 [i_0] [i_1 + 2] [i_2]))))))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = (~0);
                }
            }
        }
    }
    #pragma endscop
}
