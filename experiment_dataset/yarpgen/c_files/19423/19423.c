/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (((((((((-20273 + 2147483647) >> (20272 - 20251)))) ? 5527937221560281615 : (((var_9 ? 3408849431 : var_8)))))) ? ((5527937221560281615 ? (var_3 == 1) : ((-972734821656164363 ? 46796 : var_2)))) : ((((((var_1 ? var_5 : -1434170793001074772)) == (((20272 ? var_7 : 1)))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2] = (((((var_5 ? var_1 : ((var_1 ? var_0 : var_5))))) ? 1 : 11203));
                    var_11 |= 972734821656164362;
                }
            }
        }
        arr_8 [i_0] [i_0] = 0;
    }
    for (int i_3 = 1; i_3 < 24;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    {
                        var_12 = (min(var_12, 972734821656164362));
                        var_13 -= var_3;
                        var_14 = ((-282927664877214335 == (((((var_6 >> (var_9 + 29021)))) ? (min(var_4, 18739)) : (((min(var_1, -26120))))))));
                    }
                }
            }
        }
        arr_21 [i_3] [i_3] = (var_1 ? var_1 : ((var_7 ? (min(6374384759274307480, -14)) : 72057594037927928)));
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_15 = 0;
        var_16 = ((((min((var_7 ^ var_1), (var_5 >> 1)))) ? ((min((0 == 1), var_0))) : (((var_1 ? var_9 : var_10)))));

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_17 = ((((((3990472931 ? var_9 : (var_10 << 0))) + 9223372036854775807)) << (((((((262143 ? 7900038104378777653 : var_8))) ? var_4 : var_1)) - 1338838687973595363))));
            var_18 -= var_2;
            var_19 = var_2;
            var_20 = (max(var_20, 20934));
        }
    }
    var_21 = ((((((var_8 == var_3) ? 8388027501248798796 : ((-3428099354923556051 ? var_8 : var_4))))) ? var_5 : (((2247 ? (var_2 <= -11189) : (var_0 == var_1))))));
    var_22 = 8191;
    var_23 = (max(var_10, (((var_7 || (((var_1 ? -648448338 : var_7))))))));
    #pragma endscop
}
