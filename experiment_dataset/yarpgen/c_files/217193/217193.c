/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(77, 0));
    var_12 = ((((1 ? 79 : 7441708306146164537)) != var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_13 ^= min(((max((var_4 && var_9), (var_4 + var_4)))), 1883566406773421430);
                var_14 = (max(var_14, ((max((((((arr_2 [i_0] [i_1]) ? var_1 : 1)) * ((1 * (arr_0 [i_1 + 2] [i_1]))))), ((max((arr_4 [i_1 - 3]), ((max(var_4, (arr_1 [i_0] [i_1]))))))))))));
                var_15 = (((min((!var_5), ((18446744073709551614 ? 18446744073709551615 : var_6)))) + ((((~(arr_5 [i_1] [i_1] [i_0])))))));

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] = ((((-1520461335 ? -10341 : 614189237))) ? var_5 : var_2);
                                var_16 = (arr_6 [i_0] [i_2]);
                                arr_14 [i_0] [i_1] [i_2] [i_0] = (((((1 ? 9490061942586264163 : 4979884404797350534))) ? var_5 : (var_8 != 65524)));
                            }
                        }
                    }
                    var_17 = ((var_8 ? ((max((205 || 0), ((5926673550021642701 ? 4079 : 19))))) : ((var_5 & ((var_0 ? 73 : var_7))))));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_17 [i_0] [i_0] [i_0] = (((arr_4 [i_1]) + ((1 | (((arr_4 [22]) / 1249400741))))));

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_18 = (max(var_18, var_1));
                        var_19 = (min(var_19, 0));
                    }
                }
            }
        }
    }
    var_20 = ((13370514276816107063 ? (((var_4 ? var_7 : 0))) : ((max(24, -1)))));
    var_21 = (max(var_3, (((13370514276816107054 % var_3) ? ((2 ? var_5 : var_4)) : (127 == var_7)))));
    #pragma endscop
}
