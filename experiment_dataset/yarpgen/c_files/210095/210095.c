/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 48792;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_15 = (((((var_10 ? 16743 : 3750896444))) || var_11));
                        var_16 = ((~(arr_0 [i_0 - 2] [i_2 + 1])));
                    }
                    for (int i_4 = 3; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_17 = ((((((4194303 ? var_6 : 1)) / ((((var_3 >= (arr_4 [i_0 + 2] [i_1] [i_4 - 2]))))))) | 4187951096));
                        var_18 &= (max((((arr_4 [i_0] [i_0 - 2] [i_0 - 2]) ? (arr_4 [i_0 - 1] [12] [i_0 - 2]) : (arr_4 [i_0] [i_0] [i_0 - 2]))), (var_10 < var_4)));
                    }
                    var_19 -= (((arr_9 [i_0 + 1] [13] [i_0 - 2] [i_0 - 1] [i_0 - 2]) ? ((10384 ? 9223372036854775807 : 48815)) : (var_5 > var_11)));
                    var_20 = (((((10 ? (((-32767 - 1) ? 72055395014672384 : (arr_10 [i_0 - 1] [i_1] [i_2 - 2] [i_0]))) : 12421360666399749419))) || (((55975 - (arr_3 [i_0 - 2] [3]))))));
                }
            }
        }
    }
    var_21 -= var_12;
    var_22 -= ((((min((-127 - 1), ((-62 ? -1544 : 19028))))) ^ var_6));
    #pragma endscop
}
