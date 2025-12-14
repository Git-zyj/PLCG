/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236796
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
    var_13 &= ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_14 [i_0 - 1] [i_0] [i_2] [i_2] [i_2] [i_3] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1 + 1] [i_0 - 1]))))) ? (arr_2 [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65529), (((/* implicit */unsigned short) (unsigned char)6)))))));
                        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_11 [i_1 - 1] [i_3])))) ? (((/* implicit */long long int) ((arr_11 [i_1 + 2] [i_2]) / (arr_11 [i_1 - 1] [i_2])))) : (((((/* implicit */_Bool) 0ULL)) ? (1018450019202563316LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0] [i_0]))))))))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) arr_11 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 21; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 2; i_6 < 20; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            {
                                arr_28 [i_0] [i_4 - 1] [i_5] [i_5] [1ULL] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) min(((short)-5160), (((/* implicit */short) (unsigned char)188))))), (arr_23 [i_0] [i_7] [i_0] [i_6 - 1] [(signed char)20] [i_4])));
                                var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_4] [i_5] [i_5] [i_5 - 1])) * (((/* implicit */int) arr_20 [(unsigned char)9] [i_4] [(_Bool)1] [i_5 + 2] [i_5 + 3]))))), ((-(min((((/* implicit */unsigned long long int) arr_0 [i_5] [i_7])), (15738578125267857464ULL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            {
                                var_16 = min((((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4 - 1] [i_0 + 1]))) : (min((((/* implicit */unsigned long long int) (unsigned short)49521)), (18446744073709551604ULL))))), (((((/* implicit */_Bool) min((var_4), (arr_22 [i_0] [i_5 + 4] [i_8] [i_9])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5601))) & (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) arr_7 [i_0] [(short)18] [i_0])) : (((/* implicit */int) (unsigned char)200))))))));
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((((/* implicit */_Bool) max(((unsigned char)32), (arr_3 [i_0 - 1] [i_4])))) ? (((arr_32 [i_0] [i_0] [i_4 + 1] [i_4] [i_5] [i_8] [i_9]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_4] [i_5] [i_8] [i_9]))))) - (min((5936636295081562843ULL), (((/* implicit */unsigned long long int) (unsigned char)27)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        for (short i_11 = 4; i_11 < 21; i_11 += 2) 
                        {
                            {
                                var_18 |= ((/* implicit */signed char) (unsigned short)7);
                                arr_40 [i_0 - 1] [i_4 - 1] [i_5 + 2] [i_10] [i_0] = ((/* implicit */long long int) ((unsigned char) min((arr_21 [i_5] [i_10] [i_11 + 1] [i_11 - 3] [i_11]), (arr_21 [i_11 - 4] [i_11] [i_11 - 4] [i_11] [i_11]))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_16 [i_0 + 1] [i_4 - 1])))) ? (min((((unsigned long long int) (signed char)97)), (((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_0] [i_0] [i_0 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5]))) : (var_6)))) ? (18446744073709551615ULL) : ((~(18446744073709551603ULL))))))))));
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        for (long long int i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                                var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_0 - 1] [i_0 - 1] [i_0] [i_12] [i_13])) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5] [i_12] [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_5])) : (var_11)))) : (max((arr_42 [i_0] [i_5] [(unsigned short)6] [i_0]), (((/* implicit */long long int) arr_21 [i_13] [i_12] [i_4] [i_4] [i_0]))))))));
                                var_22 += ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) (!(arr_38 [(unsigned short)19] [i_13])))))));
                                arr_47 [i_0 - 1] [i_4] [i_0] [i_12] [i_13] = ((/* implicit */long long int) (unsigned short)7);
                                arr_48 [i_0 - 1] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_38 [21ULL] [i_0 + 1]))))) : (((-8375119871324908138LL) % (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) 
    {
        /* LoopNest 3 */
        for (int i_15 = 2; i_15 < 8; i_15 += 4) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (short i_17 = 3; i_17 < 10; i_17 += 4) 
                {
                    {
                        var_23 += ((/* implicit */int) (short)-551);
                        var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) var_6)) * (11331903113157310569ULL))), (((unsigned long long int) 2708165948441694151ULL))))) ? ((-(min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (7ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((1018450019202563335LL), (((/* implicit */long long int) (unsigned char)20)))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3545))) > (2051696554622796509ULL)))))))))));
                        arr_57 [i_16] = 4611686018427387904ULL;
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_19 [i_14] [i_14])), (2051696554622796526ULL))), (min((15128860041222984598ULL), (18446744073709551600ULL)))));
        var_26 = ((/* implicit */_Bool) min((((/* implicit */int) (signed char)45)), (((((/* implicit */int) (signed char)-66)) * (((/* implicit */int) (signed char)-1))))));
        /* LoopNest 2 */
        for (short i_18 = 0; i_18 < 11; i_18 += 4) 
        {
            for (unsigned short i_19 = 4; i_19 < 10; i_19 += 2) 
            {
                {
                    var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (2051696554622796509ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30176)))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-97)) < ((((_Bool)0) ? (((/* implicit */int) arr_29 [i_14] [i_18] [i_14] [i_18])) : (((/* implicit */int) (short)29508))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) 15738578125267857464ULL))) <= (((2051696554622796526ULL) * (((/* implicit */unsigned long long int) var_11)))))))));
                    arr_63 [i_19] [i_18] [i_14] = ((/* implicit */signed char) var_4);
                    var_28 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_18] [i_19] [i_19] [i_19 - 3])) ? (((/* implicit */int) arr_24 [i_19] [i_19] [i_19] [i_19] [i_19 + 1] [i_19])) : (((/* implicit */int) var_8)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 1; i_20 < 10; i_20 += 2) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 11; i_21 += 4) 
                        {
                            {
                                arr_68 [i_14] [i_18] [i_18] [i_20] [i_20] [i_21] [i_21] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) arr_0 [i_20 + 1] [i_20])) & (((/* implicit */int) arr_0 [i_20 - 1] [i_20])))));
                                arr_69 [i_14] [i_20] [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((-170822759) & (((/* implicit */int) (signed char)-26))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_3))))) : (11ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)34)))))));
                                var_29 *= ((/* implicit */short) (~((+(arr_46 [i_21])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
