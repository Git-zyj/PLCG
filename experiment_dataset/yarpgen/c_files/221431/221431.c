/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((3046348464 ? 18257507002593457373 : 1248618832));
    var_15 = (max(var_15, ((((var_12 && var_7) != (max(var_9, 6591)))))));
    var_16 = (min(var_16, ((((min(-var_9, var_3))) ? var_2 : (min(((var_12 ? 11968189222835810393 : var_4)), (var_13 && var_13)))))));
    var_17 = ((var_12 ? ((((max(var_10, var_10))) ? (min(var_2, var_9)) : ((var_4 ? 3046348464 : var_9)))) : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_18 = arr_2 [i_0] [i_0];
                            var_19 -= var_5;
                        }
                    }
                }
                arr_11 [i_0] [14] = ((var_1 ? (((min(var_9, (arr_10 [i_0] [i_0] [i_0] [i_0]))) ^ 4294967287)) : (max(var_13, var_9))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_20 = min((min((arr_12 [2] [14] [i_4]), (((9 ? var_8 : var_9))))), (((-(max(var_8, (arr_1 [i_0])))))));
                            arr_17 [6] [i_1] [i_4] [i_4] [i_5] = ((((((((var_11 ? (arr_0 [i_0]) : var_4))) ? 18090143488020657301 : (!6707166666680558001)))) ? var_10 : (((((4294967263 ? var_11 : var_3))) ? 2803445186 : (arr_15 [i_0] [i_1] [17] [i_1])))));
                            arr_18 [13] [i_0] [13] [i_4] [i_5] = (~4294967287);
                        }
                    }
                }
                var_21 = (min(var_21, ((((~(min(var_13, var_6))))))));
                var_22 ^= ((((((arr_14 [i_0] [i_1]) ? (arr_3 [12] [i_0] [i_0]) : var_3))) ? ((18090143488020657298 ? 1248618827 : 4294967290)) : (((min((arr_3 [i_0] [i_0] [i_1]), (arr_14 [i_0] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
