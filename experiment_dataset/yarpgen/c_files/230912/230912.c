/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (max(49790, 1));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_13 = ((((((arr_4 [i_2] [i_2] [i_2]) ? 413100981 : (arr_8 [i_2] [i_2] [i_1] [i_2])))) ? (((~(~var_8)))) : (min(((max(var_11, (arr_7 [i_3] [i_2] [i_0])))), ((-(arr_8 [i_0] [i_0] [i_2] [i_2])))))));
                        var_14 = 958180668;
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            arr_16 [i_2] [i_1] [i_2] [i_2] = var_6;
                            var_15 = var_9;
                            var_16 = 15743;
                        }
                        var_17 = 1008;

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_18 = ((((1 ? 11 : -4738363203777690179))) ? 1 : ((+(min((arr_6 [i_1] [i_2] [i_4] [i_6]), var_8)))));
                            var_19 = (1504389516 >= 49781);
                        }
                    }
                }
            }
        }
    }
    var_20 = var_7;
    var_21 = ((((((!var_10) ? (!var_6) : var_4))) && var_4));
    #pragma endscop
}
