/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225697
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 4; i_3 < 10; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1637969201344867065ULL))))) < (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) < (var_5))))))) < (((/* implicit */int) ((1637969201344867089ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)93))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_2] [i_4] = ((/* implicit */signed char) ((unsigned short) arr_0 [i_2 - 2]));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1] [5U] [i_2 - 2] [i_2])) ? (arr_4 [i_2 + 1] [i_1] [i_1]) : (arr_4 [i_2 - 1] [i_1] [i_1])));
                            var_20 -= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_2 [i_4] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_0 [i_2])))));
                        }
                    }
                    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 1) 
                    {
                        var_21 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((arr_8 [i_2] [i_2] [i_2 - 1]) < (((/* implicit */int) ((arr_3 [(unsigned char)9]) < (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))), (((long long int) min((arr_11 [i_5] [11LL] [i_2] [i_1] [i_0]), (((/* implicit */long long int) var_11)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 16808774872364684574ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)18027))))))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)162))))), (max((16808774872364684574ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_6])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)128)))))));
                            arr_21 [i_0] [i_1] [i_2] [i_5] = max((max((((/* implicit */unsigned int) arr_8 [i_5 + 2] [i_2 - 2] [i_2])), (arr_5 [i_5 + 3] [i_5] [i_2 + 1]))), (((((/* implicit */_Bool) arr_8 [i_5 + 1] [i_2 + 1] [i_5 + 1])) ? (arr_5 [i_5 + 2] [i_2] [i_2 + 1]) : (((/* implicit */unsigned int) arr_8 [i_5 - 1] [i_2 - 2] [i_0])))));
                            arr_22 [i_6] [(unsigned char)9] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112))) < (16808774872364684534ULL)))) < (((((/* implicit */_Bool) 2411122571U)) ? (497481402) : (((/* implicit */int) (unsigned char)255))))))) < (((((((/* implicit */int) var_11)) + (((/* implicit */int) (unsigned char)91)))) + (((((/* implicit */_Bool) var_18)) ? (var_5) : (((/* implicit */int) (unsigned char)124))))))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) 1637969201344867033ULL))));
                        }
                    }
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        arr_26 [i_7] [i_7] [i_2 + 1] [2LL] [i_0] [i_0] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned char)116))))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (unsigned short)48266)) : (((/* implicit */int) (unsigned char)20))));
                        var_25 += ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 16808774872364684521ULL))))) < (((/* implicit */int) ((((/* implicit */_Bool) 16808774872364684540ULL)) || (((/* implicit */_Bool) (signed char)-50)))))));
                    }
                    var_26 = ((/* implicit */short) var_6);
                    var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_2] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_1] [i_0]))) : (0U)))), (((unsigned long long int) (_Bool)1))));
                    var_28 += ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)0))));
                    var_29 -= ((/* implicit */signed char) ((min((arr_0 [i_1]), (((/* implicit */long long int) arr_9 [(signed char)7] [(signed char)7] [i_0] [i_0])))) < (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)132)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        arr_29 [i_8] = ((/* implicit */unsigned short) ((max((((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) (short)24800))))), ((+(((/* implicit */int) (_Bool)0)))))) < (((/* implicit */int) ((((/* implicit */int) ((8924193993850702957LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) < (((/* implicit */int) ((548880859U) < (((/* implicit */unsigned int) arr_28 [i_8] [i_8]))))))))));
        arr_30 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_8]))) : (3746086406U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_8] [i_8]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967288U)))))));
    }
}
