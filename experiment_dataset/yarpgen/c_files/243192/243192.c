/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((96 ? ((((((0 ? var_0 : var_1))) || 2234191442))) : ((-1074295237 ? (!var_10) : 93))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_0] [i_3] [i_3] = (((arr_6 [i_0]) / (((((max(var_6, var_8))) ? (93 * 842) : ((min((arr_1 [i_3] [i_3]), var_2))))))));
                            var_12 = (((var_7 | var_1) ? ((((arr_1 [i_1] [6]) == (var_0 && 9774926396996571947)))) : var_2));
                            var_13 = ((((var_2 ? 107 : (arr_3 [i_1] [i_3])))) ? (((arr_3 [i_1] [i_1]) ? var_7 : var_0)) : ((64694 ? 107 : 4)));
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] = (((((max(var_5, 8440627720833574184)))) ? ((((min(-102, 9774926396996571936))) ? var_4 : (arr_4 [i_0] [i_1] [1] [i_3]))) : (((max((arr_1 [i_0] [i_0]), (arr_7 [10] [10] [i_1] [10] [10] [i_1 + 2])))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_16 [i_1] [i_4] [i_1] = (((-598224650 + 87) ? (((~8671817676712979668) ? (((arr_12 [i_4] [i_1 - 3] [i_0]) ? var_2 : var_0)) : (((arr_7 [i_0] [i_0] [8] [i_0] [i_0] [i_0]) ? (arr_13 [i_1] [i_1] [i_1]) : 91)))) : (((!((max(var_1, 1))))))));
                            var_14 = ((((((var_6 ? (arr_3 [i_1] [i_1]) : var_3)) != (((var_7 == (arr_11 [i_0] [i_1] [i_4] [i_5])))))) && ((((64701 - var_7) + (max((arr_8 [i_0] [i_0] [i_0]), var_3)))))));
                            var_15 = ((min((arr_6 [i_1 - 1]), var_9)) == ((((!(arr_6 [i_1 + 2]))))));
                            var_16 = ((((max((arr_2 [i_1 - 2] [i_1] [i_1 - 3]), -85))) >= ((((max(var_4, -2147483628)) != (((arr_5 [i_0] [i_1 + 1] [1]) & 8671817676712979662)))))));
                        }
                    }
                }
                var_17 = (max(((19 ? (((((arr_3 [i_1] [i_1]) || 164)))) : ((0 ? 8645269053382708644 : 4021906770)))), var_0));
            }
        }
    }
    #pragma endscop
}
