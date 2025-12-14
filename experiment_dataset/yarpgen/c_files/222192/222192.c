/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(1, 1));
    var_12 = var_2;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [4] = (arr_1 [i_0] [8]);
        var_13 = ((-(min((arr_0 [1]), (max((arr_1 [9] [i_0]), 1))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, 1));
                    var_15 += -1;
                    arr_10 [5] [1] [i_2] = var_2;
                }
            }
        }
        var_16 = (!((((arr_5 [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_0])))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_17 = ((+((((!var_1) && (arr_0 [i_3]))))));
        var_18 = (arr_3 [i_3] [i_3]);
        arr_13 [i_3] |= 1964877290567413812;
        arr_14 [i_3] [i_3] = (arr_6 [11] [i_3] [21]);
        var_19 = ((+((((((arr_8 [i_3] [i_3] [i_3] [i_3]) ? (arr_2 [i_3]) : (arr_8 [i_3] [i_3] [i_3] [i_3])))) ? (var_4 && -16492) : (arr_7 [1] [i_3] [11])))));
    }
    #pragma endscop
}
