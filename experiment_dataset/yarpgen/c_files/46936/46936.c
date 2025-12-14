/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_1;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    {
                        var_11 = -1864503244;
                        arr_11 [i_0 - 3] [i_1] [i_2] [i_2] [i_3 - 3] [i_0] = ((1864503242 ? 9223372036854775807 : 1414675790));
                    }
                }
            }
        }
        var_12 = 139;
        arr_12 [i_0] [i_0] = (!-67092480);
        var_13 *= (max((((25919 & 1) << (-1431586852 + 1431586857))), 18126));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                {
                    var_14 = (min((~54783), -67092477));
                    var_15 = 2477952204;
                    arr_17 [i_0] [i_4] [i_5] = (min(2880291526, 9223372036854775779));
                }
            }
        }
    }
    #pragma endscop
}
