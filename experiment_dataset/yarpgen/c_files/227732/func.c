/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227732
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
    var_17 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((unsigned char) ((int) (unsigned short)65529)));
                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)63)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) min(((unsigned short)65521), ((unsigned short)11)))))) - (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_1]))))));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (arr_5 [i_2] [i_2] [i_2 - 1])))) ? (((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) var_2))))) : ((-(((/* implicit */int) arr_0 [(short)9])))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [(unsigned short)15])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_0] [i_2])), (var_0)))) ? (((/* implicit */int) max((arr_7 [i_2] [i_1] [i_0]), (arr_1 [i_0])))) : (((/* implicit */int) arr_4 [i_2 + 1] [i_1]))))) : (((min((15LL), (((/* implicit */long long int) (unsigned short)65535)))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4294967295U))))))));
                    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(arr_8 [(unsigned char)16] [i_0] [i_1] [21LL])))), (((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)4]))))))))));
                }
                for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    var_23 = ((/* implicit */signed char) ((short) ((22LL) + (((((/* implicit */_Bool) 874969592)) ? (((/* implicit */long long int) var_2)) : (131071LL))))));
                    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [(unsigned short)9] [i_1] [i_0]))));
                    var_25 = ((/* implicit */unsigned int) min((((/* implicit */short) var_1)), (min((((/* implicit */short) ((unsigned char) (short)30052))), (((short) (signed char)-1))))));
                    /* LoopSeq 3 */
                    for (int i_4 = 1; i_4 < 21; i_4 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned short) ((unsigned char) var_14));
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [i_0] [(signed char)9])), ((unsigned short)65526)))) ? (min((((/* implicit */int) (unsigned short)49365)), (arr_12 [i_4] [i_3] [4]))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_7 [i_3] [(signed char)18] [(signed char)3])) : (var_13))))), (((int) (-(var_12)))))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 21; i_5 += 4) /* same iter space */
                    {
                        arr_17 [i_5] = ((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) arr_11 [i_0] [i_5 + 1] [i_3] [i_5 + 1]))));
                        var_28 = ((int) var_14);
                        var_29 = ((/* implicit */signed char) arr_8 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1]);
                        var_30 &= ((/* implicit */signed char) ((arr_9 [i_3] [i_5 + 1] [i_5] [i_5 - 1]) & (((/* implicit */int) (unsigned short)25896))));
                        var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)19372))));
                    }
                    for (long long int i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        var_32 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)52965)), (1134445260U)))) ? (((((/* implicit */_Bool) var_13)) ? (-4433797) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)4)), (var_6)))))))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_3] [(unsigned char)5])) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3160522046U))))))));
                        var_33 = ((/* implicit */unsigned short) var_11);
                    }
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            {
                                var_34 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((int) var_1)) : ((+(((/* implicit */int) var_15))))))) ? ((~(((((/* implicit */_Bool) -1567286604)) ? (((/* implicit */int) (unsigned short)56055)) : (((/* implicit */int) (_Bool)1)))))) : ((~(-185220450)))));
                                var_35 = ((/* implicit */int) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) 2147483645)) ? (arr_22 [i_0] [i_3] [i_7] [i_8]) : (((/* implicit */int) arr_23 [i_3] [(unsigned short)10] [(unsigned short)8] [i_3])))), (arr_12 [7LL] [i_7] [i_1])))), ((((_Bool)1) ? (((/* implicit */unsigned int) -1)) : (1134445271U)))));
                                var_36 = min((((/* implicit */unsigned int) arr_24 [i_8] [i_7] [i_3] [(_Bool)1] [i_0] [i_0])), ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (var_12))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    arr_30 [i_0] [i_0] [(unsigned short)6] [i_9] = (!(((/* implicit */_Bool) ((signed char) arr_16 [i_0] [i_1] [i_9]))));
                    var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) var_5))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 2; i_10 < 20; i_10 += 2) 
                    {
                        for (int i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */signed char) ((arr_9 [i_9] [(signed char)6] [i_9] [i_10 - 2]) == (((/* implicit */int) var_11))));
                                var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)255))) ? (arr_6 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(unsigned char)10] [2U] [i_9] [i_9]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            {
                                var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) var_0))));
                                var_41 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) (unsigned char)0)))) : ((+(((/* implicit */int) arr_2 [i_9]))))));
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */unsigned short) ((((arr_22 [i_0] [i_1] [6] [i_9]) + (2147483647))) >> (((((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) - (4060721991U)))));
                }
                /* vectorizable */
                for (unsigned char i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)41)))))));
                    var_44 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_14]))) % (var_0)));
                    var_45 |= ((/* implicit */short) ((int) (signed char)4));
                    var_46 = ((/* implicit */unsigned char) arr_10 [i_0]);
                }
                var_47 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 713034678)) ? (((/* implicit */int) arr_26 [i_0] [i_0])) : (782621768))) : (((((/* implicit */_Bool) (short)8960)) ? (((/* implicit */int) (unsigned short)23179)) : (((/* implicit */int) (unsigned short)1286)))))), (((/* implicit */int) max((min((arr_27 [i_0] [i_0] [i_1] [i_1]), (arr_1 [i_1]))), (((/* implicit */unsigned short) var_8)))))));
            }
        } 
    } 
}
