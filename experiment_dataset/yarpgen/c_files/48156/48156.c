/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = ((((min(var_8, (max(var_7, (arr_3 [i_1] [i_1] [3])))))) ? ((3098166129 ? (arr_3 [i_1] [i_0] [i_0]) : 936033672915435569)) : ((((arr_1 [i_0]) ? (arr_1 [i_0]) : ((-(arr_2 [i_1] [4] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_11 = (max(var_11, (((((min(((((arr_10 [i_3]) ? var_5 : var_3))), var_1))) ? -18247 : var_7)))));
                            var_12 = (~((((min((arr_0 [i_3] [i_1]), var_5))) ? var_4 : var_0)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_13 = (min(var_13, (((-979212141464812196 == (min((arr_3 [i_0] [i_4 - 1] [i_4]), -8749072911952813240)))))));
                            var_14 = var_5;
                            var_15 = (arr_3 [i_0] [i_4] [i_5]);
                            arr_16 [3] [i_1] [i_1] [3] = max((var_9 % 1196801166), var_1);
                            var_16 = (max(var_16, ((max((24816 && 1196801158), (((!(((3098166129 ? var_2 : (arr_9 [i_0] [i_0] [i_0] [i_0] [1] [i_0]))))))))))));
                        }
                    }
                }
                arr_17 [i_0] [i_1] = (((((~(max((arr_3 [i_1] [5] [10]), var_0))))) ? (((1196801183 ^ (arr_6 [7])))) : (arr_6 [i_0])));
            }
        }
    }
    var_17 = -1561934921;
    #pragma endscop
}
