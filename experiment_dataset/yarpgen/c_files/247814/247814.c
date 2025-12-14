/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = 65532;
                    var_18 = (15966 == -127);
                    var_19 *= (((arr_6 [i_0] [i_1] [i_2]) || (((var_0 && 18446744073709551615) < var_16))));
                    var_20 = max((max(var_16, (max(57, 4294967284)))), (((~(((arr_6 [12] [i_1] [i_1]) ^ (arr_4 [i_0])))))));
                    arr_8 [i_0] [i_0] = var_4;
                }
            }
        }
    }
    var_21 = (max(18, (-var_14 % var_1)));
    var_22 = (max(var_22, (((var_2 + (min(-97, (255 | var_14))))))));
    #pragma endscop
}
