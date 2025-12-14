/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((!var_9) & (((var_4 & (-14783 % -32))))));
    var_12 -= ((-(~var_8)));
    var_13 |= var_2;
    var_14 |= (~46930);

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_15 = (min(((((((arr_0 [i_0]) | var_5))) & ((2541 | (arr_2 [i_0]))))), var_2));
        var_16 = (max(11262751119249313212, (((21 ? 43 : (-32767 - 1))))));
        var_17 = 32756;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_18 += ((((((-50 * (arr_5 [i_1])))) ? (((-32 ? 32767 : var_0))) : (var_2 * -506063051))) * (min(var_9, var_3)));
        var_19 |= ((+((var_0 ? (arr_2 [14]) : -2021953013347242327))));
        arr_6 [i_1] = 28;
        arr_7 [i_1] [i_1] &= ((((max((arr_0 [i_1]), ((947232152560783754 ? var_0 : (arr_2 [12])))))) ? (arr_2 [6]) : (((arr_2 [8]) | (arr_2 [6])))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_11 [i_2] = 3584;
        var_20 = (max(var_20, (((-13245 ? 5443715678541278431 : -32)))));
        var_21 -= -1;
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_22 &= (arr_18 [i_3] [i_4]);
                    var_23 = 3584;
                    var_24 |= (((~var_1) ? (((max(var_1, var_8)))) : (((((9727800944084943801 ? 13256 : 0))) ? var_2 : var_7))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    var_25 -= (((!(arr_17 [i_3] [i_6] [i_7]))));
                    var_26 = (((((!(arr_13 [i_6] [i_7])))) * (((!(arr_20 [i_3]))))));
                }
            }
        }
    }
    #pragma endscop
}
