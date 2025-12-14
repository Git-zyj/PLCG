/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_16 -= var_4;
                var_17 = (max(var_17, (arr_2 [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_18 *= (arr_5 [i_2]);
                var_19 ^= ((((-((max((arr_6 [i_2]), (arr_2 [i_2])))))) > (arr_2 [i_3])));
                var_20 += ((-34 ? 34 : -21190));
                var_21 ^= (((((((max(var_15, (arr_2 [i_3])))) + 0))) ? 1419118174 : (arr_3 [i_2 - 1] [i_2 - 1])));
            }
        }
    }
    var_22 -= ((min((~var_2), (~6967153117963807099))));
    #pragma endscop
}
