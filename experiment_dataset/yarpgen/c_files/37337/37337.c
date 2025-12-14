/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-var_8 ? (var_5 && 8661418536467948549) : var_11);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (max((((arr_0 [i_0] [i_0]) ? (arr_2 [i_0]) : 8661418536467948549)), (((!(((var_6 ? (arr_2 [i_0]) : (arr_1 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((((((arr_0 [i_0] [i_0]) >> (((arr_1 [i_0] [i_0]) - 10980807921319032710))))) ? (!203) : (min((arr_0 [i_0] [i_0]), var_0))));
        arr_4 [i_0] |= (((arr_2 [i_0]) ^ (((arr_2 [i_0]) + (arr_2 [i_0])))));
        arr_5 [i_0] = (var_7 > 6);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_14 [i_3] = (min(((((((arr_2 [i_1 + 1]) / 8661418536467948549))) ? -42 : 2135461261)), 3));
                        var_14 = (((max(-2135461262, (arr_9 [i_1 + 2] [i_1 + 2] [i_3] [i_3 - 1]))) & (53715 % 576205402)));
                        var_15 = -2135461261;
                        var_16 = (((arr_12 [18] [i_3]) ? -6 : ((max((arr_6 [i_1 - 1] [i_1] [4]), -52)))));
                        arr_15 [i_0] [i_3] [i_2] [i_3] [i_3] = (max(((2135461256 + (arr_7 [i_1 + 1]))), (arr_7 [i_1 - 2])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
