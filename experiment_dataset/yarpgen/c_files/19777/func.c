/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19777
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1] [(short)4] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (var_1)));
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_3] [i_3])) > (((/* implicit */int) (_Bool)1)))))) - ((~(arr_12 [i_0] [i_0] [i_0 + 1] [i_0 - 2] [i_0]))))))));
                                var_18 &= ((/* implicit */short) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((arr_3 [i_3] [i_1]) <= (((/* implicit */long long int) arr_12 [i_4] [i_0] [i_0] [(short)14] [i_0]))))) : (((/* implicit */int) arr_4 [i_0 - 1] [i_3])))) <= ((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_3] [i_2]))))));
                                var_19 = ((/* implicit */unsigned char) max((var_8), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)24)))) && (((/* implicit */_Bool) min((2147483645), (2147483647)))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 2] [2U] = ((/* implicit */signed char) (+(((/* implicit */int) max((arr_4 [i_0] [i_0]), (((/* implicit */short) var_10)))))));
                            }
                        } 
                    } 
                    var_20 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_1]))));
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [13U] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_21 [i_0] [i_1] [i_0])) == (((((/* implicit */_Bool) -2147483645)) ? (((/* implicit */unsigned long long int) var_16)) : (12601887085844184554ULL)))));
                        var_21 = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_6 [i_0] [i_1] [(_Bool)1] [i_0])))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (5844856987865367062ULL)))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            arr_27 [i_0] [12U] [i_5 - 1] [12U] [i_7] = ((/* implicit */unsigned int) (signed char)127);
                            var_22 = ((/* implicit */short) ((min((((var_2) > (((/* implicit */long long int) -478181523)))), (arr_11 [i_0] [i_0] [i_0] [(_Bool)1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)117)) && (((/* implicit */_Bool) (signed char)127))))) : (min((-2147483646), (((/* implicit */int) (signed char)116))))));
                        }
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            var_23 = ((((/* implicit */long long int) ((((/* implicit */int) var_15)) ^ ((((_Bool)1) ? (((/* implicit */int) var_6)) : (2147483623)))))) % (arr_19 [i_0] [(_Bool)1] [(_Bool)1]));
                            var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) var_15))));
                            var_25 = (!(((/* implicit */_Bool) var_0)));
                            var_26 *= (~(-1214358530));
                            arr_31 [i_0] [i_0] = ((/* implicit */unsigned int) arr_21 [i_1] [i_6] [i_0]);
                        }
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 19; i_9 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned int) var_16);
                        var_28 += ((/* implicit */_Bool) (((_Bool)1) ? (-478181545) : (-676937934)));
                    }
                    for (unsigned short i_10 = 3; i_10 < 21; i_10 += 3) 
                    {
                        arr_38 [i_1] [i_1] [i_0] [18] = ((/* implicit */unsigned short) (~((~(-478181545)))));
                        var_29 = ((arr_11 [i_0] [i_5 - 1] [(short)20] [i_10 - 1]) || (((/* implicit */_Bool) 3275017906U)));
                        arr_39 [i_0] [i_1] [i_10 - 2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_2)), (min((12601887085844184534ULL), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1]))))));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_42 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (5844856987865367062ULL)));
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((var_16) - (arr_28 [i_0] [i_1] [i_5 - 1] [i_0 - 3] [12LL] [i_5 - 1]))))));
                        var_31 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_40 [i_0 - 3] [18LL] [i_1] [18LL] [i_11])) ? (5844856987865367058ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                    }
                    var_32 = (((_Bool)1) || ((_Bool)1));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        for (long long int i_13 = 2; i_13 < 21; i_13 += 4) 
                        {
                            {
                                arr_49 [i_0] [i_1] [i_13] &= var_10;
                                var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_36 [i_0] [i_0 - 3] [i_0] [i_5 - 1] [i_5]))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_5] [(_Bool)1])) ? (-2147483623) : (((/* implicit */int) var_15))))))) : (((((5844856987865367056ULL) / (((/* implicit */unsigned long long int) var_16)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (signed char i_15 = 2; i_15 < 20; i_15 += 4) 
                        {
                            {
                                var_34 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-40)) != (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)58333))))) ? (-606397491) : (((/* implicit */int) (_Bool)1))))));
                                arr_56 [i_0] [i_0] = ((/* implicit */short) (+(((-676937934) / (arr_21 [i_0 - 3] [i_0 - 3] [i_0])))));
                            }
                        } 
                    } 
                }
                var_35 = ((-478181550) + (606397491));
            }
        } 
    } 
    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_13)))) << (((/* implicit */int) min((var_13), (var_6))))))) ? (((/* implicit */int) var_13)) : (((-478181545) ^ (((/* implicit */int) (!(((/* implicit */_Bool) -676937934)))))))));
}
