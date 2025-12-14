/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((var_4 >= var_12) == ((var_2 ? var_9 : var_1))))) < ((var_8 ? (-1 >= 246) : ((min(-1, 1)))))));
    var_14 = -var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_15 = (((var_5 ? var_5 : var_7)));
                    var_16 -= (var_4 <= var_12);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = (((60 ? (((min(1, var_11)))) : (max(1416048703508025274, 1)))));
                                var_18 = (max(var_18, -var_4));
                                var_19 = (min((((((var_8 ? 186 : 91))) ? ((70 ? -1 : 51)) : (max(-3380314255281698016, 65535)))), ((min(((max(var_5, var_0))), (77 & var_5))))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_20 = (1416048703508025274 == -2013940664);

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_0] [i_7] [i_0] = (((-1405822083 <= ((var_6 ? var_11 : var_11)))));
                            var_21 = (min((0 >= var_12), ((-(1801245246 ^ var_9)))));
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            var_22 *= ((108 ? 576460752303423487 : ((-var_1 + ((max(65535, 22205)))))));
                            var_23 = 2047;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            var_24 = (var_11 != -1);
                            var_25 = ((var_12 ? ((1 >> (-4125484511904544495 + 4125484511904544499))) : 255));
                        }
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = (1 + -8191);
                    }
                    var_26 = 3163132452;
                }
                arr_24 [1] [1] [i_1] = max(((((max(1099511627775, 2865952745))) ? var_0 : ((var_6 ? var_2 : 216)))), var_7);
                var_27 |= (((var_1 % 1) ? (~-1) : ((~((var_10 ? var_2 : var_1))))));
            }
        }
    }
    #pragma endscop
}
