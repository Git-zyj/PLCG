/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223793
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
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)116)) % (((/* implicit */int) arr_2 [i_0]))))) >= (18446744073709551609ULL)));
            arr_6 [i_0 - 2] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_0 + 2] [(short)10]))));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_5 [i_0 - 2] [i_0])) / (18446744073709551615ULL)));
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (unsigned short)18204))));
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 14632032410190609190ULL)))))));
        }
        arr_8 [(signed char)10] &= ((/* implicit */short) (~(((/* implicit */int) arr_0 [10U]))));
        /* LoopSeq 3 */
        for (signed char i_2 = 1; i_2 < 13; i_2 += 3) 
        {
            arr_12 [i_0] = (unsigned short)5278;
            var_20 &= ((/* implicit */short) (unsigned short)6901);
        }
        for (unsigned char i_3 = 2; i_3 < 10; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 1; i_4 < 12; i_4 += 3) 
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) 3814711663518942424ULL))));
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 12; i_5 += 2) 
                {
                    var_22 *= ((/* implicit */_Bool) ((((long long int) arr_15 [(short)3] [i_3 - 1] [i_4 + 2])) - (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 - 2] [i_3 + 4])))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((int) arr_20 [i_0 - 3] [i_0 + 2] [i_0] [i_0 - 1] [i_0] [i_0 + 2])))));
                }
                arr_23 [i_3] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((14632032410190609209ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))))));
            }
            arr_24 [3LL] [i_0 - 2] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((3814711663518942424ULL) * (14632032410190609199ULL))));
        }
        for (unsigned short i_6 = 1; i_6 < 11; i_6 += 1) 
        {
            arr_27 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 + 2]))))) ? (((/* implicit */int) arr_1 [3LL])) : (((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 1]))));
            /* LoopSeq 3 */
            for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_8 = 1; i_8 < 13; i_8 += 2) 
                {
                    arr_34 [i_0] [i_0] [i_6 + 3] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_0 - 1] [i_6 + 2] [i_7] [i_8 + 1] [i_6 + 2]))));
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 1; i_9 < 13; i_9 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_6 + 3] [i_6 + 3] [i_9 + 1])) != (((/* implicit */int) arr_25 [i_7] [i_6 + 2] [i_7 - 1])))))));
                        var_25 = ((/* implicit */long long int) ((3814711663518942424ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113)))));
                    }
                    for (unsigned short i_10 = 1; i_10 < 13; i_10 += 2) 
                    {
                        arr_40 [i_10 + 1] [i_8 - 1] [i_7] [i_6 + 3] [i_0 - 3] &= ((arr_0 [i_7]) ? (((/* implicit */int) arr_0 [i_7])) : (((/* implicit */int) arr_26 [i_0 + 1] [i_6 + 2])));
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) - ((~(((/* implicit */int) arr_39 [i_7] [i_8 - 1] [i_7] [6LL] [i_7])))))))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 18242194625148576343ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_20 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [8U])))) < ((-(arr_38 [i_0 - 2] [i_6 + 1] [i_7 + 1] [2LL] [i_10])))));
                        var_28 = ((/* implicit */unsigned char) ((((arr_38 [i_0 - 3] [i_6] [i_10 - 1] [i_10 - 1] [i_10 - 1]) + (9223372036854775807LL))) >> (((/* implicit */int) var_3))));
                    }
                    for (long long int i_11 = 1; i_11 < 13; i_11 += 3) 
                    {
                        arr_44 [i_0 - 1] [i_8] [i_7 - 1] [i_11 + 1] [i_0] = ((((/* implicit */unsigned long long int) 9223372036854775807LL)) ^ (11414111214725710619ULL));
                        arr_45 [i_0] [2ULL] [i_7] [i_8 + 1] [i_6 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -9223372036854775805LL)) ? (14632032410190609192ULL) : (((/* implicit */unsigned long long int) arr_30 [i_6] [i_7 - 1] [(unsigned char)8])))) << ((-(((/* implicit */int) var_8))))));
                    }
                }
                for (short i_12 = 2; i_12 < 13; i_12 += 2) /* same iter space */
                {
                    var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62152))) - (14632032410190609199ULL)))) ? (((/* implicit */int) (signed char)-115)) : (((((/* implicit */int) arr_25 [i_7] [i_6] [i_6 - 1])) / (((/* implicit */int) var_12))))));
                    var_30 = (+(((/* implicit */int) arr_17 [i_0 + 2] [i_7 + 1] [i_12 - 1])));
                    arr_49 [i_0 + 1] [i_0] [i_7 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_0] [(signed char)8] [i_7 + 1])) && (((/* implicit */_Bool) arr_25 [i_0] [i_6 - 1] [i_6 + 1]))));
                    var_31 = ((/* implicit */int) max((var_31), ((-(((/* implicit */int) arr_16 [i_7]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 1; i_13 < 13; i_13 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_0]))));
                        arr_52 [i_0] [i_6 + 2] [i_0] [i_12 - 2] [i_7 - 1] [i_7 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-119590767490847714LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((((/* implicit */_Bool) -9159034012132789035LL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0 - 3] [11U] [i_0 - 1]))))) : (((/* implicit */long long int) ((2147483643) / (((/* implicit */int) (unsigned char)37)))))));
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (~(((long long int) 12ULL)))))));
                    }
                    for (signed char i_14 = 2; i_14 < 13; i_14 += 1) 
                    {
                        arr_57 [i_0 - 1] [i_12] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) -3153100257812353235LL))));
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) arr_3 [i_0 - 3]))));
                        arr_58 [i_0] [i_6] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_7 - 2])) ? (((/* implicit */int) arr_31 [i_0 - 3])) : (((/* implicit */int) arr_53 [i_14] [i_12 - 1] [i_7] [i_6 + 1] [i_0]))));
                        var_35 = ((/* implicit */long long int) ((((/* implicit */int) var_12)) << (((arr_29 [i_7 - 1]) - (1198149710113167126LL)))));
                        var_36 &= ((/* implicit */_Bool) ((arr_29 [i_0 - 1]) << (((/* implicit */int) ((arr_4 [i_0 - 2] [(unsigned short)9]) && (((/* implicit */_Bool) 100663296)))))));
                    }
                }
                for (short i_15 = 2; i_15 < 13; i_15 += 2) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (~(arr_20 [i_15 - 2] [i_15 - 2] [i_15 + 1] [0LL] [i_15 - 2] [i_15 + 1]))))));
                    var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_15 - 1] [i_7 + 1])))))));
                }
                var_39 = ((/* implicit */unsigned short) arr_20 [i_0] [i_0 - 2] [i_0 - 1] [i_6] [i_7 + 1] [i_7 + 1]);
            }
            for (short i_16 = 1; i_16 < 12; i_16 += 3) 
            {
                arr_64 [i_0] [i_16] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56042))) / (14632032410190609187ULL)));
                arr_65 [i_0] [i_6 - 1] [13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2038348876015869058LL))));
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                arr_70 [i_0 - 3] [(_Bool)0] [i_17] &= ((/* implicit */long long int) (unsigned short)65535);
                var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4655)) << (((((/* implicit */int) var_2)) - (164))))))));
            }
        }
        arr_71 [(signed char)9] [i_0] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_1 [i_0 - 3])))) * (((/* implicit */int) (signed char)0))));
    }
    var_41 = ((/* implicit */unsigned long long int) var_4);
}
