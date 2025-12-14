/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192793
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
    var_18 = ((/* implicit */long long int) var_17);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_0 - 1] [i_1] [i_2] [(_Bool)1] = ((/* implicit */long long int) var_3);
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [i_4] [i_2] [i_0] = ((/* implicit */unsigned int) max((9223372036854775807LL), (((/* implicit */long long int) (short)-20219))));
                            var_19 = ((/* implicit */signed char) ((min((max((-9223372036854775807LL), (((/* implicit */long long int) (short)20218)))), (((/* implicit */long long int) arr_2 [i_4 - 1])))) - (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)5))) : (9223372036854775806LL)))));
                        }
                        arr_14 [i_0] [i_1] [0LL] [i_2] [12U] [9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) (_Bool)1)), (arr_6 [i_0] [i_2] [i_1] [i_0])))))) ? (max((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_0 - 1] [i_0 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_1 [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)20215)))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        arr_18 [i_5] [i_1] [i_2 + 1] [i_5] |= ((/* implicit */signed char) max(((~(((/* implicit */int) (unsigned short)42906)))), (((((/* implicit */_Bool) (unsigned short)23447)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-20221))))));
                        arr_19 [i_0 + 1] [i_0 + 1] [(_Bool)0] [i_5] [i_2] [(unsigned short)11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) 0U)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        var_21 -= ((/* implicit */long long int) ((((/* implicit */int) (short)20208)) * (((((/* implicit */_Bool) (short)-20208)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)22873))))));
                        var_22 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)126)) ? (18446744073709551614ULL) : (14795101968562427969ULL)))));
                        var_23 ^= ((/* implicit */long long int) var_3);
                    }
                    for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) var_7);
                            var_25 = ((/* implicit */unsigned char) ((1084553726U) + (((/* implicit */unsigned int) -878698732))));
                            var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1016U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3911257150U))) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-20219)))));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_9 = 2; i_9 < 19; i_9 += 2) 
                        {
                            arr_30 [i_0] [i_1 - 2] [i_2] = ((/* implicit */unsigned long long int) (~(6711067170316166632LL)));
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)32767)))))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            arr_33 [17LL] [i_7] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17604))) : (4294967287U)));
                            var_28 = ((/* implicit */unsigned int) -2099110023);
                        }
                        /* vectorizable */
                        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
                        {
                            arr_36 [(unsigned char)19] [i_1] [i_2] [20LL] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (var_14)));
                            var_29 = ((/* implicit */int) arr_29 [i_0] [i_2] [i_2 - 1] [19LL] [i_2]);
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) var_10))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)249)) || (((/* implicit */_Bool) 3611824651U))));
                        }
                    }
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -9223372036854775807LL)))))));
                    var_33 *= ((/* implicit */unsigned int) min((min((((/* implicit */long long int) var_14)), (((long long int) arr_20 [i_0] [6ULL] [(unsigned char)14])))), (((/* implicit */long long int) min(((signed char)118), ((signed char)-93))))));
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (9U)));
}
