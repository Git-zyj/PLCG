/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209693
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
    var_17 = ((/* implicit */int) ((unsigned int) (+(((4362680608379501277LL) & (-1153565860754733443LL))))));
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) < (((var_8) + (((/* implicit */long long int) ((/* implicit */int) var_10))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65534)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = var_0;
        var_19 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (arr_0 [i_0] [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(arr_4 [i_1])))) || (((/* implicit */_Bool) ((1557461061U) / (1960842812U)))))) ? (((((/* implicit */_Bool) ((arr_6 [i_1]) ? (arr_1 [i_1]) : (((/* implicit */int) var_11))))) ? ((+(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */long long int) arr_0 [i_1] [i_1])) : (6220686480889025399LL)))))) : (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 1557461075U)) ? (((/* implicit */unsigned long long int) 990283904)) : (17270701294745993280ULL)))));
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 9; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_21 *= ((/* implicit */_Bool) ((unsigned short) arr_6 [i_3 + 1]));
                            arr_19 [6ULL] [6ULL] [i_3] [i_4] [6ULL] = ((/* implicit */long long int) (+(1386406392)));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [i_6] [i_4] [i_3] [i_2] [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((1557461061U) == (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                            arr_23 [i_6] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(-990283904)))) != (arr_2 [i_6])));
                            arr_24 [i_2] [i_6] [i_3 - 3] [i_6] [i_6] [i_6] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_12 [i_3 + 3] [i_3 + 3] [i_3 + 2] [11ULL]) : (((/* implicit */unsigned long long int) 2251799813554176LL))));
                            arr_25 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 12219138599338890125ULL)) ? (((/* implicit */unsigned long long int) -990283904)) : (17270701294745993280ULL)));
                            var_22 = ((/* implicit */unsigned int) (+(arr_12 [i_3] [i_3 + 1] [i_1] [i_1])));
                        }
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            arr_29 [i_3] [i_3 + 1] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */long long int) var_1)) ^ (var_8))), (((/* implicit */long long int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_2)))))))));
                            arr_30 [i_1] [i_2] [i_3] [i_3] [4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_15)))) - (4294967295U))))));
                        }
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            var_23 = ((/* implicit */short) max((var_9), (((/* implicit */unsigned long long int) ((_Bool) arr_12 [i_8] [i_8] [i_8] [i_1])))));
            var_24 = var_14;
            arr_34 [i_8] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) : ((-(max((var_13), (((/* implicit */unsigned long long int) var_8))))))));
            arr_35 [i_8] [i_8] [i_1] = ((/* implicit */_Bool) arr_32 [i_8]);
        }
        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            arr_38 [i_1] [i_9] = ((/* implicit */unsigned int) (+(((max((arr_31 [i_1] [i_9] [i_1]), (((/* implicit */unsigned long long int) 1557461061U)))) % ((~(arr_13 [i_1] [i_9])))))));
            arr_39 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)254)))))))));
            var_25 = ((/* implicit */_Bool) ((var_10) ? (((unsigned long long int) (+(((/* implicit */int) (unsigned char)234))))) : (255ULL)));
        }
        for (int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            var_26 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_9))) ? ((+(var_8))) : (((/* implicit */long long int) ((var_3) ? (2737506234U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10] [i_10])))))))))));
            var_27 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(17270701294745993280ULL))))));
            /* LoopNest 3 */
            for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_51 [i_10] [i_11] [i_11] [i_12] [i_13] [i_12] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_45 [i_12] [i_1]))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-7098)) : (((/* implicit */int) var_3)))) - ((+(((/* implicit */int) arr_47 [(unsigned char)0] [i_10] [i_10] [i_12] [i_13]))))))) : (min((((/* implicit */unsigned int) ((arr_1 [i_10]) - (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) -1182357464)) ? (2340174886U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35699))))))));
                            arr_52 [i_1] [i_10] [i_11] [2U] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 534168981U)) ? (((/* implicit */int) var_5)) : (var_0)))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) arr_42 [i_13] [i_10] [i_10] [i_10]))))) > ((+(1176042778963558330ULL)))));
                            var_28 *= ((/* implicit */int) var_10);
                            var_29 = ((/* implicit */_Bool) ((max((((arr_16 [i_1] [i_1] [i_11] [i_11] [i_13] [(_Bool)1] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35699))))), (((/* implicit */unsigned long long int) var_15)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_1] [i_10])))));
                        }
                    } 
                } 
            } 
            var_30 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_33 [i_10])) ? (((/* implicit */int) (unsigned short)29837)) : (((/* implicit */int) var_14))))))) ? (((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_1] [i_10]))) : (((18446744073709551615ULL) % (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) ((((var_12) & (arr_48 [i_1] [(unsigned char)2] [i_10] [i_10] [(unsigned char)2]))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
        }
    }
    /* LoopNest 3 */
    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 2) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (unsigned short i_16 = 0; i_16 < 24; i_16 += 3) 
            {
                {
                    var_31 = ((/* implicit */short) min((((((/* implicit */int) (short)0)) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((arr_59 [i_16]) > (4294967295U))))));
                    /* LoopNest 2 */
                    for (int i_17 = 3; i_17 < 20; i_17 += 3) 
                    {
                        for (int i_18 = 1; i_18 < 23; i_18 += 1) 
                        {
                            {
                                arr_69 [i_15] [i_17] [i_16] [i_15] [i_14] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_18] [i_18 - 1] [i_15] [i_18 + 1] [i_18 - 1] [i_18 + 1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)45684)) * (((/* implicit */int) arr_63 [i_18] [i_18 + 1] [i_15] [i_18 - 1] [i_18] [(short)8]))))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 1190462975)) : (6227605474370661489ULL)))));
                                var_32 = ((/* implicit */unsigned int) (((((_Bool)1) ? (562949953421311LL) : (((/* implicit */long long int) 1982101575U)))) ^ (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)211)), (arr_68 [i_16] [i_17] [i_18 - 1])))))));
                                arr_70 [i_15] [i_18 + 1] [i_16] [i_17] [i_18] [i_18] = ((/* implicit */long long int) (+((-(((((/* implicit */_Bool) arr_68 [i_18] [i_16] [i_14])) ? (2737506234U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_14] [i_14] [i_16] [i_17] [i_17] [i_18 + 1])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_19 = 0; i_19 < 24; i_19 += 2) 
                    {
                        for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 3) 
                        {
                            {
                                arr_75 [i_14] [i_14] [i_16] [i_15] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_61 [i_15])) ^ (((arr_72 [i_19] [i_14] [i_15] [i_14]) & (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) || (((/* implicit */_Bool) (short)-7317))));
                                var_33 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((17270701294745993272ULL) != (4238063491879783564ULL))))) + (var_13)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)19827))))) : (((unsigned int) var_6))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) var_10))));
}
