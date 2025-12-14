/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50957
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) (~(((1023U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))));
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (18446744073709551615ULL)));
                var_16 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_2 [i_1] [i_1]) : (18446744073709551615ULL))) > (((/* implicit */unsigned long long int) (+(-119694665))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 15; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_4 = 1; i_4 < 17; i_4 += 2) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1ULL)))))) : (((((/* implicit */_Bool) (unsigned short)16320)) ? (18446744073709551606ULL) : (18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((2820014379021954017LL) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294966285U)) != (9ULL))))))))) : (((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_6)))) ? (max((796622377886242663ULL), (16294357512498407116ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (unsigned short)24954))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_1))))))) ? (((unsigned long long int) (+(((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) max((4294967274U), (((/* implicit */unsigned int) (unsigned short)2047)))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (((~(((/* implicit */int) arr_11 [(_Bool)1] [i_5] [i_3] [i_5])))) | ((+(((/* implicit */int) var_4)))))))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (17514045U)));
                    arr_16 [16] [i_3] [i_5] = ((((/* implicit */unsigned int) -2147483637)) & (((1186861307U) | (96U))));
                }
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    var_22 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((_Bool) var_9))), (min((((/* implicit */unsigned int) arr_1 [(_Bool)1])), (3344276444U)))));
                    var_23 = ((/* implicit */int) ((13326881026469295747ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                    var_24 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((3787934898U), (((/* implicit */unsigned int) (short)20))))) ? ((-(var_5))) : (arr_2 [i_3] [i_2 + 3]))), (((/* implicit */unsigned long long int) (_Bool)1))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
                            {
                                var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (17ULL))), (((((/* implicit */_Bool) -2147483637)) ? (11844956967872556925ULL) : (11844956967872556950ULL)))))) ? (min((arr_15 [i_2 + 3]), (arr_15 [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56853)))));
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(1037U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6601787105836994693ULL)) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_17 [(unsigned short)11] [i_3])), (-1)))) : (min((3787934888U), (((/* implicit */unsigned int) (_Bool)1))))))) : (((((((/* implicit */_Bool) 47431218)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_4 [i_7] [(_Bool)1] [i_7]))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)36331)) % (((/* implicit */int) (_Bool)1))))))))))));
                                arr_29 [0U] [17LL] [i_3] [i_3] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_2] [i_3] [i_2 + 3] [i_8])) ? (17549347843877390476ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (unsigned short)40629)) : (((/* implicit */int) (unsigned short)36329))));
                                arr_30 [i_2 - 1] [i_2] [i_3] [i_2] [i_2 - 1] [i_2] = (_Bool)1;
                            }
                            for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 1) /* same iter space */
                            {
                                var_27 &= ((/* implicit */unsigned int) arr_25 [i_2] [i_3] [i_7] [i_7]);
                                var_28 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) (signed char)4)) | (((/* implicit */int) arr_5 [i_2 + 3])))));
                                var_29 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) | (((((/* implicit */_Bool) 2272527890U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (16739792494622403655ULL)))));
                            }
                            for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                            {
                                arr_36 [i_2] [6U] [(_Bool)1] [i_3] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_28 [i_2 + 2] [i_2 + 2] [i_2 + 2] [9LL] [i_2 + 1] [9LL] [i_2])) ? (((/* implicit */unsigned long long int) (-(var_9)))) : ((-(var_6)))))));
                                arr_37 [12LL] [i_2] [i_3] [(unsigned short)5] [i_2] [i_3] [i_11] = ((/* implicit */unsigned int) ((unsigned long long int) max(((+(var_13))), ((-(((/* implicit */int) (signed char)0)))))));
                            }
                            for (unsigned int i_12 = 1; i_12 < 17; i_12 += 1) 
                            {
                                var_30 = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */int) (unsigned short)36329)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-4111)) : (((/* implicit */int) (signed char)10)))))));
                                var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned long long int) arr_23 [i_8] [0ULL] [i_2 + 1] [i_12 - 1])) : (((unsigned long long int) (unsigned short)29204))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [16LL] [i_3] [(signed char)0] [i_3]))) : (((long long int) arr_15 [i_2 + 3])));
                                var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (228077048229063379ULL)))) ? (((/* implicit */int) min(((signed char)57), (var_11)))) : (((/* implicit */int) (signed char)-126)))))));
                            }
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (_Bool)1))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned long long int) (unsigned char)238);
            }
        } 
    } 
}
