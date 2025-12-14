/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_0] = ((35 ? (arr_6 [i_2] [12] [i_0]) : ((((1 && 3066943658) && (2651626494 || 4136))))));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((((-7207397673847368048 >= (arr_7 [i_0])))));
                    arr_11 [i_2] [i_0] = ((((((max(34764, (arr_8 [i_1]))) & (-1 * var_5)))) ? var_7 : (!15963)));
                    arr_12 [i_2] [i_2] [i_1] [i_0] = -64;
                }
            }
        }
        arr_13 [i_0] = ((((((arr_4 [i_0] [i_0] [i_0]) != (arr_2 [i_0])))) - (0 + var_5)));
        arr_14 [i_0] = 1;
    }
    var_16 = (((((var_0 > var_6) ^ ((1 >> (30771 - 30744))))) ^ var_6));
    #pragma endscop
}
