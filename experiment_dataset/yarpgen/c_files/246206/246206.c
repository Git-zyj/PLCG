/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = (max(((max(((var_0 ? -630956565 : -1097997936982915447)), var_8))), (max(((-8261024697317911149 ? 18332957413717908746 : var_1)), 758349935))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 |= (min((min((arr_1 [i_0] [i_1]), (((arr_4 [i_2] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_1]))))), 5781747553897795381));
                    arr_8 [i_0] [i_1] [i_2] |= (max((((2147483638 ? (arr_7 [i_0] [i_0 + 2] [i_0]) : (48685 > 1)))), ((((min((arr_4 [i_0] [11]), 1))) & (arr_3 [i_0])))));
                    var_14 = (min(-9223372036854775801, (((((max((arr_4 [2] [i_0]), 1))) ? ((-127 | (arr_7 [i_0] [i_1] [i_2]))) : ((-53 | (arr_7 [i_1] [i_1] [i_0]))))))));
                    arr_9 [i_1] [i_1] = 44;
                    arr_10 [i_2] [i_1] [i_2] [i_2] = (min((((((((arr_1 [i_2] [i_1]) | (arr_1 [i_0] [i_0])))) ? ((~(arr_6 [i_1]))) : (arr_6 [i_0 + 2])))), ((-(max((arr_7 [i_2] [1] [i_0]), (arr_3 [i_0])))))));
                }
            }
        }
    }
    var_15 = (max(var_15, (((var_4 ^ (((((var_7 ? -8290691170339122428 : var_7))) ? ((min(88, 1935055403))) : ((12224816700467153668 ? 724732694295613435 : 59355)))))))));
    var_16 += (min(-77, 0));
    #pragma endscop
}
