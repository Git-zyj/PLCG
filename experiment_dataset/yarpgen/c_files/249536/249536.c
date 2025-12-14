/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] = var_7;
                var_11 = (max(var_11, ((((((33507 ? (3479307234 | 5043940943400402187) : (((min(var_10, var_3))))))) || (((~((var_1 ? 5043940943400402190 : 5043940943400402169))))))))));
                var_12 -= (~var_9);

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_13 = (min(var_13, -5043940943400402183));
                    arr_7 [i_1] [i_1] = (((((var_9 / (min(5043940943400402187, 5043940943400402190))))) ? (max(((305915334808612238 ? var_6 : -5043940943400402198)), -102)) : (((min(71, var_6))))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_14 = 2814818619;
                    var_15 = ((((min(5043940943400402203, var_7))) ? (1 + 118472555) : -5043940943400402183));
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_16 = (min(var_16, -5043940943400402181));
                                var_17 -= (-102 & (((((-5043940943400402191 ? -11475 : 5043940943400402171))) ? (-5043940943400402176 >= 6001) : (var_9 | var_0))));
                                var_18 += 25483;
                            }
                        }
                    }
                    arr_24 [i_1] = (min(-16309, ((var_8 ? var_5 : var_0))));
                    var_19 += ((((var_5 ? 1336491878940168199 : var_3))) ? (min(-30, var_7)) : ((0 ? var_10 : 4176494752)));
                }
            }
        }
    }
    var_20 = (max(var_20, (((var_3 ? var_4 : (((min(var_5, 3103367415)))))))));
    #pragma endscop
}
