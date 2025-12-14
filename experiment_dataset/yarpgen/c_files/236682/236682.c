/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((-(~var_14))), (242 | var_3)));
    var_20 = (min(5077472429579529903, (((var_4 | (((min(32767, 32760)))))))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (max((((arr_0 [i_0 - 1]) >> (((arr_3 [i_0 + 2]) + 1076883205)))), (arr_0 [i_0])));
        arr_5 [i_0] = (max((max(((32747 >> (((arr_0 [i_0]) - 100846869)))), (arr_1 [i_0] [i_0]))), (max((max((arr_3 [i_0]), (arr_2 [i_0]))), (var_16 < var_12)))));
        arr_6 [i_0] [i_0] = (arr_3 [i_0]);
        var_21 = (6363 < -32765);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_22 *= (!(((-(arr_7 [i_1] [i_1])))));
                    arr_16 [i_1] [i_2] = (min(-32748, 365097814));
                    arr_17 [i_1] [i_1] [i_2] [i_3] = (arr_14 [i_1] [i_2] [i_3] [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
