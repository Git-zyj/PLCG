/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((var_0 <= ((((var_7 < ((51 ? 1 : var_6)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (((((max(23355, 0))) ? (((arr_1 [i_0] [i_1]) ? (arr_1 [i_1] [i_2]) : (arr_1 [i_0] [i_1]))) : (!var_2))))));
                    var_16 = (max(var_16, ((max((((arr_3 [i_0]) != (arr_6 [i_1] [i_1] [i_2]))), (max((arr_0 [i_0]), var_8)))))));
                }
            }
        }
    }
    var_17 *= ((1 ? 4 : 18446744073709551615));
    var_18 = (min(var_18, ((((1 && -1) <= 64)))));
    var_19 += var_3;
    #pragma endscop
}
