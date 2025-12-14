/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((2204922311648776174 ? ((-(16241821762060775420 - var_16))) : ((var_10 ? var_3 : var_9)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = ((((arr_5 [1] [i_0]) ? (2451457588 && 554153860399104) : (max(-1, 18446744073709551614)))) >> (18446744073709551614 - 18446744073709551576));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_1] = (arr_8 [i_0] [i_0] [i_2] [i_3]);
                        arr_12 [i_0] [i_3] [8] [9] [i_3] [4] = (((((2204922311648776174 ? (18446744073709551615 + 9986058745038692822) : -818920987))) ? 384 : 503316480));
                        var_18 += ((min(((min((arr_4 [i_0] [i_1] [i_0]), -384))), (16241821762060775420 * 18446744073709551606))) | (arr_0 [i_0]));
                    }
                }
            }
        }
    }
    var_19 = (((-385 + 2147483647) << (503316480 - 503316480)));
    #pragma endscop
}
