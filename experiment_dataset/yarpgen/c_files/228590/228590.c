/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = -65535;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_22 |= 7154539281935439771;
                    var_23 *= (min(-23772, -7154539281935439771));
                }
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    arr_11 [i_0] [4] [17] = (((53097 ? -5702167223927967117 : -86)));
                    arr_12 [i_0] [i_0] [i_0] = ((((((min(7154539281935439771, 0)) & -18069))) ? (max(12463562627686027694, -32763)) : ((max((~7154539281935439771), -7154539281935439771)))));
                }
                for (int i_4 = 4; i_4 < 20;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_24 = (max(var_24, (--5941588682235886331)));
                        var_25 ^= (max((((0 ? 2730 : 42391))), (max(9223372036854775807, -7154539281935439771))));
                    }
                    var_26 -= (!0);
                    var_27 += (!7154539281935439771);
                }
                for (int i_6 = 4; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    arr_21 [i_0] = -15902;
                    var_28 = (min(var_28, (-8411292124918525877 / 8411292124918525846)));
                }
                var_29 *= (((max(8848683566977014292, -9223372036854775807)) >= (1 | 23118)));
                var_30 = 9223372036854775807;
            }
        }
    }
    #pragma endscop
}
