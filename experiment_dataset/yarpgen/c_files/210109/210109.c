/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = (arr_2 [i_0]);
                    var_14 -= (max(((-40 ? 35670 : -2229031998342401608)), (((-6 ? (arr_1 [i_2]) : (((!(arr_3 [i_0] [i_0])))))))));
                    arr_9 [i_2] [i_2] = (max(((((max((arr_8 [i_2] [i_2] [i_2] [i_2]), var_11))) ? (((arr_3 [i_0] [i_0]) ? var_8 : 622355790)) : ((var_1 << (((arr_3 [i_0] [i_0]) - 5560620183831059083)))))), (((!(arr_5 [i_1 - 1] [i_1 - 2]))))));
                }
            }
        }
    }
    var_15 += ((((min(var_8, ((max(var_5, var_10)))))) ? ((((17873661021126656 ? 12 : 9223371761976868864)) / var_4)) : (((-((max(var_10, var_11))))))));
    #pragma endscop
}
