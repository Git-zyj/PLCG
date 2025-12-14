/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = (((((((60754 ? var_9 : 15817986497485740916)) * (arr_4 [i_0] [i_0] [i_2])))) ? (((((arr_3 [13] [i_1]) > var_13)) ? 687738422911827535 : ((1 ? var_0 : 17759005650797724072)))) : ((min(((min((arr_2 [i_1] [i_1]), var_5))), (max(2147483647, var_15)))))));
                            var_18 = ((((-1076704912 ? ((max(57373, 0))) : (arr_0 [i_0]))) * ((max((arr_2 [i_1] [i_3]), (arr_2 [i_1] [i_1]))))));
                            arr_9 [1] [i_1] [i_2] [i_3] [i_3] = ((((((((1 ? 0 : -1186030402))) ? (((arr_0 [i_0]) ? var_15 : var_2)) : ((((222 || (arr_8 [i_1] [i_1])))))))) ? ((((!(arr_0 [i_1]))))) : var_10));
                            var_19 = (min(var_19, 0));
                        }
                    }
                }
                var_20 = (max(var_20, ((max((((arr_6 [i_1] [i_1] [i_0]) ? (arr_6 [i_0] [i_1] [i_0]) : (arr_6 [i_0] [i_0] [5]))), ((max(0, -497701084))))))));
                var_21 = (max(var_21, -2733));
            }
        }
    }
    var_22 = (((((((1 ? 172 : var_7))) >= (max(0, 17759005650797724081)))) ? ((var_13 ? var_14 : 1)) : ((max(((0 ? -25832 : 1)), 19162)))));
    #pragma endscop
}
