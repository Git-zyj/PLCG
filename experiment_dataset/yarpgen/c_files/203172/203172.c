/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((-7746 == (~var_8))) || (74 | 0));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (min(var_16, ((!(64 == -22992)))));
        var_17 = (min(var_17, (((((0 << (173 - 170))) ^ 338422279)))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_18 |= (((((41692 ? -30880 : 48))) ? (arr_6 [i_3] [i_1]) : (((22992 ? 5701 : 1009368010)))));
                        arr_15 [i_1] [i_2] [i_2] [i_2] = ((~((-48 ? (-26 && 3970940509) : 262143))));
                        var_19 = (~197073185);
                        var_20 ^= ((30879 ? ((((~(arr_12 [i_1] [i_2] [i_3] [2] [i_4]))) / (-3 * 32758))) : (((~(max(-1293970, -2)))))));
                    }
                }
            }
        }
        arr_16 [15] = -30720;
        arr_17 [i_1] [i_1] = ((!((((((9576211173357813556 ? (arr_13 [i_1] [i_1]) : 0))) ? -4503599090499584 : 32)))));
    }
    var_21 |= (~var_9);
    var_22 = ((var_8 ? ((~(min(var_9, 12507746133533211352)))) : (((((var_6 ? -19174 : -19174))) ? ((min(var_14, var_3))) : var_11))));
    var_23 |= ((((((((-2 ? 17895 : 48))) ? (var_4 <= var_0) : ((var_5 ? var_14 : var_14))))) ? var_10 : (max(((var_12 ? 6286 : -1824091390)), 48))));
    #pragma endscop
}
