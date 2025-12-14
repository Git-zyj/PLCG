/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_5 ? var_8 : var_4))) ? (min((var_9 || var_1), var_4)) : -var_3));
    var_12 = var_3;
    var_13 = (3919546907 >= 54);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [15] [15] [i_1] [i_2] = ((((max(var_0, (arr_3 [i_2] [i_1] [i_0])))) ? var_10 : ((max((var_10 >= var_4), (arr_8 [i_2] [i_2]))))));
                    arr_10 [i_0] [i_0] [i_2] [3] = ((min(var_0, 0)));
                    var_14 = (((!4294967295) ? ((((((9 ? var_1 : 206))) ? 4294967295 : 1))) : ((4294967290 ? 8485616781832181524 : 4294967281))));
                }
            }
        }
    }
    #pragma endscop
}
