/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = ((((((arr_1 [i_1]) + 2147483647)) >> (var_11 - 242))) >> (((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_1]))) + 14555)));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_2] = (max(2821231075, (arr_2 [i_0])));
                    arr_9 [i_1] [i_1] [i_1] [i_2] = ((var_16 || (((2821231075 - (arr_1 [i_0 - 2]))))));
                }
                arr_10 [i_1] = (arr_4 [i_0 - 1] [i_1] [i_1]);
            }
        }
    }
    var_19 += (min(((min((max(var_15, var_17)), (var_16 < var_12)))), (max((max(var_13, var_1)), ((6287968471667544143 ? var_1 : var_16))))));
    #pragma endscop
}
