/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, ((max(12591654645176365345, (arr_5 [0]))))));
                    var_12 = ((0 >> (-1 + 54)));
                }
            }
        }
        var_13 = (arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_14 = var_6;
        var_15 = 1;
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        var_16 -= (-15 >= -1);
        var_17 = (min(var_17, (arr_8 [i_4] [i_4] [7] [i_4 + 1])));
        arr_15 [10] |= 1;
    }
    var_18 += var_0;
    var_19 = ((((min(var_7, ((13811289003362569447 ? var_10 : 857632405))))) ? (max(((max(-1, var_5))), var_9)) : var_6));
    #pragma endscop
}
