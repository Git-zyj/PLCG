/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 = (((((((2194072077 ? 0 : -76))) <= 14090726359320966323)) ? (min(4356017714388585300, 2194072092)) : -5821));
                                var_13 = (max(((((max(var_3, (arr_11 [i_0] [i_2] [i_2] [i_3] [i_4]))) - var_11))), 1972882658588261359));
                                var_14 = (((!var_7) && ((min(12136, var_10)))));
                            }
                        }
                    }
                }
                var_15 = (((((min(-1076047319678323734, (-2147483647 - 1))) / 2100895223)) <= ((((arr_4 [i_0]) ? 0 : 2718663361)))));

                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        arr_18 [i_0] [i_5] = (max(((max(var_11, 4294967295))), ((-(arr_12 [i_5 + 1] [i_5 - 1] [i_1 + 1])))));
                        arr_19 [i_5] = ((((min(-5821, (min(-16384, var_8))))) < ((max(1020, (-127 - 1))))));
                        var_16 = var_5;
                        var_17 *= (arr_8 [i_1 - 1] [i_5 + 1] [i_5] [1]);
                        var_18 = (max(var_18, 14090726359320966323));
                    }
                    arr_20 [i_5] [i_1] = 255;
                    var_19 = (max(var_19, 1));
                }
            }
        }
    }
    var_20 = var_3;
    var_21 = (max((((((var_8 ? var_1 : 62594)) > var_7))), var_8));
    #pragma endscop
}
