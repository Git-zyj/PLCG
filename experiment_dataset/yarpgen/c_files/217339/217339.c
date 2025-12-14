/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = ((((8975761994708161483 ? ((var_13 ? 47806487512371246 : var_8)) : var_2)) - -32113));
                arr_6 [i_0] = 3924103082;
                var_20 = (arr_2 [8] [i_1]);
                var_21 = ((((((arr_5 [i_1] [i_1 + 2]) ? (arr_2 [7] [i_1 - 1]) : (arr_5 [i_0] [i_1 + 2])))) ? 2047 : (var_6 | 8727373545472)));
            }
        }
    }
    var_22 = var_8;
    var_23 = ((-(min(((min(12817, 3924103082))), 18446735346336006143))));
    #pragma endscop
}
