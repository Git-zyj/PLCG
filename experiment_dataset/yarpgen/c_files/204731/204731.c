/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_14 = ((!(!-944838141)));

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_6 [8] = (((((1674452467 ? -117 : -1674452448))) ? 1063609210 : (~6957815206947313893)));
            var_15 = ((((!(arr_5 [i_0 - 1] [i_1]))) ? ((var_9 ? 255 : (arr_1 [i_0 + 1]))) : -1674452467));
            var_16 = ((-5436398435175589223 ? (((arr_0 [11]) ? var_11 : -1241879463)) : (!var_9)));
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            {
                var_17 = ((((((61440 ? var_3 : var_7)) ? ((((arr_11 [i_2] [14]) ? (arr_2 [i_2]) : var_5))) : (~9752750145826839538)))));
                var_18 = (((~1674452447) ? -var_7 : (((~10758) ? (~var_7) : (((arr_3 [13]) ? -206517621934233256 : (arr_10 [i_3] [5])))))));
                var_19 = ((((((((143 ? 1574471 : 14750217588219569363))) ? var_5 : ((-569764566 ? var_12 : -8))))) ? (!31585) : (((((34351349760 ? var_5 : 11488928866762237716))) ? ((1241879463 ? var_12 : var_9)) : -1241879463))));
            }
        }
    }
    #pragma endscop
}
