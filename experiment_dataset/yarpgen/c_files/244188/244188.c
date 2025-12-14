/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 *= ((~(arr_2 [i_1 - 1] [i_1 - 1])));
                    var_14 = (min(var_14, 0));
                    arr_9 [i_2] [i_1 + 1] [1] = (((((((min(0, var_10))) ? ((((arr_4 [i_0]) + (arr_2 [i_2] [i_1 - 1])))) : (arr_5 [i_0] [i_1 - 1])))) ? 274877906432 : ((((!(arr_1 [i_0])))))));
                }
            }
        }
    }
    var_15 = ((var_5 << (((var_4 + 2079651589) - 59))));
    var_16 = ((var_1 ? (!var_11) : var_11));
    #pragma endscop
}
