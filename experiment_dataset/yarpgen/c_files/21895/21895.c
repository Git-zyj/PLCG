/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 &= (((arr_0 [i_0]) <= var_8));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_1] = (arr_0 [i_1]);
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_12 [i_2] [i_3] [i_2] [i_1] [i_2] = ((((246 ? (arr_7 [i_2 - 1] [i_4] [i_4] [14]) : (arr_0 [i_3 + 1]))) << (((arr_7 [i_2 - 1] [i_2 - 1] [i_3] [i_4]) - (arr_7 [i_2 - 1] [i_2] [i_2 - 1] [i_3])))));
                            arr_13 [i_0] [i_1] [i_2] [i_1] [i_3] [i_2] [i_2] = ((((+(((arr_10 [i_0] [i_0] [i_0] [i_0]) / (arr_7 [i_1] [i_2] [i_3] [i_4]))))) != (max((arr_1 [i_0] [i_2 - 1]), -var_7))));
                            var_15 -= (((((((max(var_5, var_6))) ? (arr_9 [i_1] [i_2 - 1] [i_3] [i_3] [i_1] [i_3 + 1]) : ((max(var_12, var_9)))))) ? (((arr_10 [i_4] [3] [i_0] [i_0]) ? 246 : (((((arr_1 [i_0] [18]) >= (arr_5 [i_4] [i_1] [i_4]))))))) : (((!var_7) ? (!-371797381) : ((-371797373 ? 3490238280 : 6))))));
                        }
                    }
                }
            }
            var_16 = ((((((arr_1 [i_0] [i_0]) / 255))) || (((arr_9 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) > (arr_3 [i_0] [i_1] [i_1])))));
        }
        var_17 *= ((((((arr_7 [i_0] [9] [i_0] [i_0]) > ((min(32748, (arr_7 [i_0] [13] [i_0] [i_0]))))))) >> (162 - 154)));
    }
    var_18 = (min(var_18, var_0));
    #pragma endscop
}
