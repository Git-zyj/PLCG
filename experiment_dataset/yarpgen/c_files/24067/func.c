/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24067
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] [10U] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_1 + 1]) << (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 2] [i_2]))))) ? (min((arr_5 [i_1 - 3] [i_1 - 3] [i_1 + 1] [i_1 + 1]), (arr_2 [i_1 - 1]))) : (((((/* implicit */_Bool) var_5)) ? (arr_2 [i_1 - 4]) : (arr_2 [i_1 + 1])))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (((((~(((/* implicit */int) (short)32752)))) + (2147483647))) << (((arr_5 [i_0] [i_1 + 1] [i_1 + 1] [4U]) - (3082140766U))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [11U] [3U] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 2182207237678464095LL))) ? (var_16) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_6 [i_3 - 1])) : (((/* implicit */int) (short)32738)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [(_Bool)1])) ^ (((/* implicit */int) var_8))))) ? (((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [(unsigned short)3] [(unsigned short)12] [i_0]))))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                                arr_15 [i_0] [(signed char)11] [i_0] [i_0] [(short)8] [(_Bool)0] = ((/* implicit */signed char) ((((arr_11 [i_1 - 4] [i_3 - 2]) || (((/* implicit */_Bool) arr_13 [i_1 - 4] [i_3 + 1] [(_Bool)1])))) && (((/* implicit */_Bool) ((arr_11 [i_1 - 2] [i_3 - 2]) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1 - 4] [i_3 - 2] [(signed char)9]))))))));
                                arr_16 [(_Bool)1] [(_Bool)1] [i_2] [i_3 - 1] = ((/* implicit */short) ((((_Bool) var_14)) ? (((((/* implicit */_Bool) 2631201906U)) ? (max((-10LL), (((/* implicit */long long int) (short)32758)))) : (((/* implicit */long long int) ((/* implicit */int) (short)32761))))) : (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (max((((/* implicit */long long int) arr_0 [i_2])), (var_16))) : (((arr_6 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3)))))));
                                var_19 += ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-29)) | (((/* implicit */int) (short)-23018)))) * ((-(((/* implicit */int) var_10))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((_Bool) 4294967288U));
}
