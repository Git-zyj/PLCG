/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232951
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
    var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) && (((/* implicit */_Bool) max((((/* implicit */int) var_12)), (var_0)))))) ? (1359236720079829537LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */long long int) (-(var_7)));
                        arr_11 [i_0] [i_2] [i_1] [i_0] = (~(((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_1 [i_0]))))) * (((/* implicit */int) (signed char)54)))));
                    }
                    var_18 = ((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_0]);
                }
            } 
        } 
        var_19 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_3))))), (max((963840807902929271ULL), (11716290339021427163ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((var_9), ((unsigned char)37)))), (((long long int) var_15)))))));
        var_20 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_0] [(signed char)1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_14))), (((((arr_10 [(signed char)4] [i_0] [(short)17] [(short)17]) + (9223372036854775807LL))) << (((/* implicit */int) arr_4 [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) >= (((/* implicit */int) max(((signed char)-2), (((/* implicit */signed char) (_Bool)0)))))))) : (((/* implicit */int) max((min((var_10), (var_12))), (((/* implicit */signed char) (_Bool)1)))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_0] [(signed char)1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_14))), (((((arr_10 [(signed char)4] [i_0] [(short)17] [(short)17]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_4 [i_0])) - (1)))))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) >= (((/* implicit */int) max(((signed char)-2), (((/* implicit */signed char) (_Bool)0)))))))) : (((/* implicit */int) max((min((var_10), (var_12))), (((/* implicit */signed char) (_Bool)1))))))));
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        var_21 -= ((/* implicit */signed char) ((long long int) max((max(((signed char)-42), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) (_Bool)1)))));
        arr_15 [i_4] = max((((((/* implicit */int) var_2)) & (((/* implicit */int) arr_13 [i_4])))), (((/* implicit */int) ((unsigned char) max((((/* implicit */int) arr_9 [12LL] [8U] [i_4] [8U] [8U] [12LL])), (-948763662))))));
        var_22 = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) arr_14 [i_4])), ((+(18446744073709551615ULL))))));
    }
    for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                {
                    var_23 = arr_7 [i_5] [i_6] [i_5] [i_5];
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 2; i_8 < 12; i_8 += 3) 
                    {
                        for (long long int i_9 = 4; i_9 < 14; i_9 += 1) 
                        {
                            {
                                var_24 |= ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) var_4)));
                                var_25 &= var_15;
                            }
                        } 
                    } 
                    var_26 ^= ((/* implicit */_Bool) ((int) arr_16 [i_6]));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            for (unsigned int i_11 = 2; i_11 < 15; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
                        var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_8), (min((((/* implicit */unsigned long long int) var_2)), (var_8))))))));
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 1 */
    for (signed char i_13 = 0; i_13 < 23; i_13 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_14 = 3; i_14 < 20; i_14 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_15 = 1; i_15 < 20; i_15 += 4) 
            {
                for (int i_16 = 0; i_16 < 23; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 23; i_17 += 1) 
                    {
                        {
                            arr_54 [i_13] [i_13] [i_15 + 1] [i_15 + 1] [i_13] = ((/* implicit */unsigned char) (_Bool)1);
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_44 [(_Bool)1] [i_15 - 1] [(_Bool)1])) ? (((((/* implicit */_Bool) 3361833167U)) ? (min((((/* implicit */long long int) var_6)), (var_14))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1042363471U)) || (((/* implicit */_Bool) arr_47 [i_13] [i_14] [15LL] [(short)20])))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)139)))))))))));
                            arr_55 [i_13] [i_17] [i_15 + 3] [i_15] [i_15 + 3] [i_14] [i_13] = ((/* implicit */long long int) max(((signed char)-16), (((/* implicit */signed char) arr_53 [i_13] [i_13]))));
                            var_31 ^= (signed char)98;
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_43 [i_14 - 3] [i_14 - 3]), (arr_10 [i_14] [i_14 - 3] [i_14 - 3] [2U])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (arr_45 [i_13] [i_14 + 3]))))) : (max((((/* implicit */unsigned int) (_Bool)0)), (((((/* implicit */_Bool) (unsigned char)241)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
            var_33 ^= ((/* implicit */unsigned char) (short)-12928);
        }
        for (signed char i_18 = 3; i_18 < 20; i_18 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3710752094U)) ? (((/* implicit */long long int) var_0)) : ((+(9223372036854775807LL)))))) ? (max((((((/* implicit */_Bool) 534773760)) ? (((/* implicit */long long int) 2151881019U)) : (var_14))), (((long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_9))))))))))));
            arr_59 [i_13] [i_13] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_42 [i_18 - 1])), (((((/* implicit */_Bool) var_4)) ? (2461219353U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 253952)), (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (var_11)))))) && (((/* implicit */_Bool) (-(((long long int) var_10))))))))));
            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) 2086577735240308063LL))));
        }
        var_37 = ((/* implicit */_Bool) max((var_37), (var_1)));
    }
}
