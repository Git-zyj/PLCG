/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = ((1 ? 877949182098307259 : 2147483647));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = (4294967284 != 4166711287);

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_17 &= -877949182098307259;
                arr_11 [i_0] [i_2] [i_2] = ((0 ? -877949182098307259 : 3076234502));
                var_18 &= (((1218732764 <= 1) & (0 % 3076234497)));
            }
        }
        var_19 = (-3403542120825858727 <= 1);
        arr_12 [i_0] [i_0] = (-49349323 == 1);
    }
    var_20 = ((((var_12 * (((34515 ? 0 : 24182))))) * ((((10355 / -1410088611) ? (17 / 41437) : (39 / 65535))))));
    var_21 = (var_3 <= (max(var_13, ((max(3, -33554432))))));
    #pragma endscop
}
