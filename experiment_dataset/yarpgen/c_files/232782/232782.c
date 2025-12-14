/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (min(var_19, ((((1163433140 > 34872) ? (arr_0 [i_0]) : (((!(arr_1 [i_0])))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 ^= 3131534138;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_3 + 2] [i_2] [i_1] [i_1] = ((~((+(min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), 1163433131))))));
                                var_21 = (max(var_21, ((((3131534168 ? ((207 ? -21369983 : (arr_6 [i_4] [14] [23] [i_0])) : var_12)))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_2] [i_1] [i_0] |= (1163433127 + (((((1163433121 ? -1 : var_5)) + var_10))));
                    var_22 *= ((min((~63851), -19581)));
                    arr_16 [i_2] [i_1] [i_1] [i_0] = ((((!(((var_2 ? 631170000 : 435613401))))) ? (((-1581531355 ? 136 : 0))) : (~3131534150)));
                }
            }
        }
        var_23 += (min((((!(!var_3)))), (((((252 ? var_16 : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_1 [i_0]) : ((max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        arr_19 [i_5] = ((!(((~(arr_12 [i_5] [i_5] [i_5] [i_5] [i_5]))))));
        arr_20 [i_5] = (((~1) ? (arr_6 [i_5 - 1] [i_5] [17] [i_5]) : ((15031 ? 21369977 : -1))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = ((((((arr_9 [i_6] [i_6] [i_6] [i_6] [2] [i_6]) ? 9225 : var_7))) ? (!-1) : 68719476735));
        var_24 = (max(var_24, ((((arr_8 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) ? (~248) : ((11 ? 245 : 7976618355264896544)))))));
        arr_24 [i_6] = ((((((arr_9 [1] [i_6] [2] [i_6] [1] [1]) & var_18))) ? (~var_1) : (((arr_0 [i_6]) ^ (arr_8 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))));
    }
    var_25 = (((((~(max(4047697407848813705, var_10))))) ? (((var_12 ? var_1 : var_18))) : (-21369998 ^ 7976618355264896531)));
    var_26 = ((((max((4294967295 | var_16), (var_17 ^ -21369998)))) ? (((7976618355264896544 && var_6) ? (!-21369977) : (!var_8))) : (-1752034785 - 0)));
    var_27 += ((((756 ? ((var_3 ? 19568 : var_4)) : -var_1)) > ((12424 ? 1 : -585153398))));
    var_28 = (max(var_28, ((~((~((var_14 ? var_15 : var_1))))))));
    #pragma endscop
}
