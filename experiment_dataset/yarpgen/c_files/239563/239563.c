/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (max(var_16, (((~(min(var_11, -var_11)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_17 = (!var_11);
                        var_18 = ((var_3 ? 112 : 2946664380405669822));
                        var_19 = ((1659248095041223474 << ((var_11 ? var_13 : 1659248095041223460))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_20 -= var_14;
                        var_21 = (max(var_21, var_3));
                        var_22 = var_9;
                        var_23 = ((12450 ? var_6 : var_5));
                        var_24 -= (((((1659248095041223474 ? var_9 : var_14))) ? ((11630506105330252341 ? 12450 : var_5)) : (!1)));
                    }

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        arr_14 [i_0] = (-1 > 15261572876915872379);
                        var_25 = (min(var_25, 10));
                        var_26 = (var_13 & -28143);
                    }
                    var_27 = ((((max(16787495978668328144, -108))) ? (((53075 % ((0 ? 106 : var_0))))) : (((((0 ? 53061 : (-32767 - 1)))) ? (max(0, var_11)) : 4294967287))));
                    var_28 = (-((min((53080 == 3185171196793679237), (max(var_4, 81))))));
                    var_29 -= ((((var_7 ? 2751775751911372605 : 11485085447225705390))) ? -107 : (var_5 % 6961658626483846223));
                }
            }
        }
    }
    var_30 = var_0;
    var_31 = var_15;
    var_32 = (min(var_12, (((~var_1) ? 4294967295 : var_1))));
    #pragma endscop
}
