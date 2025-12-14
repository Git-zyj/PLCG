/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226638
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
    var_16 &= ((/* implicit */long long int) (~(((((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */unsigned long long int) ((var_11) ^ (var_11))))))));
    var_17 = ((/* implicit */unsigned int) min((var_17), (((unsigned int) var_1))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((long long int) arr_2 [i_1] [i_0] [(unsigned char)14])))));
                    var_19 = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_4 [i_0] [23LL] [i_2 - 2])) * (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_3 [i_1]))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_7 [i_1] [i_2 - 1] [i_1] [(signed char)21] [i_4] [(unsigned char)4]), (min(((unsigned char)255), (((/* implicit */unsigned char) (signed char)-20))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [(short)11]), (((/* implicit */short) (!((_Bool)0)))))))) : (min((((/* implicit */unsigned int) ((short) arr_2 [i_0] [i_0] [i_1]))), ((-(262143U)))))));
                            var_21 *= ((/* implicit */_Bool) min((((unsigned int) ((((/* implicit */_Bool) 2607633627893997137LL)) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) var_0))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_4] [i_3] [i_2 - 1] [i_1] [i_0] [i_0])) * (((/* implicit */int) arr_6 [i_4] [i_4] [i_3] [i_2 - 2] [i_1 - 3] [i_0])))))));
                            arr_11 [i_0] [i_1] [i_1 + 1] [i_2] [i_3] [(unsigned short)10] [i_4] = ((/* implicit */short) (-((~(((/* implicit */int) arr_7 [(unsigned char)4] [(_Bool)1] [i_1] [i_1] [0U] [i_1 - 3]))))));
                            var_22 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_4])) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [(short)23] [i_2 - 2] [i_3] [i_4])) ? (((/* implicit */int) arr_9 [i_0] [i_1 - 3] [9LL] [i_1] [i_4])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0])))) : (((/* implicit */int) min((((/* implicit */signed char) var_1)), ((signed char)127)))))) >> (((((/* implicit */int) arr_10 [i_4] [i_3] [i_2 + 3] [i_0] [i_0])) - (81)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 4; i_5 < 22; i_5 += 3) 
                        {
                            var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-2607633627893997137LL) - (((/* implicit */long long int) 4294705154U))))) ? ((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_2] [(unsigned short)11] [i_5])))) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1 - 1] [i_1] [i_1]))));
                            var_24 = (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)21991)));
                            var_25 = ((/* implicit */unsigned int) (~((~(2104463465026834181LL)))));
                            var_26 = ((/* implicit */short) ((unsigned int) arr_4 [i_5 - 4] [i_2 + 3] [i_1 - 2]));
                        }
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            arr_16 [i_2] [i_1] [i_1] [21U] [2U] = ((/* implicit */unsigned short) arr_9 [i_0] [i_1 - 3] [i_2] [i_3] [i_6]);
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (+(((-2104463465026834171LL) - ((-9223372036854775807LL - 1LL)))))))));
                            var_28 = ((/* implicit */unsigned short) ((short) max((((/* implicit */long long int) var_1)), ((-(arr_15 [i_0] [9] [i_0] [i_0] [i_0] [i_0]))))));
                        }
                        for (long long int i_7 = 1; i_7 < 21; i_7 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((long long int) max((arr_6 [i_7 + 1] [i_7 + 1] [i_7 + 3] [i_7 + 2] [i_7 - 1] [i_7 - 1]), (arr_6 [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7 - 1] [i_7 + 3] [i_7 + 3])))))));
                            var_30 = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) var_13)), (min((((/* implicit */long long int) (_Bool)1)), (2607633627893997131LL)))))));
                        }
                        var_31 ^= min((((((/* implicit */int) arr_18 [i_0] [(_Bool)1] [i_1 - 1] [i_1 - 3] [12])) >> (((((/* implicit */int) arr_6 [i_1] [i_1] [i_1 - 1] [i_2 - 3] [i_2] [i_2 - 3])) - (213))))), (((((/* implicit */int) arr_18 [i_1] [8] [i_1 - 1] [i_1] [i_1])) ^ (((/* implicit */int) arr_18 [i_0] [8U] [i_1 - 1] [i_1 - 1] [i_2])))));
                    }
                    var_32 = ((/* implicit */_Bool) max((((/* implicit */int) ((2607633627893997137LL) <= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_3)), ((unsigned char)0)))))))), ((~((+(((/* implicit */int) arr_4 [i_0] [13LL] [i_2 - 2]))))))));
                }
            } 
        } 
    } 
    var_33 &= max(((~(var_7))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_7))))));
    /* LoopNest 3 */
    for (unsigned int i_8 = 2; i_8 < 24; i_8 += 4) 
    {
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                {
                    var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_8] [i_9 - 1]))))) ? (max((arr_20 [i_8]), (((/* implicit */int) arr_23 [i_10] [i_9] [i_8] [i_8 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [(_Bool)1])))))))) * (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_10] [i_10] [i_10])) && (((/* implicit */_Bool) (unsigned short)1)))))) / (arr_22 [i_8] [i_9] [i_9 - 1])))));
                    var_35 = ((/* implicit */unsigned int) ((((long long int) var_0)) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_8 - 2])) / (((/* implicit */int) arr_19 [i_8 + 1])))))));
                }
            } 
        } 
    } 
}
