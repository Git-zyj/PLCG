/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = max(-var_7, (((17015333565741588181 ? 12 : (arr_0 [i_0])))));
        arr_4 [i_0] = 506871679;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_8 [i_1] = (-2147483647 - 1);
            var_21 += ((((var_1 % (arr_5 [0]))) / ((var_3 + (arr_6 [i_0] [4] [4])))));
            arr_9 [i_1] = ((((((arr_0 [i_0]) ? var_19 : ((min((arr_5 [i_0]), -2147483644)))))) ? (((((arr_5 [i_0]) > (arr_5 [i_1]))))) : (((((-762387880 ? (arr_7 [i_1]) : var_7))) ? ((-(arr_0 [i_1]))) : var_0))));
            arr_10 [i_1] = (((((-2147483646 ? 762387865 : (arr_1 [i_0] [i_1])))) ? 1147846193 : (min(666826176, ((-(arr_1 [i_1] [i_0])))))));
        }
        arr_11 [i_0] = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            arr_16 [i_3] [i_3] = (var_13 != var_8);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_22 = (min(var_22, (((+((-1147846194 ? (arr_20 [10] [i_4] [i_4] [i_5]) : 142)))))));
                        arr_21 [i_3] [i_3] [i_4] = (arr_1 [i_3] [i_3 - 2]);
                        arr_22 [i_3] [i_3] [0] [i_5] [i_5] [i_3] = (-((var_15 ? -1147846194 : 1)));
                    }
                }
            }
            var_23 = (max(var_23, (arr_0 [i_2])));
        }
        var_24 = (((arr_13 [i_2] [i_2]) & 3633939668155352457));
        var_25 = var_16;
    }
    var_26 = (min(var_26, ((((var_3 ? (min(13, 14812804405554199172)) : 49))))));
    var_27 = var_1;
    #pragma endscop
}
