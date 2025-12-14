/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 *= -49;
                    var_20 = (((((((-122 + 2147483647) << (arr_3 [i_2] [i_0]))) & (~92))) / (arr_8 [i_2] [i_1 + 2] [i_0 - 2])));
                }
            }
        }
    }
    var_21 = (min((min((~85), var_12)), (max((0 - var_14), 0))));
    var_22 = (max(((1 ? 530076003 : (1 <= var_12))), (((!(((-247290665 ? var_4 : var_7))))))));
    var_23 = var_16;
    var_24 = (((var_9 & -var_16) ? var_13 : 57));
    #pragma endscop
}
