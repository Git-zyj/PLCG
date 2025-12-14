/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((max(var_2, (min(var_1, var_1))))), var_0));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((+(((arr_1 [i_0]) ? var_6 : var_10)))));
        arr_3 [i_0] [i_0] = 2548013404170578769;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_17 = ((!(15898730669538972853 % 46)));
        arr_7 [i_1] = ((~(!var_3)));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_18 = 4976;
                        var_19 = (((arr_11 [i_1] [i_3 + 2] [i_2 - 1]) ? (arr_8 [i_2 + 4]) : (15898730669538972846 >= -5454537479999546780)));
                        var_20 = (~var_7);
                    }
                }
            }
        }
    }
    var_21 = (2548013404170578791 + 0);
    #pragma endscop
}
