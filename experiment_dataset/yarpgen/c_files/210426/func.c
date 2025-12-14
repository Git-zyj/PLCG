/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210426
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
    for (short i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0 - 3] [i_0]);
        var_17 = ((((/* implicit */_Bool) arr_2 [i_0 - 4])) ? (((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_1 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0 - 3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1661717983U)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))) : (((unsigned int) arr_2 [i_0 - 4])))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) ((0ULL) >> (((max((((/* implicit */int) (short)7139)), (max((((/* implicit */int) (short)-7132)), (arr_5 [i_1]))))) - (7087)))));
        var_18 = ((/* implicit */short) min((((/* implicit */int) (unsigned short)255)), (((((/* implicit */int) (signed char)-113)) - (((/* implicit */int) (unsigned short)6332))))));
        arr_9 [(signed char)14] = ((/* implicit */unsigned char) ((unsigned int) (_Bool)1));
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 16; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 2; i_4 < 16; i_4 += 3) 
                    {
                        arr_17 [i_2 + 3] = (unsigned short)6469;
                        arr_18 [i_4] [i_3] [i_2 + 1] [i_1] = ((/* implicit */unsigned char) ((((unsigned int) (!(((/* implicit */_Bool) arr_6 [i_2]))))) >> (((((((/* implicit */_Bool) min((arr_7 [i_3]), (((/* implicit */unsigned int) arr_11 [i_2 - 2] [i_4]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65256))) | (16216204760807603487ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2])) && (((/* implicit */_Bool) arr_11 [i_1] [(short)7])))))))) - (16216204760807636983ULL)))));
                        arr_19 [i_1] [i_1] [i_4] [i_4] [i_1] [i_2] = ((/* implicit */unsigned int) arr_16 [i_4] [i_4] [i_4 - 2] [i_4] [i_4 - 2] [i_4]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            arr_22 [18] [0ULL] [18] [i_4 + 1] [i_2 + 2] [i_1] = ((/* implicit */unsigned short) arr_16 [i_1] [i_1] [i_2] [i_3] [i_1] [i_1]);
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((arr_14 [i_1] [i_2]) - (269889521570747594ULL)))))) + (arr_13 [i_1] [i_1] [i_1])));
                        }
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-7153))));
                            arr_26 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1962998101)) ? (((/* implicit */int) arr_20 [i_1] [i_1] [i_3] [i_1] [i_4 + 1])) : (arr_5 [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (536870784U)))) ? (((/* implicit */int) ((short) (short)8191))) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_3])) ? (arr_13 [i_2 + 1] [i_4] [i_6]) : (((/* implicit */unsigned long long int) 352579273U))))) ? (((((/* implicit */_Bool) (short)-13378)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_4] [i_4]))) : (arr_6 [10ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                        }
                        arr_27 [(unsigned char)15] [i_2 + 2] [i_3] [i_4 + 1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 1)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-3813))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (3289534672U)))))));
                    }
                    var_20 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) (+(1)))))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 4216376174576711447LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)-127)))) : (((((/* implicit */_Bool) (short)18615)) ? (((var_10) ? (arr_4 [i_1]) : (arr_6 [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)3622)) || (((/* implicit */_Bool) 2259921148U)))))))))))));
                }
            } 
        } 
        arr_28 [(unsigned char)8] = ((/* implicit */unsigned int) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((var_4) >> (((arr_7 [i_1]) - (249683443U)))))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((((/* implicit */unsigned long long int) arr_6 [i_1])) * (arr_16 [i_1] [i_1] [i_1] [i_1] [4U] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [10U] [i_1] [i_1] [i_1])))))));
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3942388022U)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (((long long int) (short)508))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        arr_32 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (short)3668))) ? (((int) (_Bool)1)) : (0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((0) >> (((((/* implicit */int) (signed char)-103)) + (106)))))) ? (((/* implicit */int) ((_Bool) arr_13 [i_7] [14] [i_7]))) : (arr_5 [i_7])))) : (max((max((var_4), (((/* implicit */unsigned int) (unsigned short)65535)))), (((/* implicit */unsigned int) arr_5 [i_7]))))));
        var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_7] [i_7])) + (var_16)))) ? (((((/* implicit */_Bool) (unsigned char)133)) ? (arr_23 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_24 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))))) - (((long long int) (unsigned short)42447))))));
    }
}
