/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        var_18 = ((((max(-4719, (arr_0 [i_2] [i_3 - 2]))))) + -12014);
                        var_19 = (max(((((((((arr_3 [i_1]) + 2147483647)) >> (var_12 - 20227)))) & (max(-4696, var_11)))), (!12256479288936292619)));
                    }
                }
            }
        }
        var_20 = (arr_1 [i_0]);
        arr_9 [i_0] = (min(((4720 ? (((1967924480 + (arr_2 [i_0] [i_0])))) : ((4719 ? 17058791848415003601 : -31290)))), (2147483647 % 32766)));
    }
    for (int i_4 = 3; i_4 < 23;i_4 += 1)
    {
        var_21 = var_16;
        var_22 *= ((((((max(var_11, 1967924467))) ? var_11 : ((min(var_2, var_13))))) >> ((17058791848415003585 ? (arr_11 [i_4 - 3]) : ((max(-4719, 2692)))))));
        var_23 ^= (((((var_17 >> (!var_5)))) ? ((max((arr_10 [i_4 + 1] [i_4 - 1]), var_5))) : (arr_10 [i_4] [i_4 - 1])));
    }
    var_24 = ((min((min(1387952225294548015, 1861980150)), (max(1387952225294548025, 1799884414684622853)))));
    #pragma endscop
}
