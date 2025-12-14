/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_10 = var_9;
                    var_11 = (max(var_11, (min((~255), (((~84) ? (arr_6 [i_0] [i_1] [i_2]) : ((~(arr_3 [i_0])))))))));
                    var_12 = (min(var_12, (!1)));
                    var_13 ^= 1;
                }
            }
        }
        arr_7 [i_0] = 134217727;
        var_14 = (min((arr_1 [i_0]), ((18014398507384832 ^ ((64 ? 53 : -134217728))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_10 [i_3] = (((((416576388 ? var_4 : 0))) ? (!var_5) : var_4));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_15 = ((~((max(39952, 1)))));
            arr_13 [6] [i_4] [i_4] = (23911 ? 208 : -134217721);
            arr_14 [i_3] [i_4] = var_5;
            var_16 = (min(var_16, (!18014398507384832)));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_17 [i_3] [i_3] = ((max((var_8 & 11645), (~1440690930463357136))));
            arr_18 [0] [8] [8] &= ((+(((((arr_9 [i_5]) << (var_6 - 8347873253215281141)))))));
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 23;i_6 += 1)
        {
            var_17 -= (-32767 - 1);
            arr_22 [i_3] [i_6] &= (735712370 / var_3);
        }
    }
    var_18 = (!14365586723455061944);
    var_19 = (min(var_19, var_7));
    var_20 *= (((max((max(12, 3297393020)), (134217720 * 12))) << (65535 - 65512)));
    var_21 = (((((min(122, 0)))) ? var_5 : var_5));
    #pragma endscop
}
