/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [18] |= -1612064350;
                var_20 += (arr_0 [0]);
            }
        }
    }
    var_21 |= 119;
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {
                arr_13 [i_3] = ((((((2097151 ? 63383 : (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]))) == (arr_10 [i_2] [i_3 - 1] [i_3 - 1]))) ? ((var_3 ? (((1 << (18014397972611072 - 18014397972611060)))) : (var_19 - -7435134955389295476))) : (arr_2 [16])));
                var_22 = (-33378 | 65533);
                arr_14 [i_3 + 1] = ((-((((arr_1 [i_2 - 3] [18]) == (((255 ? (arr_3 [4] [4]) : var_9))))))));
            }
        }
    }
    var_23 = (((var_14 - 1) == var_17));
    var_24 = (--18032);
    #pragma endscop
}
