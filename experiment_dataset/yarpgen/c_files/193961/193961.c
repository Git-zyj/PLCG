/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_14 ? (2007568601674125469 / var_15) : (((((9223372036854775807 / -2007568601674125494) == (~-5772489518148234042)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((!((!((min(-8612998261032958820, 5772489518148234036))))))))));
                    var_21 *= (((((((max(var_4, (arr_5 [i_2])))) ? (max(6278310281331265983, (arr_8 [i_0] [7] [i_2]))) : (arr_3 [i_1 - 3])))) ? ((((arr_5 [i_0 + 1]) ? var_9 : var_17))) : (((arr_4 [i_2 + 3] [4] [i_2 - 3]) ? -5772489518148234014 : ((((var_5 != (arr_5 [i_0 + 1])))))))));
                }
            }
        }
    }
    #pragma endscop
}
