/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = ((1341838065 ? (2953129231 >= -1341838078) : var_12));
    var_18 = ((((min((min(1341838063, 2953129231)), var_7))) ? (-968221876 - -122) : (((!((((var_9 + 2147483647) << 0))))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (((2953129240 - (-32767 - 1))));
        var_19 = 255;
        arr_5 [i_0] = (((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) >= (arr_0 [10] [i_0])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_20 = ((((min(var_2, 19000))) - 15819063248735761790));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_21 |= (min(((max(-109, var_6))), (((arr_10 [i_1] [i_2 + 3] [i_3]) - var_3))));
                    arr_15 [18] &= ((~(((arr_7 [i_1]) ? (arr_7 [i_1]) : (arr_13 [i_2 + 2] [i_2 + 3] [1] [i_2 + 2])))));
                }
            }
        }
        var_22 = (max(var_22, ((((arr_10 [i_1] [i_1] [i_1]) ? ((min(-121, (min(97, 121))))) : (arr_12 [i_1] [i_1] [i_1]))))));
    }
    #pragma endscop
}
