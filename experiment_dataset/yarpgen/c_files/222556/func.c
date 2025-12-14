/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222556
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    var_15 = (-(((((/* implicit */_Bool) -375689269)) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) (unsigned short)38089)))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) 375689268)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)46120)))) : (((((/* implicit */_Bool) (short)2745)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? ((~(((/* implicit */int) (unsigned short)3072)))) : (((/* implicit */int) (short)-32104)))) + (((/* implicit */int) (_Bool)0)))))));
                        var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) & (var_12)))) >= (min((arr_10 [i_3] [i_0] [i_2] [i_3] [11] [i_2]), (((/* implicit */unsigned long long int) var_11)))))))));
                        arr_12 [i_3] [i_2] [i_1] [i_0] &= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4611404543450677248LL)))) && (((/* implicit */_Bool) ((var_1) | (var_1)))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) max((arr_6 [i_0] [8] [i_2 + 2] [i_4]), (((/* implicit */long long int) arr_15 [i_1] [(short)18] [i_4]))))))))));
                        var_20 = ((/* implicit */_Bool) min((var_20), ((!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_4])) || (var_0)))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) ((((((/* implicit */int) var_5)) != (((/* implicit */int) arr_4 [(unsigned char)12] [i_1])))) ? (((/* implicit */int) arr_9 [i_0] [0ULL] [i_0] [i_0] [i_0] [6LL])) : (((/* implicit */int) (short)-479))));
                            arr_19 [i_0] [i_4] [i_4] &= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << (((arr_18 [i_0] [i_2 + 2] [i_5]) - (115658170157498071LL)))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_3))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */long long int) ((_Bool) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))) <= ((~(((/* implicit */int) (short)30818)))))));
                            arr_22 [i_0] [(short)8] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (9223372036854775807LL) : (9223372036854775807LL)));
                            arr_23 [i_6 + 2] [i_4] [i_6] [i_1] [i_6] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)7)) ? (arr_7 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [18ULL] [18ULL] [i_2]))))) <= (((/* implicit */long long int) (+(((/* implicit */int) var_8))))))))));
                        }
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)2770)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)187))) : (1732558678975309857LL)))) : (5597530012384037665ULL)));
                        arr_24 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(-1504512551)))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 13099568345716128063ULL)) ? (2147483647) : (0)))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_2] [i_0])), (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-452)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)30389)))))))));
                    }
                }
                var_25 = ((/* implicit */long long int) (~(12849214061325513943ULL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        for (int i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            {
                arr_31 [i_7] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2147483647))));
                arr_32 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (12849214061325513943ULL) : (5597530012384037673ULL)))) ? (((/* implicit */long long int) max((-1158899700), (((((((/* implicit */int) (short)-452)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))))) : ((~(arr_7 [i_7] [i_8] [i_8])))));
                arr_33 [i_7] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)19025)))) < (((/* implicit */int) (_Bool)1))));
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_25 [i_7]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
        {
            arr_41 [i_9] [i_9] = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (var_14)))) : (var_11));
            var_27 = ((_Bool) var_5);
            arr_42 [i_10] [i_9] = ((/* implicit */_Bool) arr_5 [21ULL] [(_Bool)1]);
            var_28 = ((/* implicit */short) -1158899691);
            var_29 = ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */unsigned long long int) arr_14 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1])) : (var_2));
        }
        /* vectorizable */
        for (short i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
        {
            var_30 &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)102)) / (1158899690)));
            /* LoopNest 3 */
            for (short i_12 = 0; i_12 < 23; i_12 += 3) 
            {
                for (short i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    for (short i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */int) arr_47 [i_9 - 1] [i_11] [i_12])) * (((/* implicit */int) arr_25 [i_9 - 1])))))));
                            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(2147483647)))) >= ((+(var_2))))))));
                            var_33 -= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_25 [i_9 - 1])) : (1158899690))));
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */short) (+(arr_14 [i_9 - 1] [i_9] [i_9] [i_9 - 1] [i_11])));
        }
        arr_53 [i_9] [(_Bool)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_6 [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1]))) ? (((375689269) ^ (((/* implicit */int) (short)464)))) : ((-(((/* implicit */int) (unsigned char)92))))));
    }
    for (long long int i_15 = 0; i_15 < 18; i_15 += 2) 
    {
        var_35 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) ((234425888750600366ULL) - (((/* implicit */unsigned long long int) arr_40 [i_15])))))), (var_2)));
        var_36 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (short)-24))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)27524)) >> (((/* implicit */int) (unsigned char)14))))), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) arr_4 [i_15] [i_15])) : (-2147483640))))));
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 14; i_16 += 4) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (short)-18005))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)1043)) && (((/* implicit */_Bool) 9223372036854775807LL))))) : (((/* implicit */int) arr_0 [i_15])))) : (((((/* implicit */int) (_Bool)1)) * ((-(((/* implicit */int) (short)(-32767 - 1)))))))));
                    var_38 = ((/* implicit */unsigned short) arr_20 [i_16] [(unsigned char)4] [i_16 + 2] [(unsigned char)4]);
                    var_39 = ((/* implicit */int) arr_26 [i_16] [i_16]);
                }
            } 
        } 
        var_40 ^= var_0;
        var_41 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_6 [(_Bool)1] [i_15] [i_15] [i_15])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((-6892208303618771571LL), (((/* implicit */long long int) 944939870))))))) : (((((((/* implicit */long long int) ((/* implicit */int) (short)0))) - (arr_18 [i_15] [i_15] [i_15]))) + (((/* implicit */long long int) ((375689268) + (((/* implicit */int) (_Bool)0)))))))));
    }
}
