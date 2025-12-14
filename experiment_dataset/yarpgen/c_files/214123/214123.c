/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_18 -= (arr_5 [3] [i_1]);
                        var_19 &= ((((~((var_14 ? var_6 : -391785835869366469)))) <= (((((((arr_6 [i_3]) > (arr_1 [i_0] [8])))) * ((var_10 ? (arr_0 [i_2] [i_1]) : 148)))))));
                    }
                    for (int i_4 = 3; i_4 < 6;i_4 += 1)
                    {
                        var_20 = max((18027107312419928704 | 419636761289622911), (~419636761289622911));
                        var_21 = 419636761289622912;
                        var_22 |= (10912997687236943465 ? -1886489285 : (min((max((arr_1 [i_1] [8]), 8572833050486757834)), var_16)));
                    }
                    var_23 = (((((-25643 ? (arr_6 [4]) : (arr_4 [i_2] [i_1] [1]))) == (arr_6 [i_1]))));

                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        var_24 ^= (((((((((arr_6 [i_5]) + 2147483647)) << (var_7 - 72))))) ? (min(((var_3 ? (arr_1 [i_0] [3]) : (arr_10 [i_0] [i_0] [6] [i_0] [i_0] [i_0]))), (arr_3 [i_1] [i_5 + 2]))) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_25 = ((+(min((~4331302564455188797), (~12738175057957762637)))));
                        arr_14 [i_5] [i_5] [i_5] [i_2] [8] [i_0] = (((14 >> 0) ? 127 : 0));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_1] [i_2] [i_1] = (((((((arr_15 [i_0] [i_1] [1] [i_6]) ? var_9 : (arr_12 [i_0] [i_2] [5] [i_2] [i_2] [i_1]))) % (arr_17 [i_0] [i_0] [i_2] [i_6])))) ? var_9 : (min(-4331302564455188808, (min(1448934911, 6955146626543350629)))));
                        var_26 = ((~(max((arr_2 [i_0] [i_1]), (~9873911023222793781)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_27 &= (108 >= (arr_0 [i_0] [i_1]));
                        var_28 &= ((9873911023222793782 ? 1 : 1));
                    }
                    arr_21 [i_1] [3] [2] [i_0] = ((!((!(((arr_19 [3] [i_1] [i_1] [i_1] [3]) || 1148640154))))));
                }
            }
        }
    }
    var_29 &= (((min((max(1469252577, 1)), ((152 ? var_17 : 0)))) << (var_13 - 120445979)));
    #pragma endscop
}
