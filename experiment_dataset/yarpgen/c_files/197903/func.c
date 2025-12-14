/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197903
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
    var_18 ^= ((/* implicit */short) var_9);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) (-((~(var_1)))));
        var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)21791)) ? (0ULL) : (((/* implicit */unsigned long long int) -1782074849))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (short)21791))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-21792)), (arr_3 [i_1])))) ? (((((/* implicit */_Bool) var_7)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21792))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17439)))));
            var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_0))))), (((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (-2015194409)))))) ? (min((((/* implicit */int) min(((short)-21786), (var_17)))), (max((var_3), (((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 2])) ? (((/* implicit */int) max(((short)-21791), (((/* implicit */short) var_9))))) : (((/* implicit */int) ((arr_5 [i_1 - 2] [i_0] [i_0]) != (((/* implicit */int) var_11)))))))));
        }
        for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_24 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_4 [i_0] [i_2] [i_0])), (0LL)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)21806)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))))))));
                            arr_16 [i_4] [i_0] [i_2] |= ((/* implicit */long long int) (!(((((/* implicit */int) (_Bool)1)) >= (var_3)))));
                            var_26 = ((/* implicit */long long int) arr_9 [i_0] [i_2] [i_3]);
                        }
                    } 
                } 
                arr_17 [i_0] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) (((-(0ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) >= (-2015194393)))))));
            }
            for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 3) 
            {
                var_27 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_3 [i_6])) ? (arr_3 [i_6]) : (arr_3 [i_6])))));
                var_28 -= ((/* implicit */long long int) var_4);
                arr_21 [i_6] [i_2] [i_2] = arr_19 [i_2] [i_6] [i_6] [i_0];
                var_29 -= ((/* implicit */short) arr_8 [i_2] [i_2] [i_2] [i_2]);
            }
            var_30 *= ((/* implicit */short) ((((_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_2]))) : (0ULL)));
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        for (long long int i_8 = 1; i_8 < 11; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_31 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((31LL) << (((/* implicit */int) (unsigned short)7))))) ? (((/* implicit */int) min((arr_25 [i_7] [(unsigned short)10] [i_9]), (((/* implicit */unsigned short) min((arr_29 [i_7] [i_8] [i_9]), (((/* implicit */short) arr_27 [i_7] [i_8])))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_22 [(short)0])))))))));
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (unsigned char)223))));
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 2; i_11 < 13; i_11 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned int) arr_26 [i_9]);
                        arr_33 [i_11 + 1] [i_7] [i_9] [i_7] [i_7] = (~(4ULL));
                    }
                    /* vectorizable */
                    for (signed char i_12 = 1; i_12 < 13; i_12 += 4) 
                    {
                        var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_3)) : (arr_34 [i_8] [i_8 + 3] [i_9] [i_9]))))));
                        var_35 = ((/* implicit */_Bool) ((((((/* implicit */int) var_13)) < (((/* implicit */int) var_15)))) ? (((/* implicit */int) arr_29 [i_12 - 1] [i_9] [i_8 + 1])) : (((/* implicit */int) var_10))));
                        arr_37 [i_7] = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) -2015194396)))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_40 [i_7] [i_7] [i_9] [i_13] = ((/* implicit */_Bool) ((unsigned short) (unsigned char)0));
                        var_36 = ((/* implicit */int) ((arr_32 [i_7] [i_7] [i_7]) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_13)))))));
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), (arr_35 [i_7] [i_7] [i_9] [i_13] [i_13] [i_9])));
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_14 = 4; i_14 < 12; i_14 += 4) 
                    {
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_41 [i_9] [i_14 + 1] [i_14 + 2] [i_14 + 2] [i_14 - 1] [i_14 + 2])) ? (((/* implicit */int) arr_41 [i_14 + 2] [i_14 - 1] [i_14 + 2] [i_14 - 4] [i_14 - 2] [i_14])) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((-11LL) < (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))))))));
                        var_39 = ((/* implicit */long long int) arr_30 [i_7] [i_8 - 1] [i_9] [i_7]);
                    }
                    /* vectorizable */
                    for (long long int i_15 = 0; i_15 < 14; i_15 += 1) 
                    {
                        var_40 += ((/* implicit */long long int) ((unsigned int) arr_24 [4]));
                        arr_45 [i_9] [i_7] [i_7] = ((/* implicit */signed char) (unsigned short)4850);
                        var_41 = ((/* implicit */short) 2420878379598482092LL);
                    }
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) (+(min((var_16), (((/* implicit */long long int) var_17)))))))));
                        var_43 *= ((/* implicit */unsigned long long int) var_0);
                    }
                    /* vectorizable */
                    for (unsigned short i_17 = 0; i_17 < 14; i_17 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_18 = 0; i_18 < 14; i_18 += 4) 
                        {
                            arr_56 [i_7] [i_8 + 1] [i_7] [i_9] [i_7] [i_18] [i_18] = ((/* implicit */_Bool) (short)-3);
                            var_44 = (+(-2420878379598482092LL));
                        }
                        for (unsigned char i_19 = 2; i_19 < 12; i_19 += 3) 
                        {
                            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) var_3))));
                            var_46 ^= ((/* implicit */unsigned int) (_Bool)0);
                            var_47 ^= ((/* implicit */int) arr_43 [i_17]);
                        }
                        var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) arr_26 [i_7]))));
                        var_49 -= ((/* implicit */unsigned short) (((~(((/* implicit */int) var_15)))) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_59 [i_7] [i_7] [i_9])) : (((/* implicit */int) var_4))))));
                        var_50 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)6))));
                    }
                    var_51 *= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) > (((/* implicit */int) max(((unsigned char)3), ((unsigned char)138))))));
                }
            } 
        } 
    } 
    var_52 = ((/* implicit */short) (unsigned char)115);
}
