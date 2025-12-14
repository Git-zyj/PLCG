/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238191
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
    var_16 &= ((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (((unsigned short) (+(9223372036854775807LL))))));
    var_17 = (~(((((((/* implicit */int) ((signed char) var_4))) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) var_1)), (var_9))) - (18446744073709545528ULL))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) min((max((var_4), (((/* implicit */unsigned short) var_1)))), (var_7)));
                var_19 = ((/* implicit */short) (((((-9223372036854775807LL - 1LL)) >= ((-9223372036854775807LL - 1LL)))) ? (max((1274395973U), (3020571335U))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 3731951616U)) ? (2147483622) : (((/* implicit */int) (signed char)127)))), (((/* implicit */int) (!(var_15)))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)48153)))))));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((unsigned int) var_3)))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 3; i_4 < 16; i_4 += 4) 
                    {
                        arr_12 [i_0] [i_4] = ((/* implicit */unsigned char) 9223372036854775807LL);
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((unsigned long long int) ((int) var_5))))));
                    }
                    for (signed char i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */_Bool) ((unsigned short) var_12));
                        arr_16 [i_0] [i_1] [i_3] [i_0] = ((((var_8) <= (2147483647))) ? (((((-1758691245459278987LL) + (9223372036854775807LL))) << (((/* implicit */int) var_15)))) : (((/* implicit */long long int) ((int) var_10))));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_24 *= ((/* implicit */int) var_9);
                        arr_21 [4] [i_1] [i_1] [(signed char)2] [i_1] |= ((/* implicit */unsigned char) (((-9223372036854775807LL - 1LL)) / (9223372036854775807LL)));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */int) (short)13546);
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (var_12)));
                    }
                    arr_26 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 1278013924U))));
                    arr_27 [(unsigned short)12] [i_0 - 1] [i_1] [i_3] &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))));
                }
                for (short i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_9 = 2; i_9 < 16; i_9 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 1; i_10 < 16; i_10 += 4) 
                        {
                            arr_36 [i_0] [i_1] [i_8] [i_0] [i_10] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (signed char)120)) && (((/* implicit */_Bool) (unsigned short)0)))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)238))));
                            arr_37 [i_0] [i_0] [i_8] [i_9 + 1] [i_10] = ((/* implicit */unsigned short) ((signed char) (short)-27908));
                        }
                        for (short i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            arr_41 [i_0] [i_1] [i_8] [i_9] [i_11] [i_0] [i_0 - 1] = ((/* implicit */signed char) (-(((/* implicit */int) var_15))));
                            var_28 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_9)))));
                            arr_42 [i_0] [i_11] [i_8] [i_9] [i_11] |= ((/* implicit */long long int) ((short) var_5));
                            var_29 = ((unsigned short) (short)495);
                        }
                        for (short i_12 = 4; i_12 < 14; i_12 += 2) 
                        {
                            arr_45 [i_0 - 1] [i_1] [i_0] [i_9 - 1] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10ULL)) ? (-1934289973) : (((/* implicit */int) (unsigned short)65535))));
                            arr_46 [5U] [i_1] [i_0] [i_9] [i_12 + 2] = ((int) var_2);
                        }
                        var_30 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_8)))));
                    }
                    for (short i_13 = 0; i_13 < 17; i_13 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_14 = 0; i_14 < 17; i_14 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) ((signed char) (short)498));
                            var_32 *= (+(((/* implicit */int) var_11)));
                        }
                        for (short i_15 = 2; i_15 < 16; i_15 += 1) 
                        {
                            arr_55 [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) var_6))), (min((1934289973), (((/* implicit */int) ((unsigned short) (unsigned short)0)))))));
                            arr_56 [i_13] [i_1] [i_1] [i_13] [i_15] [i_0] |= ((/* implicit */unsigned short) var_8);
                        }
                        arr_57 [i_0] [i_1] [i_8] [i_0] = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) var_8)))));
                        arr_58 [i_0] [i_0] [i_8] [i_13] = (-(((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) var_5))))));
                    }
                    /* vectorizable */
                    for (short i_16 = 0; i_16 < 17; i_16 += 4) /* same iter space */
                    {
                        arr_63 [i_0] [i_0] [i_8] = ((/* implicit */short) ((int) (unsigned short)65525));
                        /* LoopSeq 1 */
                        for (signed char i_17 = 2; i_17 < 15; i_17 += 3) 
                        {
                            var_33 = ((/* implicit */int) ((unsigned long long int) (unsigned short)0));
                            arr_66 [i_17 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((18446744073709551615ULL) >> (((1702542346U) - (1702542342U))))));
                            arr_67 [i_0] [i_1] [i_8] [i_0] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13546)) ? (((long long int) (unsigned short)65535)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)35879)))))));
                            var_34 = ((/* implicit */signed char) 16776192);
                            var_35 = ((/* implicit */signed char) ((short) 17754450979707392592ULL));
                        }
                        arr_68 [i_0] [i_16] = ((/* implicit */_Bool) ((unsigned int) (short)7019));
                    }
                    for (short i_18 = 0; i_18 < 17; i_18 += 3) 
                    {
                        arr_72 [i_0] [i_1] [i_8] [i_18] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-518))));
                        var_36 = ((/* implicit */short) ((int) max(((unsigned short)65529), (var_4))));
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (~(((/* implicit */int) (signed char)12)))))) ? (((/* implicit */int) (unsigned short)6402)) : ((((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) (short)7019)) : ((+(var_8)))))));
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4)))) + (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8192)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_5))))))));
                        var_39 = (-(((int) var_7)));
                    }
                    var_40 *= min((((/* implicit */int) max((((/* implicit */short) var_15)), ((short)32746)))), ((+(((/* implicit */int) var_11)))));
                }
            }
        } 
    } 
    var_41 *= ((/* implicit */_Bool) ((unsigned int) ((unsigned int) min((-1159479199573007485LL), (((/* implicit */long long int) var_1))))));
}
