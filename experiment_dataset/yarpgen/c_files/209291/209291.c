/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_6 <= var_6) & (var_4 + var_6)))) ^ var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = (((var_3 & var_0) >= ((var_7 + (arr_3 [i_0])))));
                    var_13 *= (((((-910630644 + 2147483647) << (var_3 - 1))) > (1 % -55)));
                    arr_10 [i_1] [i_1] [i_1] [i_2] = ((((4188730967 ^ (arr_1 [i_1]))) & ((((var_8 == (arr_1 [i_0])))))));
                    arr_11 [i_0] [i_1] [i_2] = ((((29530 >> (29506 && 12883770219927895076))) % (25 * var_10)));
                    var_14 = ((-35 > var_9) * ((var_9 >> (((((-2147483647 - 1) - -2147483629)) + 48)))));
                }
            }
        }
    }
    var_15 = var_3;
    #pragma endscop
}
