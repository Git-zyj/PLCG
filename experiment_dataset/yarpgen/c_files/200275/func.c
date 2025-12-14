/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200275
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
    var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((18446744073709551611ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) * (((/* implicit */unsigned long long int) min((((-5653352576493557330LL) / (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((/* implicit */long long int) var_0)) / (5653352576493557330LL))) != (min((((/* implicit */long long int) var_1)), (3807916268327269460LL))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (~((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)23124)) : (((/* implicit */int) var_15))))))));
                var_18 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_9))))), (max((2640460651U), (((/* implicit */unsigned int) var_5))))))), (min((((((/* implicit */unsigned long long int) -6556637524679722472LL)) | (18446744073709551615ULL))), (max((((/* implicit */unsigned long long int) var_11)), (var_2)))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) min((var_5), (((/* implicit */short) (unsigned char)194))))) < (((/* implicit */int) min((((/* implicit */short) var_11)), ((short)(-32767 - 1)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [8U] [i_1] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                        var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65280)) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) (unsigned char)243))));
                        var_21 = ((/* implicit */unsigned long long int) var_9);
                        var_22 = ((2874212659U) >> (((((((/* implicit */_Bool) 5653352576493557342LL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3)))) - (41606))));
                    }
                    arr_11 [i_0] [8U] [i_0] [i_2] = ((/* implicit */unsigned char) (+((~(var_4)))));
                    arr_12 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_14))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (short)4))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_24 = ((((/* implicit */_Bool) ((-8956228743556746418LL) & (((/* implicit */long long int) 2874212659U))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > (1654506637U)))) : (((/* implicit */int) var_10)));
                            var_25 = ((/* implicit */int) (unsigned char)245);
                            var_26 &= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)20304))))) ? (((/* implicit */unsigned long long int) 5653352576493557319LL)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (25ULL)))));
                        }
                        arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (short)32760))));
                        var_28 = ((/* implicit */unsigned int) ((var_7) % (((((/* implicit */int) var_14)) / (((/* implicit */int) (unsigned short)11292))))));
                    }
                }
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 17)))))) * (min((((/* implicit */unsigned int) (unsigned char)0)), (var_4))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))))));
                    var_30 += ((/* implicit */unsigned short) (unsigned char)130);
                }
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        var_31 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 439829369))))) : (((/* implicit */int) max(((unsigned char)255), ((unsigned char)2)))))) | ((~(((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_14)))))))));
                        var_32 = ((/* implicit */long long int) min((var_32), (8863448774465185000LL)));
                        var_33 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) 2640460651U)), (-5672601221194969265LL))), (((/* implicit */long long int) ((((((/* implicit */_Bool) 4967515805076294508LL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((-1120456776) >= (((/* implicit */int) var_12)))))))))));
                        arr_25 [(_Bool)0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 5653352576493557319LL))));
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (unsigned short)65535)), (var_0))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))) ? ((~(min((((/* implicit */long long int) var_0)), (var_13))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)0), ((unsigned char)24)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_12)), (var_7)))) : (16776192U))))));
                    }
                    var_35 *= ((/* implicit */short) ((((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_2))))), (min((898093939), (((/* implicit */int) (unsigned char)255))))))) > (((min((var_4), (((/* implicit */unsigned int) var_3)))) << (((364487215559600651LL) - (364487215559600640LL)))))));
                    var_36 &= ((/* implicit */unsigned short) (+(-8863448774465185000LL)));
                }
            }
        } 
    } 
}
