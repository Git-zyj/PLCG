/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, -1743711594669246254));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_3;

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_13 = (max(var_13, 208));
                    arr_8 [i_0] [i_2] = var_10;
                    arr_9 [1] [i_0] [i_2] [i_2] = var_5;
                    arr_10 [i_0] [19] [i_0] = (min((max(var_7, (arr_7 [i_0]))), (arr_3 [i_0] [i_1])));
                }
                arr_11 [i_0] [1] = (!10330);
            }
        }
    }
    #pragma endscop
}
