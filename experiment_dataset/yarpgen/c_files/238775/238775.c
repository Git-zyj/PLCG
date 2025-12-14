/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = 1;
                var_21 = (((((-((127 ? -1680330277 : -20840))))) ? (arr_1 [i_1]) : ((11155750176923847832 ? 3250494766 : 7290993896785703784))));
                var_22 = (max(var_22, ((min(((~(arr_3 [i_0] [i_0] [i_0]))), (arr_3 [i_0] [i_1] [i_0]))))));
                arr_4 [i_0] [i_1] [i_1] = (arr_1 [i_1]);
            }
        }
    }
    #pragma endscop
}
