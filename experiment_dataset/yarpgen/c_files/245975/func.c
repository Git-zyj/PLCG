/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245975
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
    var_10 = ((/* implicit */unsigned long long int) max((var_2), (((((/* implicit */int) (_Bool)1)) << ((((+(((/* implicit */int) var_7)))) - (88)))))));
    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-72)), (3724535813U))))));
    var_12 = ((/* implicit */long long int) var_5);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229))) : (1765714918974824221LL))) << (((((((unsigned int) var_7)) - (((/* implicit */unsigned int) var_4)))) - (4173673841U)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned char) var_0);
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_2 = 2; i_2 < 15; i_2 += 3) /* same iter space */
            {
                var_15 = ((/* implicit */int) var_8);
                arr_9 [i_2] [i_0] = ((/* implicit */unsigned short) var_8);
            }
            for (int i_3 = 2; i_3 < 15; i_3 += 3) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) | (((/* implicit */int) var_8)))) < (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))) <= (max((var_0), (var_0)))))))))));
                var_17 = ((/* implicit */unsigned char) (signed char)68);
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    arr_15 [i_0] [i_0 + 1] [i_3] [i_0] = ((/* implicit */unsigned char) ((int) var_8));
                    var_18 = ((/* implicit */unsigned short) var_0);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */long long int) var_1);
                        arr_18 [i_0] [i_0] [i_0] [15ULL] = ((/* implicit */unsigned short) var_3);
                        arr_19 [i_0] [i_0] [i_3] [i_0] [i_5] [i_5] = var_0;
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                    {
                        var_20 = ((((/* implicit */int) ((unsigned short) -2021383532))) + (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */int) var_5)))));
                        var_21 = ((((/* implicit */int) ((var_2) > (((/* implicit */int) var_7))))) >> (((((/* implicit */int) ((signed char) -810419800))) + (106))));
                    }
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((var_9) ^ (((/* implicit */unsigned long long int) var_4)))))));
                }
                var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_3 + 1])))))));
                arr_22 [i_0] [i_0] [0ULL] = ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)250), (((/* implicit */unsigned char) (signed char)61))))) && (((/* implicit */_Bool) min((((unsigned char) arr_8 [i_0] [i_1] [i_1] [i_3])), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_4))))))))));
            }
            for (unsigned short i_7 = 1; i_7 < 14; i_7 += 3) 
            {
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) 3494789900U)) ? (3184959057U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                /* LoopNest 2 */
                for (int i_8 = 4; i_8 < 13; i_8 += 2) 
                {
                    for (int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                            var_26 = ((/* implicit */int) max(((~(var_6))), (((/* implicit */unsigned int) ((unsigned short) arr_24 [i_0])))));
                            arr_30 [6] [i_9] [12] [i_0] [(_Bool)1] = ((/* implicit */signed char) ((max((((arr_6 [i_0] [i_0] [i_9]) & (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) var_4)))) >> (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_0 + 1] [i_8 - 3] [i_9])))) - (74)))));
                            arr_31 [i_0 + 1] [i_1] [i_0] [i_8 - 4] = ((/* implicit */short) var_1);
                        }
                    } 
                } 
                var_27 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_6)))))), ((!(((/* implicit */_Bool) var_1))))));
            }
            var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_20 [i_0] [14ULL] [14ULL] [i_0 + 1] [i_0] [i_0 + 1])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((signed char) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
            /* LoopSeq 3 */
            for (short i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        {
                            arr_40 [i_0] [i_11] [(signed char)2] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)92)) ? (var_3) : (((/* implicit */long long int) var_6))))) ? ((~(((/* implicit */int) (short)17861)))) : (((/* implicit */int) arr_3 [i_1] [i_0] [(unsigned short)4])))))));
                            var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                            arr_41 [i_0] = ((/* implicit */signed char) ((short) (unsigned char)177));
                            arr_42 [i_0] [i_0] [7ULL] [i_11] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_2)))) ? (((((var_0) >> (((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */int) (unsigned short)60393)) & (((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
                arr_43 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-45))))) ? (max((8116572508245693569LL), (((/* implicit */long long int) (unsigned char)0)))) : ((-(var_3)))));
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (unsigned short)33082)) : (((/* implicit */int) (short)-32054))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (signed char)4)) : (-1459807384)))) | (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((short) var_3))))))))));
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 16; i_13 += 3) 
                {
                    for (long long int i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) min((((var_2) + (((/* implicit */int) var_7)))), (((/* implicit */int) arr_12 [i_0]))));
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */int) (unsigned short)37208)), (arr_34 [i_0] [i_10] [i_0]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (var_0))))) * (((/* implicit */int) min((var_5), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_4)))))))))))));
                            var_33 = ((/* implicit */signed char) arr_11 [i_1] [8ULL] [i_13] [i_14]);
                            var_34 += ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (var_4)))) ? (((((/* implicit */_Bool) -1767960261)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)55))) : (14998023902164318639ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_14])) ? (var_0) : (((/* implicit */int) var_5))))))) * (((/* implicit */unsigned long long int) ((long long int) var_7)))));
                            var_35 ^= ((/* implicit */signed char) max((((/* implicit */int) (!((!(((/* implicit */_Bool) -8116572508245693562LL))))))), (((((/* implicit */_Bool) var_1)) ? (var_2) : (var_4)))));
                        }
                    } 
                } 
            }
            for (short i_15 = 0; i_15 < 16; i_15 += 3) /* same iter space */
            {
                arr_52 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)28336)) ? (((/* implicit */unsigned long long int) var_3)) : (var_9))), (((/* implicit */unsigned long long int) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))))));
                arr_53 [i_15] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) (signed char)126)) ? ((-9223372036854775807LL - 1LL)) : (8536702700544310259LL)))));
            }
            for (short i_16 = 0; i_16 < 16; i_16 += 3) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned char) (!(((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned short)33993)))) || (((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_3))))))));
                arr_56 [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 16; i_17 += 3) 
                {
                    for (short i_18 = 0; i_18 < 16; i_18 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((arr_35 [i_0 + 1] [i_0 + 1] [i_1]) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0] [i_0] [13U])))))) ? ((-(((/* implicit */int) var_1)))) : ((-(((/* implicit */int) (signed char)14))))))));
                            arr_63 [i_0] [i_17] [i_16] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (var_2) : (max((var_2), (((/* implicit */int) var_7)))))) : (((/* implicit */int) ((short) var_7)))));
                        }
                    } 
                } 
            }
        }
        arr_64 [i_0] = ((/* implicit */unsigned short) (~(min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) 1306214530U)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-26)))))))));
    }
    /* vectorizable */
    for (unsigned int i_19 = 0; i_19 < 14; i_19 += 3) 
    {
        var_38 += ((/* implicit */unsigned short) var_7);
        /* LoopNest 2 */
        for (unsigned short i_20 = 4; i_20 < 12; i_20 += 2) 
        {
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                {
                    arr_72 [i_21] [i_21] [i_21] [i_21] = ((_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))) : (arr_66 [i_20])));
                    /* LoopNest 2 */
                    for (unsigned char i_22 = 0; i_22 < 14; i_22 += 2) 
                    {
                        for (unsigned short i_23 = 0; i_23 < 14; i_23 += 2) 
                        {
                            {
                                arr_79 [i_23] [i_22] [i_21] [i_19] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (var_6)))) ? (((/* implicit */int) ((unsigned short) var_9))) : (var_2)));
                                arr_80 [i_19] [i_19] [i_19] [i_21] [i_19] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */int) var_7))))) ? (((var_9) ^ (((/* implicit */unsigned long long int) 1306214530U)))) : (((/* implicit */unsigned long long int) var_4))));
                                arr_81 [i_21] [i_21] [i_21] [i_22] [i_23] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_20] [i_21] [i_20]))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((3302270996U) >> (((-1332091042) + (1332091047))))))));
                    arr_82 [i_19] [(unsigned short)0] [i_21] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3494789900U)) ? (var_9) : (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) arr_77 [(unsigned char)13] [i_20 + 1] [i_20] [i_21])) <= (var_0)))) : (((var_2) ^ (((/* implicit */int) var_7)))));
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_19] [i_20 + 1] [i_21] [i_19]))) <= (arr_24 [i_21])));
                }
            } 
        } 
    }
    var_41 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))));
}
