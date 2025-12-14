/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 ^= (max((((arr_1 [i_0]) ? (arr_2 [i_0] [17]) : 125)), (((-127 - 1) ? -97 : 1))));
                var_16 = (min(var_5, ((((arr_0 [i_1] [i_0]) != (arr_0 [i_1] [i_1]))))));
                var_17 *= (((!((min(var_14, (arr_1 [i_0])))))));
                arr_5 [1] [1] [i_0] = ((((((((((-127 - 1) + 2147483647)) << (((-119 + 139) - 20))))) ? var_10 : var_5)) == (-127 - 1)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_18 = (((((((max(var_9, var_12))) ? ((var_11 >> (((arr_1 [i_2]) + 700093778)))) : ((~(-127 - 1)))))) ? ((-var_7 ? var_11 : ((-(-32767 - 1))))) : ((max((!841232682), 115)))));
                arr_12 [i_2] [i_2] [0] = 1;
                arr_13 [i_3] [i_2] = (((arr_0 [23] [i_3]) & (((var_7 | (-127 - 1))))));
                var_19 = ((4294967288 ? 7 : var_0));
            }
        }
    }
    var_20 = (min(-var_13, ((max(var_5, ((min(-118, 127))))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            {
                var_21 = (min(var_21, (arr_16 [i_5 - 1] [i_4] [i_4])));
                arr_20 [i_4] [i_5] [i_4] = (~((16 << (((arr_0 [i_4] [i_4]) - 781568495)))));
                arr_21 [0] [0] = var_2;
                arr_22 [i_5] = ((~(((min(4294967275, 2293134497273824274)) % (((156 ? 19817 : var_10)))))));
            }
        }
    }
    var_22 = var_2;
    #pragma endscop
}
