/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, var_6));
                    var_16 = var_14;
                    var_17 = (min(var_17, var_8));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_18 = 15314;
                var_19 += ((1 ? (((~43791) ? 1 : ((65535 ? 8557135797196788355 : 13)))) : (arr_6 [i_3] [i_4] [i_4])));
                arr_14 [i_3] = (min(var_14, var_11));
                arr_15 [i_4] = (((!var_12) + var_12));
            }
        }
    }
    var_20 = ((2172 < (max((((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << (((-8890851669790633961 + 8890851669790633971) - 10)))), ((1834785292469296992 ? -3806401296678019542 : 8890851669790633961))))));
    var_21 = 4548413901613287257;
    #pragma endscop
}
