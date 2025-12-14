/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (((~(arr_4 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_2] [i_2] [22] [13] [i_3] = (((((((min(15, (arr_0 [i_0])))) ? var_0 : (arr_2 [i_0] [i_3])))) ? (arr_3 [i_0]) : ((((arr_2 [i_3] [i_0]) > -23)))));
                            arr_12 [i_0] [i_3] [i_2] [i_3] = ((((min(30712, (-1324988073 - 32512)))) && -1333));
                            arr_13 [i_0] [i_0] [14] [i_3] [i_3] [i_3] = (((min((32767 - 7161), -24)) != (1324988092 ^ 3207926818)));
                            arr_14 [i_0] [i_3] [i_0] [i_3] [i_3] = (max(((!(32760 * -20954))), (arr_3 [12])));
                            arr_15 [i_0] [i_3] [i_2] = (max((((((var_2 ? 21 : (arr_1 [i_0])))) ? -13 : (arr_3 [i_0]))), (((((max(-32761, var_5))) == (((arr_8 [i_3] [i_2] [i_1] [i_0]) & var_11)))))));
                        }
                    }
                }
                var_14 = (min(var_14, (arr_10 [i_1] [i_1] [i_1] [i_0])));
            }
        }
    }

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_15 -= 16373;
        var_16 += 29423;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_17 = (max(var_17, (arr_17 [i_5])));
        arr_21 [0] [i_5] = 33887;
        var_18 = ((32760 ? (arr_3 [i_5]) : 1));
        arr_22 [i_5] [i_5] = 1324988100;
    }
    var_19 = ((4691 ? (((1 * var_7) + (var_3 || var_12))) : ((min(var_9, var_4)))));
    #pragma endscop
}
