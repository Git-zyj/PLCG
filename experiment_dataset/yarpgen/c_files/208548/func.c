/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208548
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
    var_10 &= ((/* implicit */unsigned int) ((unsigned char) var_3));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) (+((-(min((var_9), (arr_8 [i_0] [(unsigned short)9] [i_2] [i_1])))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [(_Bool)1] [6ULL] [i_0] [(signed char)12]);
                            var_13 -= var_1;
                            arr_16 [i_0] [i_0] [i_1] |= ((/* implicit */unsigned char) arr_2 [(signed char)7] [i_3]);
                            arr_17 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) == (((((/* implicit */int) (signed char)-95)) - (((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-89)) && (((/* implicit */_Bool) var_5)))))) : (max((((/* implicit */long long int) (signed char)-95)), ((-9223372036854775807LL - 1LL))))));
                        }
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_14 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6903739537916826307LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [2U] [i_3] [(_Bool)1]))) : (0ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_19 [i_1] [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_1] [i_3] [i_5]))))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (6903739537916826307LL))));
                            var_15 *= arr_14 [5ULL];
                            var_16 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)82))))) != (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180))) % (var_9))))) || (((/* implicit */_Bool) (((+(((/* implicit */int) var_2)))) + (((((/* implicit */_Bool) 444661362)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (_Bool)1)))))))));
                        }
                        arr_21 [i_0] [i_1] [20U] [(unsigned char)16] [i_0] [i_0] = ((/* implicit */signed char) (((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (arr_12 [i_0] [(unsigned char)15] [i_2] [i_3] [i_2]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)32767))))))));
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_0] |= ((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */unsigned int) -829304229)), (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) var_1))))))))));
                        arr_23 [18ULL] [18ULL] [i_0] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) arr_6 [i_0])))) : (((((/* implicit */int) var_8)) / (((/* implicit */int) var_8)))))), (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0])) < (((/* implicit */int) (_Bool)1)))))));
                    }
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((2218547479U), (((/* implicit */unsigned int) (unsigned char)10))))) ? ((-(1013282700590536938ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? ((~(9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
            {
                var_19 -= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    var_20 -= (((!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > (arr_25 [i_0] [i_0]))))) ? ((+(min((2782127089U), (((/* implicit */unsigned int) var_7)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_4 [i_7] [i_6])))));
                    var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_6] [i_8])) * (((/* implicit */int) arr_7 [i_0] [i_6] [i_7]))))) ? (((arr_7 [i_0] [(unsigned char)15] [i_8]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_8])))) : (((/* implicit */int) min((var_0), (((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0])))))));
                    var_22 |= 4472779870406058923LL;
                }
                var_23 |= ((/* implicit */unsigned long long int) var_6);
            }
            for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
            {
                arr_32 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_3)) >= ((-(((/* implicit */int) (_Bool)1))))));
                var_24 |= ((/* implicit */unsigned int) arr_30 [8ULL] [i_6] [(_Bool)1]);
                var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) var_0)))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_9))))))))) == (((((/* implicit */_Bool) var_6)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_11 = 1; i_11 < 21; i_11 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_12 = 1; i_12 < 22; i_12 += 1) 
                    {
                        var_26 &= ((/* implicit */unsigned long long int) (signed char)95);
                        var_27 += ((/* implicit */short) (+(((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)142)))))));
                        var_28 = ((/* implicit */unsigned int) (unsigned char)216);
                    }
                    for (unsigned int i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        var_29 -= ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4))))))));
                        var_30 -= ((((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) && (((/* implicit */_Bool) arr_10 [(_Bool)1] [i_10] [22ULL] [i_11 + 2] [i_11 + 2])))) || (((/* implicit */_Bool) var_0)));
                    }
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        arr_46 [i_10] [i_6] [i_6] [(short)0] [i_6] [i_6] |= ((/* implicit */unsigned int) max((min((((-9223372036854775807LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (7747710532062914807LL))), (((/* implicit */long long int) (unsigned short)15613))));
                        arr_47 [(_Bool)1] [(_Bool)1] [i_10] [12U] [(_Bool)1] [i_0] [i_14] = ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */_Bool) arr_26 [i_0])) ? (1843940892U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
                    }
                }
                var_31 = ((/* implicit */unsigned long long int) (+((+(arr_13 [i_6] [i_6] [i_6] [(unsigned char)7])))));
                var_32 &= ((/* implicit */unsigned char) var_2);
            }
            arr_48 [(_Bool)1] |= ((/* implicit */signed char) var_5);
            arr_49 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_8)))));
            var_33 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        }
        /* vectorizable */
        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 3) /* same iter space */
        {
            var_34 -= ((/* implicit */long long int) (-(arr_0 [i_0] [i_15])));
            arr_52 [i_0] [i_0] = ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_2))))) <= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2451026401U))));
        }
    }
    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 1) 
        {
            for (long long int i_18 = 0; i_18 < 24; i_18 += 1) 
            {
                {
                    var_35 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (709686584U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)7)) || (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_6))))) : (max((((((/* implicit */_Bool) (signed char)76)) ? (arr_58 [i_18]) : (((/* implicit */unsigned long long int) 6903739537916826307LL)))), (((/* implicit */unsigned long long int) 4105891256U))))));
                    var_36 &= ((/* implicit */unsigned int) (-((+(((((/* implicit */_Bool) (signed char)-110)) ? (arr_58 [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)37)))))))));
                    /* LoopNest 2 */
                    for (signed char i_19 = 0; i_19 < 24; i_19 += 3) 
                    {
                        for (unsigned int i_20 = 0; i_20 < 24; i_20 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((var_5), (((/* implicit */short) (_Bool)1)))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_60 [i_16] [i_18])), (3585280712U)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (4472779870406058923LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4566693107952996933ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))))));
                                var_38 ^= ((unsigned int) ((_Bool) arr_57 [i_18] [i_19] [i_20]));
                                arr_64 [i_16] [(unsigned short)4] [i_18] [i_18] [i_17] [(_Bool)1] = ((/* implicit */unsigned long long int) max((((_Bool) var_8)), ((((+(-9223372036854775807LL))) != (((/* implicit */long long int) var_9))))));
                                arr_65 [i_16] [i_16] [i_19] [i_19] [i_19] = ((/* implicit */unsigned int) ((((_Bool) arr_56 [i_16] [i_19] [(_Bool)1])) ? (((/* implicit */int) ((min((arr_59 [i_16] [i_16] [i_19]), (((/* implicit */unsigned long long int) var_4)))) != (((/* implicit */unsigned long long int) (+(var_9))))))) : (((/* implicit */int) ((((/* implicit */_Bool) 2811819052U)) || (((/* implicit */_Bool) (signed char)64)))))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_56 [i_16] [i_17] [i_16]))) ? (((((/* implicit */_Bool) 4566693107952996928ULL)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_56 [i_16] [i_17] [i_17])))) : (((((/* implicit */_Bool) 4566693107952996933ULL)) ? (((/* implicit */int) arr_57 [i_16] [i_16] [(unsigned char)19])) : (((/* implicit */int) (unsigned short)15557))))));
                }
            } 
        } 
        var_40 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (2711084474431466608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) 11036375225061146688ULL))))))) << (((arr_54 [i_16]) - (159380101U)))));
    }
    /* LoopSeq 2 */
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((arr_5 [i_21] [21ULL] [(signed char)0]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_57 [i_21] [(unsigned char)7] [i_21]))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [i_21]))))) : ((+(((3503198940U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))));
        arr_68 [i_21] [i_21] = ((/* implicit */signed char) var_9);
        /* LoopSeq 1 */
        for (unsigned int i_22 = 0; i_22 < 19; i_22 += 4) 
        {
            var_42 &= ((/* implicit */unsigned int) ((((long long int) var_4)) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [(unsigned short)0] [i_21] [i_21] [i_21] [i_22])) ? (((/* implicit */int) (unsigned short)47112)) : (((/* implicit */int) arr_6 [i_22])))))));
            arr_72 [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (591233752U)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) : (min((((/* implicit */unsigned int) var_7)), ((+(var_9)))))));
        }
    }
    for (unsigned char i_23 = 0; i_23 < 18; i_23 += 1) 
    {
        arr_75 [i_23] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), ((~(((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_15 [i_23] [i_23] [i_23] [18ULL] [i_23] [i_23]))))))));
        var_43 = ((/* implicit */long long int) var_9);
        var_44 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_33 [i_23] [i_23])) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_6))))) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (unsigned short)32330))))), (max((((/* implicit */unsigned long long int) (signed char)-120)), (arr_36 [i_23] [i_23] [i_23] [i_23])))))));
    }
}
