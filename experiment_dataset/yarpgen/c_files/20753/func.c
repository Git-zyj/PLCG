/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20753
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_12))) : (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-6479992311827593002LL))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((var_5) ? (var_0) : (((/* implicit */unsigned long long int) var_9)))), (var_0)))) ? (min((((/* implicit */unsigned long long int) var_15)), (var_8))) : (((/* implicit */unsigned long long int) ((((var_14) + (((/* implicit */long long int) var_10)))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */int) var_4))))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */short) min((var_19), (((short) -6479992311827593002LL))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_16 [i_4] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) var_5)) + (var_12)));
                                var_20 = ((/* implicit */signed char) var_9);
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (0) : (((/* implicit */int) (unsigned char)214)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15)))))))));
                                var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_8)));
                            }
                            for (int i_5 = 3; i_5 < 11; i_5 += 2) 
                            {
                                var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_6)) - (3420))))))) & (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((short) var_6)))))));
                                arr_19 [i_0] [i_1] [i_2] [i_0] [i_5 + 2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-26885)) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) (signed char)(-127 - 1)))))), (var_14)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (var_3)))) : (max((((/* implicit */unsigned int) ((var_5) || (((/* implicit */_Bool) var_8))))), (min((var_2), (((/* implicit */unsigned int) var_5))))))));
                                var_24 = ((/* implicit */signed char) max((min((-6479992311827593002LL), (((/* implicit */long long int) (signed char)(-127 - 1))))), (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (var_4)))) | (max((var_12), (((/* implicit */int) var_5)))))))));
                                var_25 ^= ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28772))) : (-6479992311827593002LL))), (((/* implicit */long long int) ((((/* implicit */int) ((var_10) <= (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) & (((/* implicit */int) ((var_1) <= (var_1)))))))));
                            }
                            var_26 = ((/* implicit */long long int) min((var_26), (min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_0)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) - (var_14))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned int) var_3))))))), (min((((/* implicit */long long int) var_4)), (min((((/* implicit */long long int) var_13)), (var_1)))))))));
                            arr_20 [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) != (var_14)))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_6 = 2; i_6 < 12; i_6 += 4) 
                {
                    arr_24 [i_6] [i_1] [i_0] = max((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)196)), (((((/* implicit */_Bool) 8930574657532537018ULL)) ? (((/* implicit */int) (short)21334)) : (((/* implicit */int) (signed char)(-127 - 1)))))))), (3003480468U));
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) / (var_8)))) ? (((((/* implicit */_Bool) (unsigned char)196)) ? (((unsigned long long int) (unsigned short)1577)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)42)) : (-1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) / (((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196))) : (3727305315U))))))));
                }
                for (unsigned int i_7 = 3; i_7 < 13; i_7 += 2) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned char) ((min((var_1), (((/* implicit */long long int) var_3)))) * (((/* implicit */long long int) min((((/* implicit */int) ((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))), (var_12))))));
                    arr_28 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (0ULL))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-14909)) ? (((/* implicit */int) (short)15307)) : (((/* implicit */int) (short)32767))))) : (min((((unsigned int) var_1)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))))))));
                }
                for (unsigned int i_8 = 3; i_8 < 13; i_8 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        arr_35 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */unsigned long long int) -1090116039922004498LL)) : (7476603901086999804ULL)));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_9))), (((/* implicit */long long int) ((signed char) (short)-15105))))))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (((((/* implicit */_Bool) var_0)) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((var_5) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
                        var_31 = min((((((/* implicit */_Bool) min((var_14), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_5)), (var_13))))) : (((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */long long int) var_2)))))), (((/* implicit */long long int) max((((/* implicit */short) var_7)), (var_6)))));
                    }
                    for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        var_32 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (3015800077U)));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_8))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_14))) : (((var_1) | (var_14)))))) ? (((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_7)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_10)))) ^ (min((var_9), (var_11))))))));
                        var_34 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_0)))) ? (min((((/* implicit */unsigned long long int) var_13)), (var_8))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_12)) : (var_0))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) var_6)), (2914907657U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) (short)-15105)) : (((/* implicit */int) (unsigned char)185))))))))));
                        arr_38 [i_0] [i_1] [i_8] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)190))))) : (min((var_0), (((/* implicit */unsigned long long int) var_7))))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_2)) : (var_9))) : (((((/* implicit */_Bool) max((var_6), (var_6)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_14))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_3)) != (var_11)))))))));
                        var_35 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)2294)) ? (((/* implicit */int) (short)(-32767 - 1))) : (991723042))) <= (((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */int) var_4))))))), (((((var_10) << (((((/* implicit */int) var_15)) - (28487))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (short i_12 = 3; i_12 < 12; i_12 += 3) 
                        {
                            var_36 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)150)) ? (14890885815797328059ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2980)))));
                            arr_46 [i_0] [i_1] [i_8] [i_8] [i_11] [i_12] = ((/* implicit */unsigned char) min((((/* implicit */long long int) 0U)), (((((/* implicit */_Bool) (short)8543)) ? (8305001730492340923LL) : (460697288493725466LL)))));
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_0)))) ? (((((/* implicit */_Bool) var_0)) ? (var_1) : (var_11))) : (((long long int) var_0))))) || (((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) var_3))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_13)) % (var_3))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
                        {
                            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
                            arr_51 [i_0] [i_8] [i_0] [i_11] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            var_39 ^= ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_12)) : (var_8))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-8144)) == (((/* implicit */int) (short)15595))))))));
                            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((((/* implicit */_Bool) 1538558500U)) ? (9464891003313272221ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5915))))) : (((/* implicit */unsigned long long int) var_1))));
                        }
                        /* vectorizable */
                        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 1) /* same iter space */
                        {
                            var_41 = ((/* implicit */long long int) ((((/* implicit */int) (short)3984)) & (-1)));
                            var_42 = ((/* implicit */unsigned char) ((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                        }
                        var_43 = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (var_12)))), (((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
                        /* LoopSeq 1 */
                        for (short i_15 = 0; i_15 < 14; i_15 += 1) 
                        {
                            arr_56 [i_0] [i_1] [i_8] [i_8] [i_11] [i_11] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (min((((((/* implicit */_Bool) var_7)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))))), (((((/* implicit */_Bool) (short)8543)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31287)))));
                            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_3)) : (var_1))))));
                        }
                    }
                    var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_10)) : (var_0)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_8))) : (var_0)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_2)))), (((long long int) var_14))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */unsigned long long int) var_14)) + (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15)))))))));
                    var_46 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_4)), (var_9))), (((/* implicit */long long int) min(((short)15302), (((/* implicit */short) (signed char)92)))))));
                }
                arr_57 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((var_14) | (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) var_10))))) : (((var_0) + (((/* implicit */unsigned long long int) var_3)))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))))));
            }
        } 
    } 
    var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 4651344322994741334ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) : (13795399750714810281ULL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) var_16)) | (((/* implicit */int) var_13))))))) : (var_10))))));
    /* LoopSeq 1 */
    for (short i_16 = 2; i_16 < 20; i_16 += 2) 
    {
        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((((/* implicit */int) ((short) var_3))) + (2147483647))) >> (((var_10) - (3250456866U)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */int) var_15))))) ? (max((var_1), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_3) : (var_12)))))))))));
        var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */long long int) var_10))))) ? (((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) var_4))))) : (var_9)))) ? (((((/* implicit */_Bool) min((var_14), (var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_12)) : (var_10)))) : (min((((/* implicit */long long int) var_5)), (var_11))))) : (max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) == (var_1)))), (max((var_9), (((/* implicit */long long int) var_3))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 4) 
        {
            for (unsigned int i_18 = 2; i_18 < 19; i_18 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_19 = 0; i_19 < 21; i_19 += 2) 
                    {
                        for (long long int i_20 = 1; i_20 < 20; i_20 += 4) 
                        {
                            {
                                var_50 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (var_12)))) ? (((/* implicit */int) min((((/* implicit */short) var_5)), (var_13)))) : (((int) ((((/* implicit */_Bool) 2641934692332463611LL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)72)))))));
                                var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (var_2))), (((/* implicit */unsigned int) ((int) var_2)))))) ? (((((/* implicit */_Bool) max((var_11), (var_9)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_11)) : (var_8))) : (min((((/* implicit */unsigned long long int) var_16)), (var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))) : (var_11))))));
                            }
                        } 
                    } 
                    var_52 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned char) var_2))), (((((var_9) - (((/* implicit */long long int) var_10)))) - (((/* implicit */long long int) ((((/* implicit */int) (short)32767)) - (((/* implicit */int) (short)28087)))))))));
                }
            } 
        } 
    }
}
