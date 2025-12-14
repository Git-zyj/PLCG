/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_7));
    var_13 ^= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 += 2644488127;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_12 [i_2] = ((-(((((-9223372036854775807 - 1) ? (arr_11 [i_4] [19] [i_2 - 1] [i_0] [i_0]) : 65531))))));
                                var_15 = (~65531);
                                arr_13 [i_0] [i_2] [i_2] [i_3] [i_4] = ((~(((!(arr_9 [i_2 - 2] [i_4] [i_4]))))));
                                var_16 = 114;
                                var_17 += (max(((-(arr_9 [i_2 + 1] [i_2 + 1] [i_2 - 2]))), ((65531 * (arr_9 [i_2 - 1] [i_2 - 1] [i_2 - 2])))));
                            }
                            for (int i_5 = 3; i_5 < 21;i_5 += 1)
                            {
                                var_18 *= ((1 | ((((arr_16 [i_0] [i_1] [i_0] [i_2] [i_5] [i_0] [i_2]) > (var_10 - 65531))))));
                                var_19 = (min(var_19, ((max(((~(min(20, var_6)))), (min(-8329623437577228270, (((-(arr_8 [i_0] [i_0])))))))))));
                            }
                            for (int i_6 = 1; i_6 < 18;i_6 += 1)
                            {
                                arr_19 [i_2] [i_1] [i_2] [i_3] [i_3] = ((((65513 && (!65513))) ? (arr_9 [i_2] [i_2 + 1] [i_2]) : ((((!var_5) <= (0 == 932118228))))));
                                var_20 = (~var_6);
                                arr_20 [i_2] [i_1] [i_2] [i_1] [0] [i_1] = 32761;
                                var_21 = (min(var_21, (((((((max(var_9, var_9)) == 65535))) ^ (((var_7 + 12241) - var_10)))))));
                            }
                            var_22 = ((var_9 << (min((!var_6), var_10))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
