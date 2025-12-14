/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 = (((!var_8) && (128 % -9064608902339940344)));
    var_21 = var_11;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_22 = (min(var_22, ((((arr_1 [6] [i_0 + 2]) ? (arr_1 [4] [i_0 - 1]) : (arr_1 [8] [i_0 - 1]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_23 = (min(var_23, 1));
                    var_24 = ((((arr_0 [i_0] [i_2]) ? 3312346699287227155 : 5512601057525526775)));
                    var_25 -= ((arr_6 [i_0] [i_1]) ? (arr_5 [1] [i_1 - 1] [i_2]) : (1 + 2354658866));
                    var_26 = (1 + 12934143016184024854);
                }
            }
        }
        var_27 = -31;
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_28 = (min(((+(max((arr_9 [i_3] [i_3]), 6755399441055744)))), ((96 ? -3837254085568403029 : 830339453))));
        var_29 = (min(var_29, var_5));
        var_30 = -3063987982471746051;

        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            arr_12 [i_3] = ((var_13 ? ((((!(arr_11 [i_3] [1] [12]))))) : (((((var_4 ? var_2 : 24))) ? ((7944747193720464600 ? var_15 : 12898601127989188666)) : ((min(1940308434, 31)))))));
            arr_13 [1] [1] [i_4] = ((!var_10) ? (((arr_11 [i_3] [i_3] [i_4 + 2]) ? (arr_9 [i_3] [i_4 - 1]) : 124)) : (!var_16));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_31 = ((((288230375077969920 < (arr_8 [i_3] [i_5]))) && (arr_8 [1] [i_5])));
            var_32 = (min(var_32, (-72 / -42)));
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_18 [i_6] [i_6] = ((215 ? (arr_16 [i_6]) : 3271662800));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    arr_23 [i_7] [i_6] = ((+(max((arr_16 [i_6]), (arr_22 [i_6])))));
                    arr_24 [i_6] [i_6] [i_7] [1] = (arr_16 [i_6]);
                    var_33 = ((var_5 ? ((-(var_18 + 17178820608))) : ((var_9 - (arr_16 [i_6])))));
                }
            }
        }
        var_34 = (((var_12 % -53) ? var_12 : (min((max(var_3, 1055531162664960)), -3303))));
    }
    for (int i_9 = 1; i_9 < 12;i_9 += 1)
    {
        arr_28 [i_9] = (((min((arr_1 [i_9] [i_9]), ((var_13 ? (arr_11 [3] [3] [3]) : var_0))))) ? (((~var_4) & (31 & 31))) : (~1));
        arr_29 [i_9] = ((((min((1940308434 * 1), var_14))) && (!0)));
    }
    var_35 = var_18;
    #pragma endscop
}
