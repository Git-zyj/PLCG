/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_4));
    var_20 += (((((((var_14 ? var_12 : var_6))) ? var_2 : (min(var_10, var_4))))) ? (((min(0, (1046528 > 255))))) : ((~((var_17 ? var_10 : var_16)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_7 [i_0] [2] [i_2] [i_2] = (min(1046528, 2670223938));
                    arr_8 [i_0] [i_2] = (16530 + 53477);
                    var_21 = (min((min((arr_6 [i_0] [i_1] [i_0] [7]), ((min(var_10, 53477))))), 53477));
                    arr_9 [i_0] [i_2] [i_2] [i_2] = (min(53477, (((((1046517 ? -1046528 : 4294967286))) ? 25798 : (-2147483647 - 1)))));
                    var_22 = (min(45128, 4294967286));
                }
            }
        }
    }
    #pragma endscop
}
