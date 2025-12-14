/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28895
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
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) var_5)) & (var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 3512201105867978119LL)) ? (var_5) : (((/* implicit */long long int) var_12))))))) : (((((11880644972786773979ULL) != (6566099100922777637ULL))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 2292368413U)) : (11880644972786773968ULL))) : (var_7))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((var_5) + (((/* implicit */long long int) ((/* implicit */int) var_0))))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (3512201105867978121LL)))))) * (11880644972786773978ULL)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1 - 2] = ((/* implicit */unsigned int) var_2);
                    arr_10 [i_1] [(signed char)13] [(signed char)13] = ((/* implicit */unsigned char) ((max((2159444117U), (((/* implicit */unsigned int) (short)0)))) / (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) (unsigned short)25780);
                        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_14))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((3603580879U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23396)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            var_19 *= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 4730252251450743117LL)))) ? (13886398449478399346ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13886398449478399325ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (2626061275056035818LL))))));
                            var_20 *= ((/* implicit */_Bool) (unsigned char)211);
                            var_21 ^= ((/* implicit */unsigned short) 4218028426U);
                        }
                        for (long long int i_5 = 1; i_5 < 14; i_5 += 1) 
                        {
                            arr_18 [i_5 + 1] [i_1] [i_2] [i_3] [i_3] [4LL] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_12) : (293787915U)))) / (((((/* implicit */_Bool) (unsigned short)55891)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42141))) : (var_7)))));
                            arr_19 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43342)) / (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (3570589414U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (((((-8073881010364286253LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_10)) - (69)))))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_12)) && ((_Bool)1)))))));
                        }
                        var_23 = ((/* implicit */int) max((var_23), (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) (unsigned short)8537)))) >> (((((/* implicit */int) var_11)) + (32103)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_2 - 2] [i_6] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((2172182911U) | (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) < (((((/* implicit */unsigned long long int) var_5)) - (var_7)))));
                        var_24 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 1; i_7 < 14; i_7 += 1) 
                        {
                            var_25 &= ((/* implicit */long long int) ((13886398449478399346ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23394)))));
                            arr_26 [(_Bool)1] [i_6] [(short)6] [i_1] [(_Bool)1] |= (_Bool)1;
                            var_26 = ((((/* implicit */long long int) (-(((/* implicit */int) var_2))))) ^ (var_5));
                            arr_27 [i_1] [i_1] [i_1] [13U] [i_1] = var_8;
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) : (((((/* implicit */_Bool) 8073881010364286263LL)) ? (13427077409336261208ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                            var_28 = ((/* implicit */_Bool) ((unsigned long long int) ((long long int) (unsigned char)211)));
                        }
                    }
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            arr_35 [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) 502453131U)), (var_5))), (((/* implicit */long long int) 2866661430U))))) && (((/* implicit */_Bool) ((short) (unsigned short)60296)))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (-911417274)))), (var_5)))) && (((/* implicit */_Bool) max((((short) var_14)), (((/* implicit */short) ((unsigned char) var_4))))))));
                            var_30 = ((((-7105666436946481797LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5212))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_2))))) : (min((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)38694)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)23433))))))));
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) 724377887U)) ? (2209274434585001422LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((long long int) (-(-2147483639)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (unsigned short)42101)) : (((/* implicit */int) (short)20230))))) ? (((((/* implicit */_Bool) 724377892U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)47056))))))))));
                        }
                        var_33 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) < (var_3)))), ((-(((/* implicit */int) max(((unsigned short)47061), (((/* implicit */unsigned short) (short)-30030)))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
                    {
                        var_34 = ((/* implicit */long long int) var_9);
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-24287)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((unsigned short) 16LL)))));
                    }
                    var_36 *= ((unsigned short) var_3);
                }
            } 
        } 
    } 
}
