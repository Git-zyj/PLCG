/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_10 = ((!((((~var_5) ? ((47407 ? 18129 : var_0)) : var_6)))));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_11 = (((((47407 ? -1 : -23539))) ? (((24 << var_1) ? (~10) : (var_8 % var_3))) : 47407));
                    var_12 = ((-(~var_0)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((var_6 == ((18146 ? 3602271592 : -1585277940))));
                    var_13 += ((((3 ? -2 : 20)) == 79));

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_14 = ((((18127 ? 49535 : var_9)) >> (58 - 50)));
                        arr_12 [i_0] [i_4] [i_4] [i_4] = 174;
                    }
                    var_15 = ((-(var_2 > var_7)));
                }
                arr_13 [i_0] [i_1] = -10;
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_22 [9] [i_1] [i_1] [i_1] [i_6] = (((((((1585277939 >> (108 - 83))) << (var_8 && 4294967288)))) ? (99 < -24) : ((var_6 ? (var_9 + 16) : (var_2 + 28)))));
                                arr_23 [i_6] [i_1] [3] [i_6] [i_7] = ((((((!var_5) ? 255 : ((var_7 << (3125128085 - 3125128070)))))) || (((var_5 % var_7) >= (3145138637291914320 <= 7100338240327072809)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((((1470804828 || (((-2511473432450838994 ? 16 : 47307))))) ? 156 : (!var_5)));
    var_17 = var_3;
    #pragma endscop
}
