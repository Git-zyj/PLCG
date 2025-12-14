/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (min(((~(arr_1 [i_0] [6]))), ((min(-30410, 6264)))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (((((var_13 ? (arr_2 [i_0] [i_1]) : ((max(var_10, var_7)))))) ? (max((~31), (!var_6))) : -23));
            var_16 = (((~var_5) / ((12840755020064804727 ? 203 : 12840755020064804745))));
            arr_6 [i_0] [i_0] = (!31);
        }
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            arr_9 [i_0] = (((!86) ? (((8575700778189589957 || (arr_3 [i_2 + 1] [i_2 + 1])))) : (~var_8)));
            arr_10 [i_0] [i_0] [i_2 - 1] = min(22, (((-92 && (arr_7 [i_2] [i_2 + 3] [i_2 - 1])))));
            arr_11 [i_0] [i_2] = (((var_8 >= var_3) ? var_5 : (((min(4384, var_0))))));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_18 [i_0] [i_2] [i_3] [i_4] = ((var_11 % (((arr_14 [i_3] [i_2] [i_0] [i_4]) ? var_8 : ((max(-27878, (arr_7 [i_0] [i_0] [i_0]))))))));
                        var_17 -= (max(((var_11 ? (min(var_4, var_3)) : (arr_16 [i_0] [i_0] [i_0]))), var_5));
                        var_18 = ((((((arr_12 [i_0] [i_2 + 3] [i_3 - 2]) + (arr_4 [i_2 + 3])))) ? -55221 : (min((arr_0 [i_3] [i_3]), var_2))));
                    }
                }
            }
        }
        var_19 += ((5605989053644746889 < ((2 ? 5605989053644746890 : 1))));
        var_20 = (min((min(7880, var_10)), (arr_16 [i_0] [i_0] [i_0])));
    }
    #pragma endscop
}
