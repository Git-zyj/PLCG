/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min((var_10 == var_15), ((7936 ? 47086 : 1)))) != (!var_14)));
    var_18 = (((((min(4294967295, var_3))) ? (((-(-32767 - 1)))) : ((15450991939092840607 ? var_10 : var_8)))) == ((((!(((var_6 << (var_12 - 1345568061)))))))));
    var_19 = (min(var_19, (((((((14 < (max(-19768, 8481712988009255668)))))) > (min((4503324749463552 * 1), -12964)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = 18442240748960088064;
                                var_21 = (-32 / 51);
                                var_22 = (((((((var_8 ? 1277411738143275485 : var_5))) ? var_13 : ((9968945418966808068 ? (arr_10 [i_0] [1] [i_0] [i_0] [i_0 + 1]) : 31)))) >> (((!(var_2 ^ -1033399819))))));
                                var_23 = (min(var_23, 210));
                                var_24 = (212 && -106);
                            }
                        }
                    }
                    arr_12 [i_2] [i_0] [i_0] [11] = ((min(((255 & (arr_5 [i_0] [19] [i_2] [i_2]))), ((46 + (arr_5 [0] [i_1] [i_2] [2]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            {
                var_25 = (max((max((8481712988009255668 / 12313051990302762905), (18442240748960088064 && var_1))), (~0)));
                var_26 = (max((((((min(var_13, var_15))) ? (((arr_13 [i_5 - 3]) ? -1 : 32767)) : var_1))), (var_4 ^ -93)));
            }
        }
    }
    #pragma endscop
}
