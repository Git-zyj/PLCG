/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 += ((((((max(var_7, 156422228))) || (~var_7))) ? ((((~31) && (~var_6)))) : ((((var_7 ? 17179860992 : var_1))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_1] [2] [2] |= (((arr_5 [i_0] [i_1] [i_1] [18]) | (arr_4 [i_1])));
                    var_20 = (min(var_20, (((arr_2 [i_1]) * (((((arr_5 [8] [8] [i_1] [8]) < ((((arr_6 [i_0] [1] [i_2 - 1] [i_2 + 1]) != var_8)))))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = (arr_7 [i_0] [i_1] [i_2 + 1]);
                }
            }
        }
        var_21 = (max(var_21, var_8));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_22 = ((((2083953210 < (arr_7 [i_3] [1] [i_3]))) && ((((~-35) & var_13)))));
        arr_13 [i_3] [i_3] = (((var_2 >= 16) ? (((var_8 & -40) * (6686708454080973382 <= 31))) : ((max((1574028494 == var_15), 37)))));
        arr_14 [i_3] [i_3] = ((((~(arr_11 [i_3])))) ? (arr_2 [i_3]) : ((((arr_1 [i_3]) | (arr_1 [i_3])))));
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                var_23 = (min(var_23, ((var_5 > (min((min(-13839, 944466396)), (((4126775259484933534 ? -1100768339 : 39)))))))));
                arr_20 [i_4] = (arr_16 [i_4]);
            }
        }
    }
    var_24 += (((((((2196789388 ? -13228 : 31)) + (1574028494 <= 42)))) ? ((var_9 * (var_7 > var_12))) : ((var_12 ? (13228 && var_8) : ((min(var_15, 1)))))));
    #pragma endscop
}
