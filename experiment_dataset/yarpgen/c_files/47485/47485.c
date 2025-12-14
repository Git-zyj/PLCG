/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = 5221193453913917248;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_18 = 13225550619795634382;
                    arr_7 [i_2] [i_1] [0] = (((min((arr_6 [i_0] [i_0] [i_1 - 1] [1]), (arr_6 [i_0] [i_0] [i_1 - 1] [i_0]))) ^ (arr_6 [1] [i_1] [i_1 - 1] [i_1])));
                }
                arr_8 [8] [i_1] = (min((((arr_6 [i_1] [i_1 + 1] [i_1 - 1] [i_0]) / (arr_1 [i_1 + 1] [7]))), (((arr_1 [i_1 - 1] [i_0]) ? (arr_5 [4] [i_1 - 1] [i_1 - 1] [i_1]) : (arr_1 [i_1 + 1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
