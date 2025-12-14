/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229013
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
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */int) (!((!(((/* implicit */_Bool) (short)9880))))))), (-911850773)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_13 += ((/* implicit */short) ((((_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_1]))))) ? ((~(((911850773) >> (((var_10) + (9165475780231006861LL))))))) : (911850773)));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)11615))) % (arr_7 [i_2] [i_3] [i_3 + 1] [i_3]))), (max((arr_7 [i_2] [i_3] [i_3 - 1] [i_3]), (arr_7 [i_2] [i_3] [i_3 + 1] [i_3])))));
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_3 + 1] [(signed char)1] [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3]))))), (min((((/* implicit */long long int) -1)), (-4926562663934768445LL))))))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (var_5) : (((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_1 [i_0] [i_3])))) || ((!(((/* implicit */_Bool) (unsigned short)9758)))))))) : (max((((unsigned long long int) arr_3 [i_1] [i_2])), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((arr_4 [i_2]) - (1200324565))))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-2198)) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-2209)), (arr_2 [i_0])))), (((unsigned long long int) (signed char)-37)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0] [i_1] [i_1] [i_2])) >> (((((/* implicit */int) arr_11 [i_0] [5U] [i_0] [i_0] [i_0] [i_2] [i_2])) - (171))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned char) max(((+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22))) / (arr_8 [i_0] [i_0]))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_2] [i_5])) ? (-911850743) : (-1332004561)))), (((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_6 = 1; i_6 < 6; i_6 += 2) 
                        {
                            var_19 = (+(((/* implicit */int) arr_13 [i_0] [i_6 + 3] [i_2])));
                            arr_16 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned char)7] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? ((+(arr_2 [1U]))) : (((((/* implicit */int) (unsigned short)23140)) / (((/* implicit */int) arr_11 [(short)0] [(short)0] [i_2] [i_5] [(short)0] [i_6] [i_6]))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */short) arr_0 [i_5] [i_1]);
                            arr_20 [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(((int) ((((/* implicit */_Bool) arr_12 [i_7] [i_1] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_2])))))));
                        }
                    }
                    arr_21 [i_0] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned int) max((min((((/* implicit */int) (_Bool)1)), (arr_15 [i_0] [i_0] [i_2] [i_1] [i_2]))), (((/* implicit */int) var_1))))), (min((((/* implicit */unsigned int) (_Bool)1)), (4294967273U)))));
                    var_21 = ((/* implicit */unsigned short) ((short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-911850774))));
                }
                var_22 &= arr_15 [i_0] [i_1] [i_1] [i_1] [i_0];
            }
        } 
    } 
    var_23 &= ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 1 */
    for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        arr_24 [(short)0] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-17850)) ? (((/* implicit */int) arr_23 [i_8])) : (((/* implicit */int) arr_22 [i_8])))))))) & (min((((/* implicit */unsigned long long int) arr_23 [i_8])), (max((var_11), (((/* implicit */unsigned long long int) var_10))))))));
        var_24 = ((/* implicit */signed char) var_3);
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_1))));
        arr_25 [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_23 [i_8]);
    }
}
