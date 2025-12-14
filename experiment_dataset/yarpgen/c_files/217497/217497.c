/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((-28712 - -var_8), var_10));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_15 += (!1120054403);

                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    arr_7 [i_0 - 1] [i_1] = 1120054415;

                    for (int i_3 = 1; i_3 < 6;i_3 += 1)
                    {
                        var_16 = ((12345301141820182205 ? ((1024 ? 279275953455104 : (((1 ? 1 : 1))))) : 5260694190705294158));
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((~((((5260694190705294142 ? var_3 : -5260694190705294158)) << ((((-4721206459425832424 ? -24 : var_1)) + 73))))));
                        arr_12 [i_0] [i_0] [i_1] [i_1] = (max(1120054403, (((-32767 - 1) ? (max(131071, -1202547940)) : ((1 ? 1 : var_3))))));
                        var_17 = (min(var_17, ((min(1, 206927599)))));
                    }
                    for (int i_4 = 3; i_4 < 6;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_1] = (min(-206927599, (arr_0 [i_0 - 1])));
                        var_18 = 2097151;
                    }
                    for (int i_5 = 3; i_5 < 6;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] [i_1] [i_5 + 1] = (((((((max(var_2, -9223372036854775786))) ? 32767 : var_0))) ? (~12940) : ((max(32753, -32761)))));
                        var_19 = ((((max(var_2, 32760))) ? (((!var_1) ? (!-32761) : (-1 && var_3))) : ((min(3, 40)))));
                        var_20 += (((arr_13 [i_1] [i_1]) ? (((((0 ? 524256 : 524256))) ? (max((arr_15 [i_0 - 1] [i_0 - 1] [i_5 + 2]), -9)) : 1)) : (~0)));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 4; i_6 < 18;i_6 += 1)
    {
        arr_24 [i_6] [i_6] = (-5260694190705294158 | var_10);
        var_21 = 279275953455104;
        var_22 -= (!-29693);
    }
    #pragma endscop
}
