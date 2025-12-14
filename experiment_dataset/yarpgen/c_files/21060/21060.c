/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((max((((-1212237128 ? 81 : 81))), ((25453 ? 15428 : 16299252246679910700)))), ((min(((16299252246679910684 ? 28556 : 3989428551)), ((max(20960, -81))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_17 = 22273;
            var_18 = (((((var_6 ? -5030636874011511889 : 25453))) ? ((var_12 ? var_8 : 5030636874011511901)) : 31));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_12 [i_2 + 2] [i_2 + 3] [i_2 + 1] [i_2] = ((arr_7 [i_0] [i_2]) ? (((19752 ? 0 : 38374))) : (((arr_8 [i_0] [i_0] [i_1] [i_2 + 3] [1] [i_2]) ? var_12 : var_6)));
                        var_19 = (((arr_0 [i_1] [i_1]) ? (arr_3 [i_3]) : var_5));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_20 = (45784 ? 1212237128 : 4095);
            var_21 |= 2147483647;
        }
    }
    for (int i_5 = 3; i_5 < 21;i_5 += 1)
    {
        var_22 = ((254 ? 333811883112169585 : 232));
        var_23 = (min(var_23, ((min((((1054168504 ? var_3 : 14603))), (((min(var_3, var_13)))))))));
        arr_18 [i_5] = (((((-127 - 1) ? -13232 : 2825079629764639192))));
    }
    var_24 -= ((min(var_9, ((10423 ? 61441 : 3072)))));
    #pragma endscop
}
