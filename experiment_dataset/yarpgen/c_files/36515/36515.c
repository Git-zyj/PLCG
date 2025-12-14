/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((var_1 << (!var_11)));
    var_18 += var_4;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = 76;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_3] [i_3] = ((-((((min(var_6, (arr_11 [i_0])))) ? ((1 ? 259959801 : 28)) : 1))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((!(((var_14 ? (arr_8 [i_2] [i_2] [1] [i_2]) : (arr_8 [i_3] [i_2] [1] [i_0 - 2]))))));
                        var_19 = ((((4035007479 | (arr_8 [i_0] [i_0] [i_0 + 1] [i_0 + 1]))) <= -13176));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        arr_16 [i_4] = (((259959827 ? ((3533923533 ? 128641375628830153 : -3596988275736359222) : -75))));
        var_20 = ((((min((arr_15 [i_4 + 3]), var_2))) ? (!1) : (((arr_14 [i_4 + 3]) ? 1 : 259959817))));
    }
    #pragma endscop
}
