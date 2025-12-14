/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 -= -1073741824;
                arr_4 [i_0] [i_1] [2] = arr_0 [3] [3];
            }
        }
    }

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_13 = (((arr_5 [i_2 - 1]) * ((-(arr_5 [i_2 - 1])))));
        arr_8 [i_2] [i_2] = (((((((-29426 | (arr_5 [i_2])))) ? ((((arr_6 [i_2 - 1] [i_2]) > (arr_5 [i_2])))) : -1116044903)) <= 2075781131));
    }
    #pragma endscop
}
