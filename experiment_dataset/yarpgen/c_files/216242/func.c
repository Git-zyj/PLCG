/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216242
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
    var_18 = ((/* implicit */unsigned int) var_9);
    var_19 = ((/* implicit */unsigned long long int) var_7);
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((short) var_5)))) / (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 17013732773997910909ULL)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (1433011299711640689ULL))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (short i_3 = 4; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((arr_4 [(short)3] [i_1] [i_2]) <= (((/* implicit */int) ((((int) 1911271246)) <= (((/* implicit */int) ((99655007U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3])))))))))));
                            var_22 = ((/* implicit */int) ((signed char) ((short) ((arr_12 [i_1] [i_1] [(short)10] [i_1] [i_1]) ? (1992016799U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (short i_6 = 1; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_5] [3ULL] [i_0] = ((/* implicit */signed char) (-(arr_13 [i_5] [i_0])));
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) 3907505406U))), (((((/* implicit */_Bool) arr_18 [i_5])) ? (arr_21 [i_0] [i_1]) : (var_13)))))) ? ((+(((arr_12 [i_0] [i_1] [i_4] [i_0] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (1433011299711640688ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_16 [i_1 + 2] [i_6 - 1]), (arr_16 [i_1 - 2] [i_6 + 1])))))));
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_6])) : (((/* implicit */int) max(((signed char)-10), (arr_2 [i_0]))))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1911271246)) ? (1911271246) : (((/* implicit */int) (signed char)-115))))) - (((unsigned int) var_7)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-125)) : (arr_5 [10U] [10U] [i_0])))) ? (((/* implicit */int) ((17013732773997910923ULL) != (((/* implicit */unsigned long long int) var_17))))) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1 - 2] [i_6 + 1])))))))));
                                var_25 = ((unsigned long long int) ((((unsigned long long int) 17013732773997910909ULL)) >> (((17013732773997910933ULL) - (17013732773997910875ULL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
