/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [4] = ((-((min(27107, -17)))));
                    var_12 = (arr_1 [i_0] [i_1]);
                    arr_7 [i_0] [i_1] [i_2] [i_1] = -var_7;
                }
            }
        }
    }
    var_13 ^= (((((((((-4240254911595004886 + 9223372036854775807) << 0))) ? var_2 : (!var_0)))) ? ((max(4240254911595004885, (!var_2)))) : ((var_4 ? 21847 : (min(var_0, var_1))))));
    var_14 = ((-var_2 >= ((var_3 + (!0)))));
    #pragma endscop
}
