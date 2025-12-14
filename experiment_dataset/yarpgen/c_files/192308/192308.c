/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -32751;
        var_15 = arr_0 [i_0];
        var_16 = (min(var_16, -1560559476622563240));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            var_17 *= ((136 ? -9223372036854775805 : 2906849680013597053));
                            arr_14 [i_2] = ((32767 ? 9223372036854775799 : 2906849680013597053));
                        }
                        arr_15 [i_3] [i_2] [i_2] [8] [i_0] [i_0] = (arr_9 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3]);
                    }
                }
            }
        }
    }
    var_18 = var_2;

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_19 = min(-7123233946614509654, (-32767 - 1));
        var_20 = 16;
    }
    #pragma endscop
}
