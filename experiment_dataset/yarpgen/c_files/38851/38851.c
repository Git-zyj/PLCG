/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_9 ^ var_4) ? var_9 : var_5))) ? 43 : ((var_3 ? var_2 : -var_1))));
    var_12 = min(var_8, (((9025628890997036749 ? -1 : 213))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((-3691202518808546087 < 9421115182712514876) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_13 = (arr_6 [i_0] [i_2] [i_1] [i_0]);
                    arr_9 [i_0] [i_0] = -var_10;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_14 = (max(var_14, var_0));
        var_15 *= ((+(((3090243454 >= 10572) ? (arr_10 [i_3] [i_3]) : ((((arr_11 [7] [i_3]) * var_2)))))));
    }
    var_16 = (~9025628890997036748);
    #pragma endscop
}
