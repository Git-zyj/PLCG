/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 = (max(var_20, var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = 88;
                    var_22 += (((max(112, ((var_8 ? var_10 : var_3))))) ? (((~((-5928317930608298882 ? var_5 : (arr_7 [i_0] [i_1] [i_2] [i_0])))))) : (max(3220324438432792695, 16)));
                }
            }
        }
    }
    #pragma endscop
}
