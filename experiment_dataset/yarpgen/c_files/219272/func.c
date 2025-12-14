/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219272
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)63))))));
                    arr_8 [i_0] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6394)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))) : (4101304790U)))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (unsigned char)0)))))));
                    var_17 ^= ((/* implicit */unsigned char) ((unsigned int) ((int) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_13))))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_13)))) : ((+(var_12))))))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) var_14);
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */short) ((unsigned int) ((unsigned char) (unsigned char)0)));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        var_19 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((4915377661052742981LL) >> (((4915377661052742981LL) - (4915377661052742935LL))))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)11))))))))) >> (((((/* implicit */int) var_11)) - (147)))));
                        var_20 += ((/* implicit */long long int) var_6);
                        arr_17 [i_4] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56251)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_14)) ? (((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) (short)17193)) - (17189))))) : (((/* implicit */int) (unsigned char)153))))));
                        arr_18 [i_4] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) 4915377661052742999LL)) ? (((/* implicit */int) (!(var_10)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)21)))))));
                    }
                } 
            } 
        } 
    }
    var_21 += ((/* implicit */unsigned char) (!(var_10)));
    /* LoopNest 2 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                var_22 |= ((/* implicit */short) ((((((/* implicit */_Bool) -4915377661052742999LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (var_3))) * (((((/* implicit */_Bool) var_5)) ? (-4915377661052743000LL) : (-1531022031905195791LL)))));
                var_23 = ((/* implicit */unsigned char) var_4);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_8 = 1; i_8 < 17; i_8 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_9 = 2; i_9 < 20; i_9 += 3) 
                    {
                        arr_30 [i_6] [i_6] [i_7] [i_8] [i_8] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
                        arr_31 [i_6] [i_7] [i_6] [i_9] = ((unsigned short) (unsigned char)24);
                    }
                    for (short i_10 = 1; i_10 < 18; i_10 += 3) 
                    {
                        var_24 += ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned int) 958613274)) : (var_8)));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-6415)) && (((/* implicit */_Bool) 4915377661052743012LL))));
                        arr_34 [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)42))));
                    }
                    arr_35 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned char) (unsigned char)140));
                    arr_36 [i_8] [i_6] [i_6] [i_6] = ((/* implicit */short) ((int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_11)))));
                }
                for (unsigned short i_11 = 2; i_11 < 20; i_11 += 4) 
                {
                    var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_1)))))) ? (((long long int) 972646264U)) : (((var_1) ? (((((/* implicit */_Bool) -8861110199919160161LL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (var_7)))));
                    arr_39 [i_6] [i_6] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)88)) != (((/* implicit */int) (unsigned char)107))))) : (((((/* implicit */_Bool) ((short) (unsigned char)148))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)252)) <= (((/* implicit */int) var_11))))) : (((/* implicit */int) min(((short)-20911), ((short)-16))))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_45 [i_13] [i_6] [i_11] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)153)) ? (var_6) : (((/* implicit */int) (unsigned char)237))))) ? (((/* implicit */long long int) ((var_10) ? (((/* implicit */int) (unsigned short)27368)) : (((/* implicit */int) var_10))))) : ((+(-4915377661052743026LL)))));
                                arr_46 [i_6] [i_7] [i_11] [i_6] [i_13] = ((/* implicit */int) max((((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))));
                                var_27 -= ((/* implicit */long long int) ((short) (short)20911));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 3; i_14 < 18; i_14 += 1) 
                    {
                        for (signed char i_15 = 0; i_15 < 21; i_15 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) var_9);
                                arr_52 [i_15] [i_6] [i_11] [i_14] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (var_12)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (unsigned short)5127)))) >> (((/* implicit */int) (!(((var_10) || (((/* implicit */_Bool) var_8)))))))));
                                var_29 *= ((/* implicit */unsigned short) (!((!((_Bool)0)))));
                            }
                        } 
                    } 
                    arr_53 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24414))) : (max((var_3), (((/* implicit */long long int) (short)496))))));
                }
                arr_54 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_3) != (((/* implicit */long long int) ((/* implicit */int) (short)496)))))) != (((/* implicit */int) var_11))));
                arr_55 [i_6] [i_6] = ((/* implicit */long long int) ((unsigned long long int) 24LL));
            }
        } 
    } 
}
