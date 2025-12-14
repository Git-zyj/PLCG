/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209569
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0 + 1] [i_3] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) var_1))))))))));
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) (signed char)80);
                            /* LoopSeq 4 */
                            for (signed char i_4 = 2; i_4 < 20; i_4 += 3) 
                            {
                                arr_14 [i_3] [i_1] [i_1] [i_1] [i_1] |= ((((/* implicit */int) var_9)) >> (((((min((var_6), (var_5))) | (((/* implicit */unsigned int) ((int) 4273808866U))))) - (4278042064U))));
                                var_11 *= ((/* implicit */unsigned int) ((signed char) var_6));
                                var_12 = ((/* implicit */_Bool) ((((((/* implicit */int) var_9)) << (((21158429U) - (21158420U))))) >> (((((unsigned int) var_10)) - (83U)))));
                                arr_15 [i_0] [i_0] [i_2 + 1] [i_3] [i_1] = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) var_0)))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (var_4))))) < ((-(3666179388U)))))));
                            }
                            for (unsigned int i_5 = 1; i_5 < 19; i_5 += 2) /* same iter space */
                            {
                                var_13 = ((/* implicit */unsigned int) var_4);
                                var_14 = ((/* implicit */unsigned int) var_4);
                                var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) var_1))))))))));
                                arr_18 [20U] [i_1] [i_1] [i_1] [20U] = ((((/* implicit */_Bool) ((int) -80249152))) ? ((((-(21158414U))) / (((/* implicit */unsigned int) (-(var_1)))))) : (((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) & (var_3))));
                            }
                            for (unsigned int i_6 = 1; i_6 < 19; i_6 += 2) /* same iter space */
                            {
                                var_16 = ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
                                var_17 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_5)))))))) | ((-(((((/* implicit */unsigned int) var_4)) / (var_6)))))));
                            }
                            for (unsigned int i_7 = 1; i_7 < 18; i_7 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((+(511U))))))));
                                var_19 = (+(((unsigned int) var_0)));
                                var_20 = ((1073741823) << (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_0)))))));
                            }
                        }
                    } 
                } 
                arr_25 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_1))))))))));
                var_21 = ((/* implicit */_Bool) -1509667347);
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(((1073725440U) << (((var_8) - (2838942342U))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((int) ((unsigned int) var_8)))), (var_8)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 3; i_9 < 10; i_9 += 2) 
        {
            for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_24 = (~(((/* implicit */int) ((4294966784U) < (((/* implicit */unsigned int) var_4))))));
                        arr_37 [i_8] [i_8] |= ((/* implicit */int) (((-(-803763012))) != (((/* implicit */int) var_9))));
                        var_25 = ((/* implicit */int) ((unsigned int) 4294966767U));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_40 [i_8] [i_12] [i_12] = ((unsigned int) (_Bool)1);
                        var_26 |= ((/* implicit */unsigned int) (-(var_1)));
                    }
                    for (unsigned int i_13 = 1; i_13 < 7; i_13 += 3) 
                    {
                        arr_43 [i_8] [1U] [i_9] [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((4294966784U) > (((/* implicit */unsigned int) var_4)))))));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((((/* implicit */_Bool) 2147483640)) ? (((/* implicit */unsigned int) -2147483640)) : (var_6)))));
                        /* LoopSeq 3 */
                        for (int i_14 = 1; i_14 < 8; i_14 += 3) /* same iter space */
                        {
                            var_28 |= ((/* implicit */unsigned int) ((_Bool) var_4));
                            arr_46 [i_8] [i_8] [i_8] [i_8] [i_8] = ((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? ((-(((/* implicit */int) var_10)))) : (-1509667347));
                        }
                        for (int i_15 = 1; i_15 < 8; i_15 += 3) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) var_2))));
                            var_30 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= (var_5)));
                            arr_49 [i_8] [i_9] [i_10] [i_13] [7] &= ((3221241855U) >> (((((unsigned int) 1073725441U)) - (1073725410U))));
                            arr_50 [i_9] [i_10] [i_13] [i_13] = ((/* implicit */int) (-(var_0)));
                        }
                        for (unsigned int i_16 = 2; i_16 < 9; i_16 += 1) 
                        {
                            var_31 *= ((/* implicit */signed char) ((((unsigned int) var_9)) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28)))));
                            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((int) (-(-2147483640)))))));
                        }
                    }
                    for (int i_17 = 0; i_17 < 11; i_17 += 3) 
                    {
                        arr_57 [i_8] [i_8] [i_10] [i_17] [i_8] [i_9] = ((/* implicit */unsigned int) (((~(-2125265788))) << (((((/* implicit */int) var_2)) - (3)))));
                        var_33 |= ((/* implicit */unsigned int) ((signed char) ((int) (_Bool)1)));
                    }
                    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_3)))) ? (var_6) : (((/* implicit */unsigned int) 80249144)))))));
                    var_35 = (~(var_1));
                    var_36 |= ((unsigned int) var_4);
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 2; i_18 < 8; i_18 += 1) 
                    {
                        for (unsigned int i_19 = 1; i_19 < 9; i_19 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((signed char) (~(511U)))))));
                                var_38 = ((/* implicit */unsigned int) ((((var_1) + (2147483647))) >> (((var_5) - (1758567577U)))));
                                var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((var_4) >= (-1509667347))))));
                                arr_62 [i_19] = ((/* implicit */_Bool) var_3);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_63 [i_8] [i_8] = ((/* implicit */unsigned int) (signed char)7);
    }
    /* vectorizable */
    for (unsigned int i_20 = 0; i_20 < 25; i_20 += 2) 
    {
        arr_66 [i_20] [(signed char)9] |= ((/* implicit */int) 3221241866U);
        var_40 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (((var_7) >> (((21158429U) - (21158412U)))))));
    }
    for (signed char i_21 = 2; i_21 < 14; i_21 += 2) 
    {
        var_41 = ((/* implicit */signed char) (~(var_6)));
        var_42 = ((/* implicit */int) max(((-(var_5))), (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) > (var_4))))));
    }
    var_43 = ((unsigned int) var_4);
}
