/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (((((((-64 ? (arr_3 [i_0] [7]) : 1)))) ^ (((46020 ? 19503 : 1))))))));
                    arr_8 [i_0] [i_0] = ((-(((-2147483647 - 1) ^ (arr_7 [i_2 - 1] [i_0 - 3])))));
                }
            }
        }
    }
    #pragma endscop
}
