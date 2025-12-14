/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49430
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) min(((-(arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) max((((unsigned char) arr_0 [i_0] [i_0])), (((/* implicit */unsigned char) min((arr_1 [i_0] [13LL]), (arr_1 [i_0] [3LL])))))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((3162745820883113358ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) != (((arr_0 [i_0] [i_0]) >> (((((/* implicit */int) var_5)) - (215)))))))) >> (((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */long long int) (_Bool)1)), (var_10))) : (((/* implicit */long long int) arr_0 [i_0] [i_0]))))));
        var_15 += ((/* implicit */long long int) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_16 -= ((/* implicit */_Bool) arr_3 [i_1]);
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1349948102)) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (456884818U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)186))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((arr_0 [i_1] [(short)11]) - (1296883865U))))))));
    }
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */int) (_Bool)1);
                            var_19 = ((/* implicit */signed char) (unsigned char)48);
                            var_20 = ((/* implicit */unsigned short) ((_Bool) var_7));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */int) var_2);
                            var_22 = ((/* implicit */signed char) ((long long int) (!(arr_13 [i_2] [i_2] [i_5] [i_5]))));
                        }
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-16966))))) + (((long long int) arr_18 [i_2] [i_5] [i_4] [i_5] [i_2] [9ULL]))));
                            var_24 = ((/* implicit */unsigned char) ((unsigned int) (signed char)54));
                        }
                        var_25 = ((/* implicit */long long int) ((_Bool) (short)16966));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100))) | (arr_6 [i_2] [i_2])));
                        var_27 = ((/* implicit */unsigned short) arr_10 [i_2] [i_3] [i_4]);
                        var_28 = ((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)0)))) << (((((/* implicit */int) var_7)) >> (((12906364632976934512ULL) - (12906364632976934501ULL)))))));
                        var_29 = ((/* implicit */_Bool) ((2632557248507406750ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_3] [i_2])) : (((/* implicit */int) arr_14 [(_Bool)1] [i_3] [i_3])))))));
                        var_30 = (+(((/* implicit */int) ((unsigned short) var_10))));
                    }
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            var_31 = ((/* implicit */short) (-(((min((4846264992438056775LL), (((/* implicit */long long int) arr_7 [i_2])))) ^ (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-54)) ? (15814186825202144859ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50479)))));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) min((((/* implicit */unsigned int) (-2147483647 - 1))), (1874349782U))))) < (((/* implicit */int) var_9))));
                            var_34 = ((/* implicit */short) (_Bool)1);
                        }
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_21 [4] [i_2] [i_2] [i_3] [i_4] [i_10]))))) ^ (max((((/* implicit */long long int) var_9)), (var_10))))))));
                        var_36 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15034)) ? (133071258U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) - (max((min((((/* implicit */unsigned long long int) arr_3 [i_2])), (15814186825202144862ULL))), (((((/* implicit */_Bool) (unsigned char)0)) ? (15814186825202144862ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50473)))))))));
                        var_37 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_2] [i_2] [i_10])))))) ? (var_0) : (((var_0) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15061)))))))) * (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [6] [(unsigned char)5] [i_2] [i_2] [i_2]))) / (3331549575505540075ULL))))));
                    }
                    var_38 -= ((/* implicit */unsigned char) ((-851524748) > (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_39 = ((/* implicit */unsigned long long int) (~((+(var_10)))));
    /* LoopSeq 1 */
    for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_13 = 2; i_13 < 13; i_13 += 4) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    var_40 = arr_33 [i_13];
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 2; i_15 < 13; i_15 += 2) 
                    {
                        for (short i_16 = 0; i_16 < 14; i_16 += 3) 
                        {
                            {
                                arr_44 [i_15] [i_16] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (arr_39 [i_13] [i_14] [i_16])));
                                var_41 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [1] [i_13 + 1] [i_13 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_32 [i_15]))))), (min((2855096617U), (((/* implicit */unsigned int) arr_38 [i_12] [(signed char)2] [i_12]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_13 + 1]))) | (arr_0 [(short)13] [6])))) ? (((/* implicit */unsigned long long int) 3473576130U)) : (min((((/* implicit */unsigned long long int) var_0)), (18446744073709551609ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -314059767))))));
                                var_42 = ((/* implicit */int) min((((/* implicit */long long int) (!((!(((/* implicit */_Bool) (signed char)56))))))), (((-5201414561370990744LL) | (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)100)) * (((/* implicit */int) (_Bool)0)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_45 [i_12] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)15070)), (1070274273)));
        var_43 = ((/* implicit */unsigned int) var_1);
        var_44 = ((/* implicit */signed char) max((((15814186825202144859ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned char) (_Bool)0)))))))), (((/* implicit */unsigned long long int) ((arr_40 [i_12] [i_12] [i_12] [i_12] [i_12]) ? (((/* implicit */int) arr_40 [i_12] [i_12] [5] [5] [i_12])) : (((/* implicit */int) (unsigned short)50465)))))));
    }
}
