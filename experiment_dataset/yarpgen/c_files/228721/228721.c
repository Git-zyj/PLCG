/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = var_10;
        var_18 = (min(109, 973653683487839163));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    arr_11 [i_2] [1] [i_3] = ((+(min((arr_6 [i_2 - 1] [i_2 - 1] [i_2]), (arr_6 [i_2 - 1] [i_2 - 1] [i_2])))));
                    var_19 = arr_8 [i_1] [10] [i_2] [i_3];
                    arr_12 [i_1] [i_2 - 1] [i_2] [i_3] = ((((!(arr_3 [1]))) || (arr_9 [i_2] [5])));
                }
            }
        }
    }
    #pragma endscop
}
