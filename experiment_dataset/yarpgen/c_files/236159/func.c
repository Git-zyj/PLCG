/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236159
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
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_7))));
    var_20 = ((/* implicit */short) ((((((/* implicit */int) max((var_2), (var_8)))) >= (((/* implicit */int) ((((/* implicit */int) var_17)) < (((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) - (var_16)))) ? ((-(var_18))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) : (max((((/* implicit */unsigned int) var_13)), (((var_18) & (var_1)))))));
    var_21 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) max((var_7), (((/* implicit */unsigned char) var_4))))) >= (((((/* implicit */int) var_11)) * (((/* implicit */int) var_11))))))), (min((var_3), (((/* implicit */long long int) var_0))))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)23753)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (short)-23780))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_23 += (+(((/* implicit */int) var_0)));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 4; i_2 < 13; i_2 += 2) 
            {
                var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_9)));
                arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(var_1)));
                arr_8 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_13) : (((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_6)) - (52137)))))));
                arr_9 [1ULL] = ((/* implicit */signed char) ((unsigned char) var_3));
                arr_10 [i_1] [i_1] [i_1] [5ULL] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_13 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) var_17)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_5 = 1; i_5 < 13; i_5 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) (((_Bool)1) ? (7406811615989760191ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23753)))));
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (-(var_15))))));
                        arr_22 [i_0] [i_1] [i_3] [i_0] [i_3] [i_0 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */int) var_2))));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned char)148))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_18)))));
                    }
                    for (int i_6 = 1; i_6 < 13; i_6 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))));
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) && (var_4)));
                    }
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) var_9))));
                    arr_27 [i_1] [i_1] [i_3] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2))));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                    {
                        arr_30 [i_7] [i_7] [i_3] [i_3] [i_1] [i_0 - 4] = ((/* implicit */short) ((long long int) var_0));
                        var_33 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
                    {
                        var_34 = ((/* implicit */long long int) ((unsigned long long int) var_10));
                        var_35 = ((/* implicit */unsigned long long int) var_8);
                        arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) var_4);
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_18)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) (short)-2087)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))) : (11039932457719791425ULL)))));
                    }
                }
            }
        }
        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1)) ? (((((/* implicit */_Bool) (short)32767)) ? (var_5) : (7010133211478383413LL))) : (((/* implicit */long long int) 2141232275U))));
            var_38 = ((/* implicit */int) (+(var_18)));
        }
        arr_36 [(unsigned short)10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_9) + (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_15)))));
        /* LoopSeq 2 */
        for (int i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_11 = 1; i_11 < 13; i_11 += 2) 
            {
                var_39 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) 16670808468114712779ULL)) ? (11039932457719791442ULL) : (11039932457719791441ULL)))));
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_9)))));
                            var_41 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) != (var_16))))));
                            arr_46 [(unsigned char)2] [(unsigned char)2] [i_11] [i_11] [i_11] [(unsigned char)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))) : (((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_18)))));
            }
            for (unsigned short i_14 = 0; i_14 < 14; i_14 += 2) 
            {
                arr_49 [i_14] [(short)12] [i_0 - 3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))));
                /* LoopNest 2 */
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    for (long long int i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        {
                            var_43 &= ((/* implicit */short) var_5);
                            var_44 = ((/* implicit */short) var_8);
                            var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((((/* implicit */long long int) var_1)) < (var_3))))));
                        }
                    } 
                } 
                var_46 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_18))) << (((var_13) - (1881097115)))));
            }
            arr_56 [i_10] = ((/* implicit */unsigned short) var_9);
        }
        for (unsigned char i_17 = 0; i_17 < 14; i_17 += 1) 
        {
            var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_10))))) ? (var_5) : (((/* implicit */long long int) (~(var_1))))));
            /* LoopSeq 1 */
            for (unsigned char i_18 = 2; i_18 < 11; i_18 += 3) 
            {
                arr_63 [i_18] [i_18] [i_18] [i_18 + 3] = ((/* implicit */int) ((((/* implicit */int) var_7)) > (((((/* implicit */_Bool) (short)-2076)) ? (2147483647) : (((/* implicit */int) (unsigned char)42))))));
                arr_64 [(signed char)4] [i_17] [i_0] [i_18 + 2] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) << (((((/* implicit */int) var_0)) - (37)))));
            }
            arr_65 [i_0] [i_17] |= ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_15)))));
            var_48 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) var_13))));
        }
    }
}
