/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (arr_0 [i_2]);
                    var_19 = (((((!((min(2936245912067758863, 1)))))) != ((((2936245912067758863 / var_11) != var_3)))));
                }
            }
        }
        var_20 = var_0;
        var_21 = (((arr_0 [i_0 + 2]) ? ((((var_4 == (arr_3 [i_0 - 4] [i_0] [i_0]))))) : (((!((var_10 && (arr_1 [i_0]))))))));
        var_22 = ((~(((-11011 & var_10) ^ var_5))));
    }
    var_23 = ((min(2936245912067758863, var_4)));
    #pragma endscop
}
