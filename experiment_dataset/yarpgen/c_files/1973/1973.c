/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_3 ? var_4 : (((!(((var_11 ? var_2 : var_8))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_13 += ((1 ? 3288908502 : -3916016730413179228));
                    var_14 = (max(var_14, ((((arr_5 [1] [i_1] [1]) ? var_0 : (arr_5 [i_2] [i_0] [i_0]))))));
                }
                arr_7 [i_1] = (((arr_1 [i_1]) + ((1888732756603051858 ? ((20 ? var_0 : (arr_3 [i_0] [i_0] [i_0]))) : (var_5 | var_6)))));
                arr_8 [i_1] [1] = ((((((arr_3 [i_0] [i_1] [i_0]) & (arr_3 [i_0] [i_0] [2])))) || (((var_1 | (arr_3 [i_0] [12] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
