/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((24576 < var_6) ? ((var_2 ? (24560 | var_9) : ((max(40960, var_10))))) : (~128)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (max((238 < 40960), (max(var_11, var_3))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [11] [11] = (((-(!389773247))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                            {
                                var_14 = ((24571 >= (!2147483647)));
                                var_15 *= ((65535 >> (24576 - 24574)));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = var_5;
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                            {
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_5] = (((((((var_5 ? 0 : 40960))) <= (max(var_5, var_4)))) ? ((-1870381910 ? 95 : 1)) : ((~(31200 < 1)))));
                                var_16 = (((((max(1, (40965 >= var_3))))) < (max((~var_4), (((179 << (var_5 - 111))))))));
                            }
                            for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                            {
                                var_17 = ((36707 ? ((24562 << (var_7 - 1109870171))) : var_10));
                                var_18 = (max(((max((max(58915, 31)), (var_0 >= var_3)))), ((24571 << (160 - 157)))));
                                var_19 += (((7685265988510054329 + 18446744073709551608) < (~-4863651607096652766)));
                                var_20 = (max(var_20, (max(1, var_3))));
                            }
                            for (int i_7 = 0; i_7 < 23;i_7 += 1)
                            {
                                arr_26 [i_0] = (((((~var_3) ? ((max(95, 1))) : (316836857 == -73))) + (((var_3 || (-127 - 1))))));
                                arr_27 [i_0] [i_1] [i_2] [i_3] [i_0] = -1;
                            }

                            for (int i_8 = 0; i_8 < 23;i_8 += 1)
                            {
                                var_21 = ((((((((-73 | var_8) + 2147483647)) >> (var_3 - 3386675864683085562)))) >= (max(0, 7257179021342741593))));
                                var_22 += (!719917961);
                            }
                        }
                    }
                }
                arr_32 [i_1] [i_1] [i_0] = var_0;
                var_23 = ((((((var_5 < var_6) * (135 && 18446744073709551608)))) >= (((!1) + 3575049349))));
            }
        }
    }
    var_24 = 152;
    #pragma endscop
}
