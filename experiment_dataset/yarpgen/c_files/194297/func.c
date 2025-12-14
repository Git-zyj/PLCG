/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194297
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) (-((~(arr_0 [i_0] [i_0 - 1])))));
        var_21 = ((/* implicit */unsigned long long int) (+(9223372036854775794LL)));
    }
    for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) arr_2 [i_1] [i_1]);
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_23 ^= ((/* implicit */long long int) (signed char)0);
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_7 [i_1] [i_1] [i_3])))))))));
                var_25 = ((/* implicit */unsigned char) arr_4 [i_3] [i_3] [i_3]);
                var_26 = ((/* implicit */long long int) min((((((/* implicit */int) (signed char)0)) | (((int) (unsigned short)38045)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 - 2] [i_1] [i_1 - 2])))))));
            }
            var_27 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) 0))))) || (((/* implicit */_Bool) arr_6 [i_2] [i_1] [6] [6]))))), (((int) (~(((/* implicit */int) arr_4 [i_1] [(unsigned char)8] [(unsigned short)6])))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    var_28 = (!(((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) arr_14 [i_2] [i_2] [i_2] [i_2] [(signed char)4]))), ((~(((/* implicit */int) (signed char)-13))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        var_29 *= ((/* implicit */_Bool) arr_7 [i_1] [7LL] [2]);
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) -1)) : (arr_2 [i_1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) var_16)))))))) ? (arr_9 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 1]) : (((/* implicit */int) max((arr_16 [i_1 - 2]), (arr_16 [i_1 - 2])))))))));
                        var_31 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_5 [i_1]))))));
                    }
                }
                for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    var_32 = ((/* implicit */int) var_0);
                    var_33 -= ((/* implicit */signed char) (((~(((/* implicit */int) arr_10 [i_1 - 1] [i_1] [i_1])))) >= (((/* implicit */int) ((signed char) arr_10 [i_1 - 1] [i_1 - 1] [i_1])))));
                }
                var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
            }
            var_35 = ((/* implicit */int) arr_7 [i_2] [i_1] [i_1]);
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1])) || (((var_6) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_8] [i_1])))))));
            var_37 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)(-32767 - 1)))));
            var_38 = ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_1 - 1]))));
            var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) var_8))));
        }
        var_40 = max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_17)), ((-(((/* implicit */int) (signed char)-23))))))), (arr_3 [i_1]));
        var_41 ^= ((/* implicit */unsigned long long int) arr_2 [i_1 - 2] [i_1 - 1]);
        var_42 = ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_1] [12] [i_1] [i_1]))));
    }
    /* LoopSeq 2 */
    for (short i_9 = 0; i_9 < 15; i_9 += 4) 
    {
        var_43 = ((/* implicit */_Bool) 13780901519208903168ULL);
        var_44 += ((/* implicit */int) arr_23 [i_9]);
        var_45 = ((/* implicit */long long int) var_13);
    }
    for (long long int i_10 = 0; i_10 < 16; i_10 += 1) 
    {
        var_46 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) -1284626303)) ? ((~(1812224292))) : (((/* implicit */int) var_8)))) + (2147483647))) >> (((arr_25 [i_10]) + (1724903052)))));
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            for (int i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                {
                    var_47 = ((((((/* implicit */_Bool) 5489876381561272460LL)) || (((/* implicit */_Bool) -739130009)))) ? ((+(((/* implicit */int) (signed char)0)))) : ((-(739129999))));
                    var_48 = ((/* implicit */long long int) var_3);
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (short i_14 = 3; i_14 < 12; i_14 += 1) 
                        {
                            var_49 = ((/* implicit */long long int) var_13);
                            var_50 = ((/* implicit */long long int) (short)10453);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 1) 
                        {
                            var_51 = var_12;
                            var_52 = (+(((/* implicit */int) ((arr_28 [i_10]) >= (((/* implicit */unsigned long long int) arr_30 [i_13]))))));
                            var_53 = ((/* implicit */_Bool) var_5);
                        }
                        for (signed char i_16 = 0; i_16 < 16; i_16 += 4) 
                        {
                            var_54 = ((/* implicit */unsigned long long int) (unsigned char)26);
                            var_55 &= ((/* implicit */unsigned short) arr_29 [i_10] [i_10] [i_10]);
                            var_56 |= ((/* implicit */unsigned short) (((+(-739129999))) | (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (~(((/* implicit */int) var_8))))))))));
                        }
                        for (signed char i_17 = 2; i_17 < 14; i_17 += 4) 
                        {
                            var_57 = ((/* implicit */unsigned char) max((var_57), (((/* implicit */unsigned char) var_11))));
                            var_58 = ((/* implicit */unsigned short) max((var_58), (((/* implicit */unsigned short) (signed char)0))));
                        }
                        var_59 = ((/* implicit */int) var_9);
                        var_60 &= ((/* implicit */short) -5489876381561272461LL);
                    }
                }
            } 
        } 
        var_61 = ((/* implicit */short) max((1144219322), (-1046458671)));
        var_62 = ((/* implicit */long long int) 18446744073709551612ULL);
        var_63 *= ((/* implicit */unsigned long long int) max((arr_38 [i_10] [i_10] [i_10] [(unsigned short)14] [i_10] [i_10] [i_10]), (((/* implicit */long long int) (-(arr_25 [i_10]))))));
    }
}
