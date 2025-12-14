/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_14 & (max(var_1, var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_0] [i_1] [i_2]);
                    var_18 *= (((((49013 > ((var_15 ? -5158746539808105281 : (arr_5 [i_0] [i_1] [i_0])))))) % 14243981023958119044));

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_0] = (((((~(~var_8)))) ? (min(72, var_15)) : (8857212938856456990 / 37777)));
                        var_19 = ((((~(((!(arr_8 [i_0] [i_1] [i_0] [i_3]))))))) >= ((var_9 / (arr_3 [i_1] [i_2]))));
                        var_20 = (min((((!(~var_15)))), (((arr_2 [i_0]) ? (min((arr_0 [i_0]), -32767)) : (arr_7 [i_0] [i_1] [i_2])))));
                    }
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_4 + 1] |= (min(((((~-106) >> (((arr_11 [i_0] [i_0] [i_1] [i_0] [6] [i_1]) >> (2482744337 - 2482744318)))))), (((((-1502937975881702131 ? (arr_6 [i_4 - 2] [i_2] [i_0] [i_0]) : 18))) ? ((((arr_6 [i_0] [i_1] [i_2] [i_4 + 1]) * 163))) : var_15))));
                        arr_18 [i_4] [i_2] [11] [i_0] |= ((((73 >= (((arr_8 [i_0] [i_1] [i_2] [i_4]) ? (arr_13 [i_4 - 2] [i_1] [i_1] [17] [6] [i_4]) : var_13)))) ? (min((3151837242 * var_0), 1)) : (var_4 > var_4)));
                        var_21 = ((max(-3151837242, 1568666137)));
                    }
                    arr_19 [i_0] = ((((((!(arr_16 [i_2] [i_1] [i_0]))))) != (((arr_16 [i_0] [i_1] [i_2]) ? (~var_11) : (((-127 - 1) ? (arr_0 [14]) : 2887400165588066675))))));
                    var_22 = (min(var_22, (((((var_12 ? -695664530 : var_5)) ^ ((min(176, (arr_12 [i_0] [i_1])))))))));
                }
            }
        }
    }
    var_23 = var_9;
    #pragma endscop
}
