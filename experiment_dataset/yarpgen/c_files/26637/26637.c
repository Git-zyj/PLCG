/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_13, ((31 ? var_15 : (221 || 14509039767988074439)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = ((82 ? (max((arr_2 [i_0 + 1]), -33)) : (min((~14387922227915663562), (arr_2 [i_0 - 1])))));
                var_17 &= ((var_12 ? (max((arr_7 [i_1 + 1] [i_0 - 1]), 4058821845793888040)) : 4058821845793888055));
            }
        }
    }
    var_18 = var_5;
    var_19 |= var_0;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            {
                var_20 -= ((((((arr_10 [i_2]) ? ((14509039767988074417 ? 6755399441055744 : var_6)) : (((arr_13 [i_2] [i_2] [i_2]) ? -1069933785 : var_4))))) & ((((max(-1069933785, (arr_9 [i_3])))) ? 193463499534664574 : (arr_14 [i_2])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_20 [i_5] |= ((((((min(var_5, 72)) && ((max((arr_18 [i_3] [i_3 + 2] [i_3] [i_3]), 45))))))));
                            arr_21 [i_2] [i_3] [i_4 + 1] [i_3] [i_5] [i_5] = (arr_13 [i_3] [i_3 + 1] [i_3]);
                        }
                    }
                }
                var_21 = (arr_17 [i_3] [i_3 + 1] [i_3] [4]);
                var_22 = (((((((((arr_16 [i_2] [i_2] [i_2] [i_2]) ? 3937704305721477185 : (arr_16 [i_3] [i_3] [i_3] [i_2])))) ? (arr_19 [i_2] [i_3]) : ((max(var_3, -7390)))))) ? ((9605855071938540322 ? (arr_19 [i_2] [i_2]) : -1)) : ((158 ? 16376 : ((max((arr_18 [i_2] [i_3] [i_2] [i_2]), 65429)))))));
            }
        }
    }
    #pragma endscop
}
