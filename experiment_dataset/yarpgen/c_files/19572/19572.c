/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((max((max(var_9, ((max(-4145948013325018799, -790252923))))), ((((4145948013325018799 ^ 19) ? 790252933 : (~-1931126279)))))))));
    var_12 -= ((var_10 ? -209 : 124));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_13 *= var_3;
        var_14 = (~var_4);

        for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_15 = (((((~((var_4 ? var_4 : 93))))) ? (((((4145948013325018777 ? 1931126278 : 59)) == var_10))) : 1825677725));
            var_16 *= ((~(~var_9)));
            var_17 = (((((((18446744073709551615 ? -113 : 1335464531255612496))) ? -8428732613349683077 : var_8)) <= -1931126277));
        }
        for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_18 = 10704632517920602380;
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_19 = (-696411272 / -71);
                            arr_17 [i_0] = ((~(((((1 ? 1 : 21))) ? 1 : (~9007199254740991)))));
                            arr_18 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1] = (!-1);
                            arr_19 [i_0] [i_5] = 1931126276;
                        }
                    }
                }
            }
            var_20 = 11692078992850934106;
            arr_20 [i_0] [i_0] = (min(var_2, (((-95 * var_10) | (-25919 <= 482583131)))));
            arr_21 [i_0] = ((max(3008471635, var_7)));
        }
    }
    var_21 = ((max(-4145948013325018799, (((-1 ? -1 : 1))))));
    #pragma endscop
}
