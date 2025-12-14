/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((var_2 << (((~244) + 255)))))));
                var_12 = (min(((!(((var_0 >> (var_6 - 3247742836)))))), (((arr_3 [i_1] [i_1]) < (min((arr_5 [i_0]), var_1))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_13 = (max((arr_8 [i_2] [i_3]), (((min((arr_6 [i_3]), var_9)) - ((((!(arr_6 [i_2])))))))));
                var_14 = ((((min(var_9, (!34)))) >> (((var_7 > (~var_6))))));
                var_15 &= ((-(min((arr_10 [i_3]), (min(-24843, 4294967295))))));
                var_16 ^= ((-(((!((((arr_9 [i_2] [i_3] [i_2 - 2]) << (arr_9 [i_2 + 1] [i_2] [i_2])))))))));
            }
        }
    }
    #pragma endscop
}
