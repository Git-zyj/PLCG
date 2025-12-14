/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46585
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
    var_13 = ((/* implicit */unsigned char) var_5);
    var_14 = ((/* implicit */unsigned char) ((((_Bool) (-(((/* implicit */int) var_11))))) ? (((((195222167404396415ULL) * (((/* implicit */unsigned long long int) 1542488180)))) | (((/* implicit */unsigned long long int) ((long long int) var_7))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-7568)), (var_9)))) ? (var_9) : (((/* implicit */long long int) ((((((/* implicit */int) (short)-7568)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)17022)) - (17004)))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) -2311293778061480285LL);
        arr_2 [i_0] = ((/* implicit */signed char) max(((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                arr_8 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(801849935U)))) ? (2311293778061480285LL) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)30693), (max(((unsigned short)48514), ((unsigned short)48513)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        arr_13 [i_2] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_1]))))) | (arr_4 [i_2] [i_3])));
                        arr_14 [i_2] [i_3] [i_2] [i_2] = ((arr_6 [i_3] [i_4]) != (((/* implicit */int) (unsigned short)34842)));
                    }
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        arr_17 [i_2] [i_2] [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_1]))) ^ (2715420483601407492ULL)));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (signed char)113))));
                        arr_18 [i_5] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_2]))));
                        arr_19 [i_5] [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (short)26207)) > (((/* implicit */int) (unsigned short)48514))))) != (((/* implicit */int) ((unsigned char) 18446744073709551604ULL)))));
                    }
                    arr_20 [i_2] = ((/* implicit */long long int) ((arr_6 [i_3] [i_2]) / (((/* implicit */int) (signed char)-73))));
                }
                for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_28 [i_2] [i_2] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_26 [i_7] [i_2] [i_6] [i_2] [i_6 - 1]), (-986987848113972282LL)))) ? (max((((/* implicit */int) (unsigned short)33125)), (-2104878529))) : (((/* implicit */int) (signed char)-118))));
                                arr_29 [i_1] [i_2] [i_2] [i_7] [i_8 - 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) (short)-25884))))))) / (min((((4118601098220449975ULL) / (1ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)48519)) * (((/* implicit */int) arr_9 [i_2] [i_2])))))))));
                                arr_30 [i_2] [i_7] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [i_1] [i_7] [i_6 + 2] [i_8] [i_8 - 1] [i_2])), (arr_26 [i_1] [i_2] [i_6 + 1] [i_2] [i_8 - 1])))) ? (((/* implicit */int) arr_1 [i_1] [i_2])) : (((984325077) ^ (((/* implicit */int) (unsigned short)48513))))))) ? (arr_6 [i_1] [i_2]) : (-1597623334)));
                                var_17 = ((/* implicit */long long int) 984325060);
                                arr_31 [i_2] [i_2] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) (~(arr_25 [i_1] [i_1] [i_2] [i_6] [i_7] [i_2] [i_8 - 1])));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)48513)) + (((/* implicit */int) (unsigned short)48513)))) + ((+(((/* implicit */int) (unsigned short)17023))))));
                }
            }
        } 
    } 
}
