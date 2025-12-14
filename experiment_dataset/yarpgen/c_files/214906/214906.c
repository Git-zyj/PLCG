/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((max(var_12, var_2)))));
    var_17 = (((min((!1), var_11))) ? (min(var_6, (((19257 ? 1 : 1))))) : ((1653751980745881248 ? (((max(1, var_9)))) : var_13)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 25685;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (-var_8 ? 1 : 1);
                    arr_8 [i_0] [i_1] [i_0] &= ((1 ? 8278005520138586591 : 3145306464368311899));
                    arr_9 [i_0] [i_0] [i_2] [i_2] = (max(0, ((((min(-7911967948318247122, 1))) ? ((-(arr_7 [i_0] [i_0] [i_1] [i_1]))) : (var_12 % 1)))));
                }
            }
        }
        var_19 = 39850;
        var_20 = (((((25685 << (((arr_7 [i_0] [i_0] [i_0] [1]) - 21576))))) ? (((arr_4 [i_0] [i_0] [i_0]) ? (arr_4 [0] [0] [i_0]) : (arr_4 [i_0] [1] [i_0]))) : (((arr_7 [i_0] [i_0] [i_0] [i_0]) - (max(137438429184, 25685))))));
        arr_10 [i_0] = ((+(max((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    var_21 = 0;
    #pragma endscop
}
