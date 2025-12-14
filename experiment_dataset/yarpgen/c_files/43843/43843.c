/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((-1772245018 ? ((~(~var_10))) : (((((min(var_4, var_0))) == 23126)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = (min(var_9, ((((42426 << (var_17 - 20)))))));
                    var_21 -= 603610409979825565;
                    arr_7 [i_0] |= var_8;
                    var_22 = (max((((~23109) - (arr_3 [i_2] [8]))), (min((~var_4), ((42409 ? (arr_3 [i_0] [i_0 - 1]) : var_16))))));
                    arr_8 [i_2] [i_0] [i_0] = (((((var_4 ? 105 : (arr_2 [i_0] [i_0])))) ? (((((23126 ? var_12 : var_8)) ^ 42426))) : ((var_3 - ((((29755 < (arr_2 [i_0 - 3] [i_2])))))))));
                }
            }
        }
    }
    #pragma endscop
}
