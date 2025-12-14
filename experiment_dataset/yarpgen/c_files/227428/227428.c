/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= 29510;
    var_15 ^= (max((max(var_0, var_0)), (((1 ? 23559 : (29502 + var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = -11;
                var_17 = (((((var_10 ? (777903256 << 0) : 18218743218832170751))) ? var_2 : 13042476654800147882));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_18 ^= (((arr_13 [18] [i_3] [i_4] [i_2]) ? 23547 : (arr_4 [i_2])));
                            var_19 = (min(var_19, var_12));

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 22;i_6 += 1)
                            {
                                var_20 = 985426473948739556;
                                var_21 = (~var_11);
                            }
                            for (int i_7 = 1; i_7 < 20;i_7 += 1)
                            {
                                var_22 ^= var_7;
                                var_23 ^= -15310883441051861171;
                                var_24 = (max(((((min(9223372036854775780, (arr_9 [13])))) ? var_6 : 32760)), (arr_5 [i_4])));
                                var_25 = 2063687422;
                            }
                            for (int i_8 = 0; i_8 < 22;i_8 += 1)
                            {
                                var_26 = var_11;
                                var_27 = 5481905191071350305;
                                var_28 = ((45509 * (((arr_22 [i_2] [i_2] [i_2] [i_3] [i_3] [i_5 - 3] [i_3]) ? (var_10 > 8517188916326416866) : ((var_1 ? (arr_18 [i_3] [i_2] [i_3] [i_2] [i_3]) : 3135860632657690444))))));
                                var_29 = (min(((12964838882638201310 ? 15310883441051861165 : (arr_9 [i_2]))), (((arr_9 [i_8]) ? 12964838882638201294 : (arr_9 [i_2])))));
                            }
                        }
                    }
                }
                var_30 = (((((var_0 ? (arr_6 [6]) : -22077))) ? ((5481905191071350319 ? 5481905191071350323 : 240)) : ((((arr_4 [i_3]) ? ((min((arr_6 [i_3]), 1))) : (min(var_12, var_13)))))));
                var_31 = (max(-52, ((24 ? (arr_13 [i_2] [i_3] [i_3] [i_3]) : (arr_13 [i_2] [i_2] [i_2] [i_2])))));
                var_32 = 1;
            }
        }
    }
    #pragma endscop
}
