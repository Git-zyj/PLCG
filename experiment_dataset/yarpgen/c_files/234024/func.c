/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234024
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */int) ((signed char) 81645835));
                                var_14 |= ((int) ((((/* implicit */_Bool) ((arr_2 [i_2] [i_2] [i_1]) ? (((/* implicit */int) (short)-22829)) : (((/* implicit */int) arr_1 [i_4]))))) && ((!(((/* implicit */_Bool) (short)-1))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 1; i_5 < 19; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (unsigned char)91))));
                            var_16 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)0))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        {
                            arr_27 [(signed char)20] &= ((/* implicit */signed char) max((((/* implicit */int) ((signed char) arr_5 [i_0] [i_0] [(short)18]))), (min((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0] [(signed char)4])) > (93426791)))), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_19 [i_8] [i_7] [i_1] [i_0])) : (((/* implicit */int) (signed char)-109))))))));
                            arr_28 [(short)18] [(unsigned char)6] [i_7] [(_Bool)1] &= ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55))) : (18446744073709551615ULL)))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)-55))))))) ? ((~(((/* implicit */int) max((((/* implicit */short) (signed char)0)), ((short)5247)))))) : (((((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) arr_25 [i_0] [i_1] [i_8 + 1] [i_1] [i_0] [(signed char)15])) : (((/* implicit */int) (signed char)-16)))) | (arr_18 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1])))));
                            arr_29 [i_1] [10ULL] [i_7] [i_8 + 1] = ((/* implicit */signed char) ((arr_16 [i_0] [i_1] [(unsigned char)1] [i_1]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_26 [i_0] [i_0] [i_8] [i_8]))) ? (((((/* implicit */_Bool) (short)5247)) ? (((/* implicit */int) arr_10 [i_7] [i_1] [i_1])) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_7] [(unsigned char)20])))) : ((+(((/* implicit */int) var_13)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (short i_10 = 1; i_10 < 16; i_10 += 3) 
        {
            for (signed char i_11 = 2; i_11 < 17; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        for (short i_13 = 0; i_13 < 19; i_13 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-31761))))) ? (((int) ((((/* implicit */_Bool) arr_16 [i_9] [i_9] [i_11 - 1] [i_12])) ? (((/* implicit */int) arr_34 [i_12] [i_12])) : (((/* implicit */int) arr_26 [i_9] [i_10 + 1] [i_9] [i_12]))))) : (((/* implicit */int) arr_8 [i_9] [i_10] [i_12] [i_13]))));
                                arr_45 [i_9] [(unsigned char)0] [i_10] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_9] [i_12] [i_11] [i_9])) - ((((((~(((/* implicit */int) arr_4 [i_9])))) + (2147483647))) >> ((((~(-1443114050))) - (1443114041)))))));
                                var_19 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_44 [i_9])) || (((/* implicit */_Bool) arr_24 [i_9] [i_10 - 1]))))));
                                arr_46 [i_9] [i_10] [i_10 + 3] [i_10 + 2] [i_10] [i_9] = ((/* implicit */_Bool) (+(((((((/* implicit */int) arr_42 [i_10 - 1] [i_10 - 1] [i_11] [i_11 + 2] [i_11 + 1] [i_11 + 2] [i_11 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_42 [i_10 + 2] [i_11] [i_10 + 2] [i_11] [(short)10] [i_11 + 1] [i_11 + 1])) + (145)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        for (signed char i_15 = 1; i_15 < 16; i_15 += 1) 
                        {
                            {
                                arr_52 [i_9] [i_9] [i_9] [i_14] [i_15] = ((/* implicit */unsigned char) -5);
                                arr_53 [i_9] [(short)8] [i_11 - 2] [i_11] [i_14] [i_14] [i_15] &= ((/* implicit */int) ((short) min((((signed char) arr_12 [i_9] [(signed char)10] [(unsigned char)8] [i_10] [i_10] [i_14])), (var_6))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((2147221504) ^ (((/* implicit */int) arr_14 [i_9] [i_10] [i_9] [i_14] [i_9]))))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_10])) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) var_1))))) ? (((unsigned long long int) (short)20919)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_9])) ? (((/* implicit */int) (short)31)) : (((/* implicit */int) (signed char)-1)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 2; i_16 < 15; i_16 += 1) 
                    {
                        for (signed char i_17 = 0; i_17 < 19; i_17 += 3) 
                        {
                            {
                                var_21 += ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)20)) : (((/* implicit */int) arr_25 [i_9] [i_10] [i_16 + 4] [2] [i_16 + 4] [i_11 + 1])))) - (((/* implicit */int) min((arr_25 [(short)0] [(short)0] [(short)0] [(signed char)0] [i_16 + 4] [i_11 + 1]), (arr_25 [i_9] [i_10] [i_9] [0ULL] [i_16 - 2] [i_11 - 2])))));
                                var_22 = ((/* implicit */signed char) max((((((/* implicit */int) ((((/* implicit */int) (unsigned char)109)) == (((/* implicit */int) (signed char)0))))) % (((/* implicit */int) arr_10 [(unsigned char)9] [i_11 - 1] [i_9])))), (((/* implicit */int) ((((/* implicit */_Bool) min((9110927592846269221ULL), (9335816480863282394ULL)))) || (((/* implicit */_Bool) ((signed char) arr_10 [i_10] [i_11 + 2] [i_9]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_18 = 2; i_18 < 18; i_18 += 4) 
                    {
                        for (int i_19 = 1; i_19 < 16; i_19 += 3) 
                        {
                            {
                                var_23 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) (short)26372)) : (((/* implicit */int) (signed char)1))))));
                                var_24 ^= ((/* implicit */unsigned char) (((~(((/* implicit */int) max(((short)26352), (((/* implicit */short) (signed char)108))))))) - (((/* implicit */int) arr_64 [i_9] [i_9] [i_10 + 1] [i_10] [i_11 + 1] [(_Bool)1] [i_19]))));
                                var_25 ^= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(signed char)5] [i_18] [i_11] [i_10])) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) (signed char)32))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)32))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_20 = 1; i_20 < 16; i_20 += 4) 
    {
        for (unsigned char i_21 = 0; i_21 < 18; i_21 += 1) 
        {
            for (signed char i_22 = 0; i_22 < 18; i_22 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 18; i_23 += 3) 
                    {
                        for (short i_24 = 0; i_24 < 18; i_24 += 4) 
                        {
                            {
                                var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)7))))) ? ((~(((/* implicit */int) arr_75 [i_20 + 2] [i_24] [i_20 - 1])))) : (((((/* implicit */int) arr_75 [i_20 - 1] [i_24] [i_20 + 1])) ^ (((/* implicit */int) arr_75 [i_20 - 1] [i_24] [i_20 + 2]))))));
                                var_27 &= (signed char)14;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 18; i_25 += 3) 
                    {
                        for (signed char i_26 = 1; i_26 < 16; i_26 += 1) 
                        {
                            {
                                arr_84 [i_22] [i_20 - 1] [i_26] [16] [i_21] [i_22] [i_25] = ((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) arr_82 [i_26 + 2] [i_26 + 2] [i_22] [i_20] [i_20])))));
                                arr_85 [i_22] [i_22] = ((/* implicit */short) (-(((/* implicit */int) arr_75 [i_22] [i_22] [i_26]))));
                                arr_86 [i_20] [i_21] [i_22] [i_25] [(short)2] [8] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_22] [i_22]))))), ((((!(((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) arr_68 [i_21] [i_22] [i_25])) ? (((/* implicit */int) arr_5 [i_20] [i_20] [i_22])) : (((/* implicit */int) arr_59 [i_21] [i_26 - 1])))) : (((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_27 = 0; i_27 < 0; i_27 += 1) 
                    {
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (_Bool)0)))))) ? (((((/* implicit */_Bool) arr_79 [i_22] [i_22] [i_22])) ? (((/* implicit */int) arr_5 [i_21] [i_21] [i_22])) : (((/* implicit */int) ((short) (signed char)127))))) : (((/* implicit */int) arr_90 [i_28] [i_27] [i_22] [i_22] [(short)3] [i_20]))));
                                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */int) (signed char)-1)) : (var_11))))) + (2147483647))) >> (((((arr_63 [i_28] [i_20 - 1] [i_22] [i_28] [i_21] [(signed char)11]) ? (arr_44 [(signed char)14]) : (arr_44 [(signed char)12]))) + (1822562296))))))));
                                arr_95 [i_22] [i_22] = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) 6922662045531354747ULL))))) == ((-(((/* implicit */int) arr_61 [0])))))) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1899665127)) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) (signed char)-61))))) && (((/* implicit */_Bool) arr_48 [i_20] [i_21] [(unsigned char)6] [(unsigned char)6] [i_28] [i_28])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
