/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -21;
    var_18 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (var_2 > ((((min((arr_0 [i_0] [i_2]), -1253542298))) ? ((min(1253542315, (arr_7 [i_0] [i_0])))) : (max(var_12, -23)))));
                    var_20 = (i_0 % 2 == 0) ? ((((((-(arr_1 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) << (((arr_1 [i_0] [i_0]) - 166)))) : (((arr_5 [i_0]) >> (((arr_1 [i_0] [i_0]) - 152))))))) : ((((((-(arr_1 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) << (((((((arr_1 [i_0] [i_0]) - 166)) + 65)) - 24)))) : (((arr_5 [i_0]) >> (((((arr_1 [i_0] [i_0]) - 152)) + 57)))))));
                }
            }
        }
    }
    var_21 = var_5;
    #pragma endscop
}
