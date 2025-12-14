/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_17 -= (((((((!(arr_1 [2] [2]))))) % (min(var_11, (arr_3 [2] [6] [2]))))));
                arr_6 [i_0] [i_1] = 0;
                var_18 = ((+(max((((arr_4 [i_0] [i_0] [i_0]) ? 2420346517 : 14)), (min(1676107847, -1))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_19 = (((arr_11 [i_2] [i_3]) ? (~16) : (arr_9 [i_2] [i_3])));
                var_20 = ((((11188 <= ((18446744073709551615 ? var_9 : (arr_9 [i_2] [1]))))) ? ((~(arr_12 [5] [5] [i_3]))) : 40583));
                var_21 = (max(var_21, ((((((var_13 ? (arr_8 [i_3]) : (arr_12 [7] [i_3] [i_3])))) ? (!3445020719) : (arr_7 [i_2] [i_3]))))));
            }
        }
    }
    #pragma endscop
}
