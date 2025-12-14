/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238160
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
    var_17 &= ((/* implicit */unsigned short) min((var_0), (((/* implicit */signed char) ((_Bool) ((short) var_12))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)184)) / (1138799434)))) ? (arr_0 [i_0 - 1]) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [(short)2]) : (var_5)))));
        var_19 = ((/* implicit */long long int) (short)32755);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3] |= arr_8 [i_0 + 1] [i_1] [i_0 + 1] [i_3 + 2] [i_3] [i_3];
                        var_20 -= ((/* implicit */unsigned short) arr_6 [i_0] [(signed char)10] [i_2] [i_3 + 2]);
                        arr_11 [(signed char)14] [i_1] [i_2] [i_0] [(signed char)4] [(short)5] = ((/* implicit */short) (-(((/* implicit */int) (short)-28118))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned long long int) arr_12 [(short)17] [(short)7]);
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_7 = 2; i_7 < 21; i_7 += 1) 
                    {
                        arr_22 [i_4] [i_4] [i_6] [i_7 + 3] = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32756))) + (7807482099182417681ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_4] [i_5] [i_4])))))));
                        var_21 = ((/* implicit */signed char) (short)-18680);
                    }
                    /* vectorizable */
                    for (short i_8 = 1; i_8 < 21; i_8 += 2) 
                    {
                        arr_25 [(unsigned char)20] [i_8 + 2] [i_8] [i_8 + 2] = var_6;
                        /* LoopSeq 4 */
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            arr_28 [i_6] [i_8] [10ULL] [i_8 + 2] [i_9] = ((/* implicit */long long int) arr_16 [i_8 - 1] [(short)6] [i_8 - 1]);
                            arr_29 [i_4] [(short)12] [i_5] [(unsigned char)24] [i_8 - 1] [i_8] = ((signed char) arr_12 [i_5 + 1] [i_5 + 2]);
                        }
                        for (long long int i_10 = 1; i_10 < 24; i_10 += 1) 
                        {
                            arr_33 [i_8] [1ULL] [i_5] [i_5] [(short)18] [i_5] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [(_Bool)1] [i_8]))))) ? (((/* implicit */int) (unsigned short)18306)) : (((/* implicit */int) (short)-9136)));
                            var_22 = ((/* implicit */short) (((-(arr_23 [i_4] [i_5 - 1] [i_6]))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4])))))));
                        }
                        for (short i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)30782))))) ? (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (unsigned char)221)))) : (arr_34 [i_8 - 1] [14U] [i_8] [i_8] [i_11] [i_11] [i_11])));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -591105239)) ? (1754972726U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47237)))));
                            var_25 = ((/* implicit */short) arr_15 [i_4] [i_4] [i_6]);
                        }
                        for (unsigned char i_12 = 2; i_12 < 23; i_12 += 1) 
                        {
                            arr_39 [i_8] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_12 [i_4] [i_12])) ? (arr_37 [i_6] [i_12 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9136))))));
                            var_26 = ((/* implicit */unsigned char) arr_13 [i_8 + 4]);
                        }
                    }
                    arr_40 [i_4] [i_5] [i_6] [0ULL] &= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned int) 127082433)) + (((((/* implicit */_Bool) 3131421526591883817LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-57))) : (2591330584U))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        arr_43 [i_4] [i_4] [i_4] [(unsigned short)18] [i_4] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_6] [(short)6] [i_5 - 1] [i_5] [i_5] [16ULL] [(short)2])) ? (((/* implicit */int) arr_31 [i_5 + 4] [i_5] [i_4] [i_5] [i_5] [i_13] [i_13])) : (((/* implicit */int) (signed char)84))));
                        var_27 = ((/* implicit */_Bool) ((signed char) var_7));
                        /* LoopSeq 2 */
                        for (short i_14 = 1; i_14 < 24; i_14 += 2) 
                        {
                            var_28 = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_4] [i_6] [i_14 - 1])) * (((/* implicit */int) (short)0))));
                            arr_46 [(signed char)17] [i_5 + 2] [(signed char)17] [i_14] [i_14] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_18 [i_4] [i_5] [i_6] [i_13])))) << (((((((/* implicit */int) (signed char)-99)) + (118))) - (10)))));
                        }
                        for (signed char i_15 = 0; i_15 < 25; i_15 += 2) 
                        {
                            var_29 = var_15;
                            var_30 = ((/* implicit */short) (-((-(((/* implicit */int) (short)-17989))))));
                            arr_50 [i_4] [(short)24] [(short)24] [(short)13] = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) | (((((/* implicit */int) (signed char)120)) & (((/* implicit */int) (unsigned short)5853))))));
                            arr_51 [(short)2] [(short)2] [(short)2] [i_13] [i_15] = ((/* implicit */_Bool) arr_35 [i_4] [(signed char)20] [i_6] [i_4] [i_15]);
                            var_31 = ((/* implicit */int) (-((-(var_13)))));
                        }
                        var_32 = ((((/* implicit */int) arr_31 [(unsigned char)10] [(unsigned char)10] [i_6] [(_Bool)1] [i_4] [i_5 - 1] [i_5 - 1])) | (-649858778));
                        arr_52 [i_5] [i_6] [i_5] = arr_41 [i_6] [i_13];
                    }
                    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        arr_57 [i_16] [i_5] [i_5] [(short)12] [i_16] = ((/* implicit */unsigned long long int) ((max((max((((/* implicit */unsigned long long int) var_12)), (562949949227008ULL))), (((/* implicit */unsigned long long int) ((signed char) (signed char)-80))))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_36 [i_16] [i_5 + 1] [i_6] [i_6] [i_16] [i_5 + 1] [(unsigned char)9])))))));
                        arr_58 [i_4] [i_16] [i_4] [i_16] [i_4] = (i_16 % 2 == zero) ? (((/* implicit */int) ((arr_35 [i_16] [i_5 - 1] [i_5 + 2] [13U] [i_16]) << (((((((/* implicit */_Bool) arr_56 [i_4] [i_16] [i_5 + 1] [(short)19])) ? (arr_35 [i_16] [i_5] [i_5 + 2] [i_6] [i_5]) : (-2713057349153087746LL))) - (722050008329583115LL)))))) : (((/* implicit */int) ((((arr_35 [i_16] [i_5 - 1] [i_5 + 2] [13U] [i_16]) + (9223372036854775807LL))) << (((((((((((/* implicit */_Bool) arr_56 [i_4] [i_16] [i_5 + 1] [(short)19])) ? (arr_35 [i_16] [i_5] [i_5 + 2] [i_6] [i_5]) : (-2713057349153087746LL))) - (722050008329583115LL))) + (3683064746888470215LL))) - (26LL))))));
                    }
                    for (short i_17 = 0; i_17 < 25; i_17 += 1) 
                    {
                        arr_62 [i_4] [(signed char)19] [(short)13] [(short)13] [(short)24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_31 [i_4] [i_5 + 1] [i_6] [20LL] [i_6] [i_17] [i_17]))) ? (((((/* implicit */_Bool) (short)26247)) ? (((/* implicit */int) (unsigned short)24576)) : (((/* implicit */int) (unsigned short)41322)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_4] [i_5] [i_6] [8LL] [(signed char)20] [i_4] [i_5 + 3])))))));
                        var_33 = ((/* implicit */signed char) ((134201344LL) >> (((((/* implicit */int) (short)948)) - (942)))));
                        var_34 = ((/* implicit */short) var_0);
                    }
                    for (unsigned long long int i_18 = 3; i_18 < 23; i_18 += 1) 
                    {
                        var_35 = ((/* implicit */short) (-(((((/* implicit */int) var_8)) & (((/* implicit */int) ((unsigned char) (short)32748)))))));
                        arr_65 [i_4] [i_18] [i_6] [7LL] [i_18 - 2] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_18] [i_6] [i_6] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_53 [i_4])))) || (((/* implicit */_Bool) ((((-4947282293538675604LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_3)) - (59)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_18] [i_6] [(signed char)3] [i_5] [i_4])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (short)18005)))))) ? (((long long int) arr_34 [i_4] [i_4] [i_6] [i_4] [i_4] [i_6] [i_18])) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))))));
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((min((((/* implicit */unsigned long long int) min(((short)18), (((/* implicit */short) (_Bool)1))))), (((9950066419049747790ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [(short)18] [i_4] [i_5] [i_6] [i_6] [i_18]))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24215))))))));
                    }
                }
            } 
        } 
    }
}
