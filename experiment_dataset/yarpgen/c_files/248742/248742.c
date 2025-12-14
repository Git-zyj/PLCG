/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (var_12 * var_13);
    var_16 = 3398355993339920285;
    var_17 |= ((15048388080369631331 ? 3398355993339920284 : (((min(var_14, (-4 <= 36028797018931200)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = 15048388080369631330;
            var_18 = -83;
            arr_6 [i_0] [i_0] = (((arr_1 [i_0]) ^ (((arr_0 [i_0]) ? -19 : (arr_4 [i_0])))));

            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                var_19 = (((arr_0 [i_0]) | (arr_0 [i_0])));
                arr_10 [i_0] [i_0] [i_0] = (arr_0 [i_0]);
                var_20 -= (4 != 17441847229824627515);
                var_21 = -53;
            }
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                var_22 = 26697;
                var_23 = (arr_1 [i_0]);
                var_24 = (max(var_24, ((((arr_9 [i_1 - 2] [i_1 - 1]) ? 26697 : (arr_9 [i_1 - 1] [i_1 + 1]))))));
                arr_13 [i_0] [i_0] [i_0] [i_0] = ((arr_4 [i_0]) ? 75 : ((83 ? 13378720326159717786 : (arr_9 [i_0] [i_0]))));
            }
        }
        arr_14 [i_0] [i_0] = (max((min(5859, 15048388080369631331)), ((((((2809 != (arr_11 [i_0] [i_0] [i_0])))) <= 3582)))));
    }
    #pragma endscop
}
