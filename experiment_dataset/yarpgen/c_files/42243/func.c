/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42243
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)32767))))) ? (var_9) : (((/* implicit */unsigned long long int) 875447099))));
        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-57))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (signed char)56));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (unsigned char)0))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            var_20 |= var_12;
            var_21 += ((/* implicit */unsigned char) var_9);
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    {
                        var_22 = ((/* implicit */signed char) var_0);
                        arr_16 [i_0] [i_0] [i_3] [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)4420)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_3] [i_4] [i_0] [4LL] [i_5])) || (((/* implicit */_Bool) arr_10 [i_0] [i_3]))))) : (((((/* implicit */_Bool) (unsigned short)3072)) ? (-875447081) : (((/* implicit */int) (signed char)52))))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                        var_24 -= ((/* implicit */int) (unsigned char)250);
                    }
                } 
            } 
        }
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) 14701107941894649500ULL)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_6])) : (((/* implicit */int) (unsigned char)20)))))));
            var_26 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0])) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) arr_0 [(_Bool)1] [i_6]))));
            arr_21 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)96)) ? (14701107941894649500ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62)))));
        }
        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
        {
            arr_24 [i_7] [(short)6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 928823335)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
            var_27 *= ((/* implicit */unsigned short) ((unsigned long long int) (short)(-32767 - 1)));
        }
        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */long long int) (signed char)-124);
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -4639827896794403456LL))))) : ((-(((/* implicit */int) (unsigned char)0))))));
        }
    }
    var_30 = ((/* implicit */unsigned long long int) var_1);
    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
    {
        for (short i_10 = 1; i_10 < 8; i_10 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 3; i_12 < 6; i_12 += 1) 
                    {
                        for (signed char i_13 = 2; i_13 < 8; i_13 += 1) 
                        {
                            {
                                var_32 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12295)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5252))) > (18446744073709551615ULL)))) : (((((/* implicit */_Bool) 1702302485)) ? (((/* implicit */int) arr_26 [i_12 + 4] [i_9])) : (((/* implicit */int) (unsigned short)60287))))));
                                var_33 &= ((/* implicit */signed char) var_2);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 1; i_14 < 9; i_14 += 4) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) 
                        {
                            {
                                arr_45 [i_14] [i_14] [i_14 + 1] [i_14] [i_11] [i_15] = ((/* implicit */short) max((min((arr_38 [i_14 - 1] [i_14 - 1] [i_10 + 1] [i_11] [i_10] [i_10] [i_10]), (arr_38 [i_14 - 1] [i_14 + 1] [i_10] [i_11] [i_10] [i_9] [i_9]))), (((((/* implicit */_Bool) 14058797131194309785ULL)) ? (arr_38 [i_14 - 1] [i_14 - 1] [i_10 + 1] [i_11] [i_10] [(_Bool)1] [i_10 + 2]) : (2147483392)))));
                                arr_46 [i_9] [i_10] [i_11] [i_11] [i_14] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65519))))) ? ((-(((/* implicit */int) arr_30 [i_9] [i_10 + 1])))) : (((/* implicit */int) arr_30 [i_15] [i_10 + 1]))));
                                var_34 = min((((/* implicit */unsigned long long int) var_14)), (min((((/* implicit */unsigned long long int) (unsigned short)24)), (11217796492146457467ULL))));
                                arr_47 [i_11] [i_9] = ((/* implicit */unsigned long long int) var_7);
                            }
                        } 
                    } 
                }
                var_35 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)114))));
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (_Bool)1))))) < (((/* implicit */int) (signed char)-68))))))));
}
