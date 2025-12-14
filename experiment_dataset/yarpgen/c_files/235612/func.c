/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235612
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_19 -= var_17;
            var_20 = ((/* implicit */_Bool) arr_1 [11ULL]);
        }
        var_21 = ((short) (+(((/* implicit */int) arr_0 [i_0 + 2]))));
    }
    for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_22 *= min((3690903303U), (((/* implicit */unsigned int) var_13)));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (unsigned short)0))));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_24 = ((/* implicit */long long int) (short)24228);
            arr_9 [(unsigned short)6] [(unsigned short)13] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-26)) + (((/* implicit */int) (unsigned short)0))))) ? (max((((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_3])) ? (var_10) : (((/* implicit */int) arr_8 [i_2] [i_2])))), (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (unsigned char)1)) : (arr_6 [(short)17]))))) : (((/* implicit */int) var_3))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_5 = 2; i_5 < 18; i_5 += 4) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)-14038)) : (((/* implicit */int) (unsigned char)200))));
                    var_26 *= ((/* implicit */unsigned int) ((var_4) ? (((arr_15 [i_2] [(short)18]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        arr_21 [i_7] = ((/* implicit */long long int) (unsigned char)144);
                        var_27 = ((/* implicit */short) var_4);
                        var_28 += arr_17 [i_6] [i_7] [12LL] [i_6] [i_4] [i_5];
                        arr_22 [i_2 - 1] [i_2 + 3] [i_2 - 1] [i_2 + 2] [i_7] [i_2] = ((/* implicit */short) arr_18 [i_2] [i_4] [i_5] [8LL] [i_7]);
                        arr_23 [i_7] [i_4] [(unsigned char)11] [i_6] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_2 + 2] [i_2 + 3] [i_5 - 2] [i_7] [i_7]))));
                    }
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_29 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2 + 2] [(unsigned char)12] [i_8])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-35)), ((unsigned char)56))))))), (((min((arr_15 [i_2] [i_2 - 1]), (((/* implicit */unsigned long long int) -5799034629102744045LL)))) + (((/* implicit */unsigned long long int) arr_19 [i_2 + 3] [i_2] [i_2 + 1] [(unsigned short)5] [i_2]))))));
                    var_30 |= ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_26 [i_2 + 2] [i_4] [i_4] [i_5] [i_5] [i_8])) / (134217472))) : (var_14)))) * (max((((((/* implicit */_Bool) arr_4 [i_8] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_2 [i_4] [i_5 + 1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))))));
                    var_31 = (-((~(min((arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]), (2384206179U))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_9 = 3; i_9 < 17; i_9 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned short) ((unsigned long long int) var_8));
                        var_33 = ((/* implicit */unsigned char) 1695616467U);
                        var_34 = ((arr_29 [i_2 - 1] [i_5 - 1]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 + 2] [i_5 + 2] [(signed char)2]))));
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (signed char)-49))));
                    }
                    /* vectorizable */
                    for (short i_10 = 4; i_10 < 20; i_10 += 1) 
                    {
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2] [(unsigned short)8] [i_2 + 2] [i_2 + 3] [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 + 1]))) : (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_4])))))));
                        arr_33 [i_2 - 1] [5ULL] [i_8] [i_8] [5ULL] = ((/* implicit */unsigned long long int) var_12);
                        var_37 = ((/* implicit */long long int) ((((/* implicit */int) ((var_16) < (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) <= (((/* implicit */int) var_15))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) (unsigned char)254);
                        arr_36 [(signed char)11] [(signed char)11] [i_5 - 1] [(signed char)11] [i_5] [(signed char)11] [i_8] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-21087)) <= (((/* implicit */int) (short)5752))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) (unsigned short)36116)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                        var_39 = ((/* implicit */unsigned long long int) var_15);
                        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) max((((/* implicit */unsigned int) min(((-2147483647 - 1)), (((/* implicit */int) (signed char)-103))))), (min((var_16), (((/* implicit */unsigned int) arr_12 [i_5 + 1] [i_5 + 3] [i_5 - 2] [i_5 - 2])))))))));
                    }
                }
                var_41 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_27 [i_2 + 2] [i_5] [8LL] [i_2 + 1] [10U])), (max((((((/* implicit */_Bool) 668082826U)) ? (((/* implicit */int) (unsigned short)16128)) : (((/* implicit */int) arr_13 [i_2 - 1] [i_2] [i_2])))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)0)) : (arr_6 [i_5])))))));
                arr_37 [i_2] = ((/* implicit */short) var_10);
                var_42 = ((/* implicit */unsigned int) var_11);
            }
            for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_13 = 2; i_13 < 19; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        arr_47 [i_2] [i_4] [i_4] [i_12] = ((/* implicit */long long int) var_6);
                        var_43 = ((/* implicit */unsigned int) var_13);
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 1788920590U)) + (5799034629102744045LL)));
                    }
                    arr_48 [(short)15] [(unsigned short)6] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_13] [i_13 - 2] [i_13 - 2] [i_13 - 2] [i_13]))))) ? (max((4627025207117852353ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)255))))));
                    arr_49 [i_13] [i_4] [i_12] [i_12] [i_2] = ((/* implicit */long long int) 1690212336U);
                    var_45 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) min((1365267116U), (((/* implicit */unsigned int) (unsigned short)49408))))))));
                }
                var_46 = ((/* implicit */unsigned short) (-((-(min((5799034629102744055LL), (((/* implicit */long long int) arr_0 [i_2]))))))));
            }
            var_47 |= ((/* implicit */signed char) (+(max((var_14), (((/* implicit */int) ((unsigned short) (unsigned short)0)))))));
            var_48 |= ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned int) var_6))));
        }
    }
    var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) var_4))));
    /* LoopSeq 3 */
    for (long long int i_15 = 0; i_15 < 25; i_15 += 1) 
    {
        var_50 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) + (arr_51 [i_15] [i_15]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16)))));
        var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_15] [i_15])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_50 [i_15]))))) : (((((((/* implicit */int) arr_50 [i_15])) <= (((/* implicit */int) arr_50 [12U])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_15]))) : (arr_51 [i_15] [i_15])))));
        var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) max((((/* implicit */long long int) max((((((/* implicit */_Bool) arr_50 [i_15])) ? (((/* implicit */int) var_7)) : (var_14))), (((/* implicit */int) (short)-17))))), (((long long int) min((arr_51 [(signed char)20] [i_15]), (6152251614174231618ULL)))))))));
    }
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        arr_54 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)108))))) ? (var_16) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_11)))))));
        arr_55 [i_16] = ((unsigned int) ((2166174361U) < (((/* implicit */unsigned int) -1546328712))));
        /* LoopNest 2 */
        for (unsigned int i_17 = 2; i_17 < 9; i_17 += 4) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    var_53 = ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (var_5)))) / (-7157870241364717601LL));
                    arr_61 [i_16] [i_16] = ((/* implicit */unsigned short) var_0);
                }
            } 
        } 
        var_54 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) var_13))));
    }
    for (long long int i_19 = 0; i_19 < 17; i_19 += 4) 
    {
        var_55 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-108))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1217782816)) ? (((/* implicit */unsigned int) arr_6 [i_19])) : (var_17)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_0), ((signed char)-31))))) : (((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */long long int) 268095079U)) : (-3463762829782501596LL)))));
        arr_66 [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_19])) * (var_1)))) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)6564))))), (((((/* implicit */_Bool) arr_27 [i_19] [i_19] [i_19] [i_19] [(short)10])) ? (arr_2 [20U] [i_19]) : (var_16))))) : (min((4026872237U), (((/* implicit */unsigned int) (signed char)-20))))));
        var_56 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_19] [i_19])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_40 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]))))) : (min((((/* implicit */unsigned int) var_10)), (3412690043U)))))), (((((/* implicit */_Bool) 18386014598693669348ULL)) ? (max((((/* implicit */unsigned long long int) var_3)), (var_1))) : (((/* implicit */unsigned long long int) ((22U) * (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
    }
}
