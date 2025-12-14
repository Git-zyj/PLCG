/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223257
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
    var_13 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_0);
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 21; i_1 += 4) /* same iter space */
        {
            arr_5 [i_0] [i_1 + 1] = ((/* implicit */unsigned short) (~(var_2)));
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_1 [i_1 + 1] [i_1 - 1]))))));
        }
        for (int i_2 = 1; i_2 < 21; i_2 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_6))));
            var_16 = ((/* implicit */_Bool) var_0);
        }
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) == (((/* implicit */int) ((var_10) <= (((/* implicit */long long int) var_8)))))))))))));
    }
    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 1) /* same iter space */
    {
        var_18 ^= ((/* implicit */signed char) (((~(((/* implicit */int) max(((unsigned char)29), (var_0)))))) == (((/* implicit */int) var_3))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 16; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (+((~((~(((/* implicit */int) (_Bool)1))))))));
                                var_20 = ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned long long int) var_2)) : (arr_18 [i_4 - 2] [i_4 + 3] [i_4] [i_3 - 1] [i_3 + 3])))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)127)), (var_2))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 10839338680725503939ULL))))), (var_1))), (((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) var_5)))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            {
                                arr_25 [i_4 + 3] [i_4] = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_15 [i_9] [i_4 - 2] [i_4 + 2] [i_3 - 1])))), (((/* implicit */int) var_6))));
                                arr_26 [i_3 - 1] [i_9] [i_5] [i_8] [i_9] &= ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                    arr_27 [i_4 + 4] [i_4] [i_4 + 4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_8 [i_3 + 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((long long int) max((10839338680725503939ULL), (((/* implicit */unsigned long long int) 7622729418177331369LL)))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 1; i_10 < 16; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((var_8) / (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_12 = 1; i_12 < 19; i_12 += 4) 
            {
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)170))) <= (2098468264U))))));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    for (long long int i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        {
                            arr_40 [i_10 + 1] [i_10 + 4] [i_10] [i_10 + 3] [i_10 - 1] = ((/* implicit */unsigned short) 2196499043U);
                            var_25 *= ((/* implicit */short) (-((-(10839338680725503925ULL)))));
                            var_26 &= var_2;
                        }
                    } 
                } 
            }
            for (unsigned char i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_23 [i_10 + 1] [i_11] [i_15] [i_11] [i_10 + 2]))));
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 20; i_16 += 3) 
                {
                    for (signed char i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) (~(arr_7 [i_11] [i_10] [i_16])));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
                arr_49 [i_10 - 1] [i_11] [i_10] = ((/* implicit */long long int) ((arr_13 [i_10 + 1] [i_11] [i_15] [i_10]) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_24 [i_11] [i_11] [i_15] [i_15] [i_10 + 2]))));
            }
            for (unsigned char i_18 = 0; i_18 < 20; i_18 += 3) /* same iter space */
            {
                /* LoopSeq 4 */
                for (long long int i_19 = 1; i_19 < 19; i_19 += 4) 
                {
                    var_30 = ((/* implicit */unsigned short) var_4);
                    var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))));
                    arr_55 [i_10] [i_11] [i_11] [i_11] [i_18] [i_19 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_10 + 3] [i_11] [i_19 + 1] [i_10 - 1] [i_11]))));
                    var_32 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_19 - 1] [i_19 - 1])));
                }
                for (int i_20 = 3; i_20 < 18; i_20 += 3) 
                {
                    var_33 = ((/* implicit */unsigned long long int) ((long long int) 277864717U));
                    var_34 = ((/* implicit */long long int) 4017102583U);
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    arr_61 [i_21] [i_21] [i_10] [i_10] [i_10 + 4] [i_10 - 1] = ((/* implicit */long long int) ((10839338680725503955ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) 1972937737U))));
                    var_36 ^= ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_9)) : (arr_17 [i_10 - 1] [i_11] [i_18] [i_18] [i_21])))));
                    arr_62 [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (((unsigned long long int) 1810651180))));
                }
                for (signed char i_22 = 2; i_22 < 18; i_22 += 2) 
                {
                    arr_67 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1] = ((/* implicit */int) var_9);
                    var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) ((signed char) var_4))) : ((~(((/* implicit */int) (signed char)-105))))));
                    /* LoopSeq 1 */
                    for (long long int i_23 = 0; i_23 < 20; i_23 += 1) 
                    {
                        var_38 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
                        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) (!((!(var_9))))))));
                        var_40 = ((/* implicit */_Bool) var_2);
                    }
                }
                arr_70 [i_10] = ((/* implicit */unsigned int) var_4);
                var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                arr_71 [i_18] [i_10] [i_10 + 1] = ((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) var_12))));
            }
        }
        for (int i_24 = 0; i_24 < 20; i_24 += 4) 
        {
            arr_76 [i_10] = ((/* implicit */_Bool) var_8);
            arr_77 [i_10 + 3] [i_24] [i_24] |= -1LL;
            /* LoopNest 2 */
            for (unsigned int i_25 = 0; i_25 < 20; i_25 += 1) 
            {
                for (unsigned short i_26 = 1; i_26 < 19; i_26 += 2) 
                {
                    {
                        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))));
                        var_43 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                        var_44 = ((/* implicit */signed char) ((int) 4530306588656842922LL));
                    }
                } 
            } 
        }
        var_45 = ((/* implicit */unsigned short) ((arr_65 [i_10 + 1] [i_10 + 3] [i_10 + 2] [i_10 - 1]) ? (((/* implicit */int) arr_0 [i_10 + 4] [i_10 - 1])) : (((/* implicit */int) var_9))));
    }
    var_46 = ((/* implicit */unsigned char) var_11);
    var_47 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))))));
}
