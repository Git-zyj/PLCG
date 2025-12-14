/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(((max(var_15, var_0))))));
    var_18 = max((min((!var_5), (!17197874576756171506))), (((~var_5) < var_4)));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (~(((var_16 + 2147483647) << (((!(arr_4 [i_0] [i_2])))))));
                    var_19 = (min(var_19, (((((arr_4 [i_1 + 1] [i_1 - 2]) / (arr_4 [i_1 - 1] [i_1 - 2])))))));
                    arr_8 [i_0] [i_0 + 2] [i_0] [i_0] = (((!(~var_1))));
                }
            }
        }
        var_20 = ((((min(var_14, (arr_3 [i_0] [i_0])))) != ((((((arr_0 [i_0] [i_0]) & 1248869496953380104))) ? (((min((arr_5 [i_0 + 2]), var_4)))) : (min(var_6, var_1))))));
        var_21 = (165 & -23766);
    }
    var_22 = (max(9103248833241573477, -21541));
    #pragma endscop
}
