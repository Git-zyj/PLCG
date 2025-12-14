/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = ((var_6 > (arr_2 [i_0 + 1])));
                    var_14 = ((8057590967063110800 ? ((((arr_7 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0]) ^ 65525))) : (65521 % var_11)));
                    arr_10 [i_0] = (((((arr_5 [i_0] [i_0 + 2] [i_0 - 3]) != 65503)) ? ((var_6 / (arr_5 [i_0] [i_0] [i_0 + 2]))) : 28846));
                    var_15 = ((28843 ? ((~(arr_9 [i_0 - 3] [i_0 + 2]))) : (var_6 && var_12)));
                }
            }
        }
    }
    var_16 = ((var_12 ? var_10 : (var_2 + var_9)));

    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        var_17 = (((((((36688 ? 65535 : var_12)) & (((84845358021290872 ? 38548 : var_5)))))) ? ((84845358021290902 << (((arr_12 [i_3]) - 7373)))) : (((((max(-260136600, 20))) | (var_9 & var_8))))));
        var_18 = -9223372036854775800;
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_19 = var_0;
                    var_20 -= 38543;
                    arr_21 [i_6] [i_5] [14] [i_6] = 36697;
                    var_21 = (((((((max(var_2, 6846218922584433681))) ? ((var_3 ? var_9 : 4294967295)) : var_10))) - (min(var_12, (arr_8 [i_4] [i_4])))));
                }
            }
        }
        var_22 = 38548;
        var_23 |= var_3;
        var_24 += min(((min(97, 4294967278))), (((arr_12 [i_4]) ? var_0 : 84845358021290879)));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            {
                var_25 = -6114844443284607405;
                arr_27 [i_8] = ((((!(arr_23 [i_7] [i_8]))) ? (((((arr_1 [i_7] [i_7]) <= var_5)))) : (((arr_23 [i_8] [i_7]) ? var_12 : (arr_1 [i_7] [i_7])))));
            }
        }
    }
    #pragma endscop
}
