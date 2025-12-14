/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((((-3958570301897121831 ? 32764 : -126))) ? (((max((-127 - 1), 33253)))) : (-9223372036854775807 - 1));
    var_13 = ((var_0 ? (-2147483647 - 1) : var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = var_5;
                    arr_8 [2] [i_1] [i_2 - 1] |= ((arr_6 [i_1 - 1] [i_1] [i_2 - 1]) % (((arr_6 [i_1 + 1] [1] [i_2 - 1]) ? (arr_6 [i_1 + 1] [i_2] [i_2 - 1]) : (arr_6 [i_1 - 1] [i_1] [i_2 + 1]))));
                }
            }
        }
    }
    var_15 = ((var_6 >> (((min(((var_0 ? 23763 : 3592363034)), (max(2027960843, 3979174983)))) - 23738))));
    #pragma endscop
}
