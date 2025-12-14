/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((501663837 && 3793303459) ? (((((var_4 ? var_14 : 1904379361276096953))) ? var_10 : (var_1 && var_16))) : ((((((18446744073709551602 ? var_12 : var_5))) ? ((var_17 >> (111 - 80))) : ((120 ? var_6 : -125)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_19 = ((((var_7 ? ((-24521 ? var_16 : var_10)) : 1))) ? (((((28694 ? -58 : var_10))) ? ((var_12 ? var_16 : var_6)) : (36842 <= var_15))) : -6438);
                            var_20 = ((var_15 > (((((39217 ? 0 : 111)) <= var_9)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((((((var_15 || 41448) ? ((1 ? var_0 : var_0)) : ((501663821 ? var_0 : var_2))))) ? ((58 ? (var_1 + -19) : ((36846 ? var_16 : var_1)))) : ((-58 ? var_5 : var_17)))))));
                                var_22 += (((var_13 < 28689) <= (((3 || 63) ? (1 >= var_11) : 1281))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_23 = (((var_13 > 501663837) ? (51 * var_14) : ((((24087 ? 1 : -703431903))))));
                                var_24 += (((0 - var_16) ? (1 * 3793303461) : ((1 ? var_14 : 18446744073709551615))));
                                var_25 += (((var_0 && 1619360392) && (((65535 ? 65535 : 7973)))));
                                var_26 = 8192;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
