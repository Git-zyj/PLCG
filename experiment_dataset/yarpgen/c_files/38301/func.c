/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38301
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
    var_16 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) + (((var_6) - (var_6))))) + (((((/* implicit */int) ((short) var_11))) - (((/* implicit */int) max((var_3), (var_5))))))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((((/* implicit */int) var_11)) ^ (var_6)))))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_14)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            var_19 |= ((/* implicit */unsigned short) var_12);
                            var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-75))));
                        }
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) var_15))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((((/* implicit */int) var_11)) - (((/* implicit */int) var_7)))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) < (var_0)))))))));
                            arr_21 [i_4] [i_4] [i_1] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
                            arr_22 [i_0] [i_4] = ((/* implicit */short) ((((((((/* implicit */int) (signed char)-75)) & (((/* implicit */int) (signed char)-70)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            arr_25 [i_0] [i_4] [i_4] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) >= (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_15))))));
                            var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_14))) == ((+(var_2)))));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_14) == (var_2))))) == (((unsigned int) var_9)))))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (((~(var_1))) + ((~(8188))))))));
                        }
                        var_26 -= ((/* implicit */unsigned char) ((short) (short)30862));
                    }
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        var_27 -= ((/* implicit */unsigned int) var_15);
                        var_28 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)75)) && (((/* implicit */_Bool) (signed char)-10)))))) > (((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                        arr_29 [i_4] = ((/* implicit */signed char) (+(var_0)));
                    }
                }
                for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */int) max(((signed char)4), ((signed char)-75)))) * (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_10))))))))));
                    var_30 -= ((/* implicit */short) ((min((max((((/* implicit */int) (signed char)75)), (-8188))), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1))))))) >= (max(((+(-8176))), (((((((/* implicit */int) var_12)) + (2147483647))) << (((((var_14) + (5842579666534279854LL))) - (27LL)))))))));
                    arr_34 [i_0] = ((/* implicit */int) (~(max(((~(var_14))), (((/* implicit */long long int) ((short) var_5)))))));
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    var_31 = ((/* implicit */int) var_5);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        var_32 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)2385)) | (((/* implicit */int) (signed char)101)))) / (var_6)));
                        var_33 = ((/* implicit */_Bool) var_4);
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 3; i_13 < 17; i_13 += 4) 
                        {
                            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)171))))), (var_8)))) * (((/* implicit */int) ((var_7) && (((/* implicit */_Bool) var_12))))))))));
                            arr_43 [i_13] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) ((-8188) ^ (((/* implicit */int) (signed char)96))))))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_15 = 4; i_15 < 17; i_15 += 3) 
                        {
                            var_35 = ((((((/* implicit */int) var_13)) & (((/* implicit */int) var_3)))) - (((var_6) + (((/* implicit */int) var_3)))));
                            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)157)) & (((/* implicit */int) (unsigned char)85)))))));
                            arr_49 [i_0] [i_0] [(signed char)13] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                            var_37 = ((/* implicit */int) (!(((((/* implicit */_Bool) -8183)) || (((/* implicit */_Bool) (signed char)-12))))));
                            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (!(var_7))))));
                        }
                        for (signed char i_16 = 0; i_16 < 20; i_16 += 2) 
                        {
                            arr_52 [i_0] [i_1] [i_11] = ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_15))))));
                            var_39 ^= ((/* implicit */unsigned long long int) (-(var_6)));
                            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-97)) != (8182)))) * (((/* implicit */int) var_15))));
                            arr_53 [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) var_7)))));
                        }
                        for (unsigned short i_17 = 1; i_17 < 17; i_17 += 3) 
                        {
                            var_41 = ((/* implicit */short) (+(((/* implicit */int) (signed char)97))));
                            var_42 *= ((/* implicit */short) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_13))));
                        }
                        /* LoopSeq 2 */
                        for (short i_18 = 3; i_18 < 17; i_18 += 2) /* same iter space */
                        {
                            var_43 -= ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-97))));
                            var_44 |= ((((/* implicit */int) var_5)) < (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_14))))));
                        }
                        for (short i_19 = 3; i_19 < 17; i_19 += 2) /* same iter space */
                        {
                            var_45 = ((((/* implicit */int) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) var_12)))))) / (((/* implicit */int) var_11)));
                            arr_63 [(unsigned short)18] [i_0] [i_1] [i_11] [i_11] [3ULL] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_13))));
                        }
                    }
                    for (long long int i_20 = 2; i_20 < 17; i_20 += 4) 
                    {
                        arr_66 [(short)5] [i_20] [14ULL] [i_20 - 1] [i_20 + 2] = ((/* implicit */short) ((((unsigned long long int) (~(((/* implicit */int) var_5))))) << ((+(((((/* implicit */int) var_7)) | (((/* implicit */int) var_11))))))));
                        arr_67 [i_0] [i_1] [i_11] [i_20] [i_20 + 3] [i_11] = ((/* implicit */_Bool) var_11);
                        var_46 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_4)))) - (((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_8))))) | (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_5)))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_21 = 0; i_21 < 20; i_21 += 1) 
                    {
                        var_47 *= ((/* implicit */short) min((((min((((/* implicit */int) (_Bool)1)), (8182))) | (min((((/* implicit */int) var_8)), (var_6))))), ((~(((/* implicit */int) ((((/* implicit */int) var_11)) == (var_6))))))));
                        /* LoopSeq 1 */
                        for (short i_22 = 0; i_22 < 20; i_22 += 2) 
                        {
                            var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (signed char)-75)))))) + (min((((/* implicit */int) ((short) var_5))), ((~(((/* implicit */int) (signed char)-3))))))));
                            var_49 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) ((unsigned short) var_3)))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 20; i_23 += 4) 
                    {
                        for (long long int i_24 = 2; i_24 < 17; i_24 += 1) 
                        {
                            {
                                var_50 -= ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)10)) ^ (((/* implicit */int) (signed char)(-127 - 1))))) + (((/* implicit */int) min(((signed char)-87), ((signed char)85))))));
                                arr_78 [i_0] [(unsigned short)8] [16] [i_23] [i_24 - 1] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (!(var_10))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_25 = 0; i_25 < 20; i_25 += 1) 
                    {
                        for (unsigned char i_26 = 1; i_26 < 19; i_26 += 2) 
                        {
                            {
                                var_51 = ((/* implicit */long long int) var_11);
                                var_52 = ((/* implicit */unsigned short) (((~(((/* implicit */int) max((var_8), (((/* implicit */short) var_10))))))) * (((/* implicit */int) min((((/* implicit */short) var_11)), (min((((/* implicit */short) var_10)), (var_9))))))));
                                var_53 = ((/* implicit */_Bool) ((signed char) 8198));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_27 = 2; i_27 < 19; i_27 += 2) 
                {
                    var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_3))))) / (var_14)));
                    var_55 = ((/* implicit */short) (-(((/* implicit */int) var_3))));
                }
                for (unsigned char i_28 = 0; i_28 < 20; i_28 += 2) 
                {
                    var_56 -= ((/* implicit */unsigned long long int) ((max((((((/* implicit */int) var_11)) ^ (var_6))), (((int) var_13)))) ^ ((-(((/* implicit */int) max((var_4), (var_4))))))));
                    arr_88 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                    arr_89 [i_0] [i_0] [i_0] = ((unsigned long long int) max((((/* implicit */short) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_3))))), (var_8)));
                }
            }
        } 
    } 
    var_57 -= ((/* implicit */unsigned long long int) var_8);
}
