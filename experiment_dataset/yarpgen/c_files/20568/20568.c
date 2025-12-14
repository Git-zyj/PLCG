/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_14));
    var_21 = ((((((((12183 ? -108 : 9223372036854775784))) ? var_16 : var_7))) ? (((((var_7 ? var_4 : var_1))) ? (((var_15 ? var_3 : var_2))) : var_14)) : var_5));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_22 = (-99 ? -1584948132 : ((-66 ? 53344 : 15)));
        var_23 = (max(var_23, var_18));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] = ((152 ? -118 : 61));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_14 [i_3] [i_3 + 1] [10] [i_3] [i_1] [i_3] = (((((7420706907450687779 ? 10 : 10))) ? 4294967295 : (((99 ? 178 : -506406501)))));
                        var_24 = var_17;
                        var_25 = (min(var_25, ((((((var_19 ? var_5 : var_0))) ? ((18446744073709551615 ? 16916289449691419406 : 1344341098)) : (((var_1 ? var_4 : var_17))))))));
                    }
                }
            }
        }
        var_26 = ((8 ? -122 : 16916289449691419405));
        var_27 = (min(var_27, var_1));
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                arr_20 [i_6] [i_5 - 2] = var_8;
                var_28 = ((6015060248931765594 ? -122 : 598390656));
            }
        }
    }
    #pragma endscop
}
