/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217017
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
    var_18 = ((/* implicit */signed char) (+(491343562233571912LL)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */long long int) (unsigned short)1658);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (signed char)67);
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (_Bool)1))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_14 [i_2] [i_2] [i_1] [i_2] = -1246570223;
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) var_3);
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) - (arr_9 [i_0] [i_2] [i_0 + 1] [i_0]))) - (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-24))) : (arr_9 [i_0] [i_2] [i_0 + 1] [i_0])))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (signed char)67))));
                            arr_20 [i_2] = (-(((/* implicit */int) var_0)));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_9 [i_0 - 2] [i_0] [i_0] [i_0 - 2]))));
                        }
                        var_23 += ((/* implicit */_Bool) arr_17 [i_0] [i_1 + 1] [i_1 + 3] [i_3] [i_0 - 1]);
                        arr_21 [i_1] [i_1] [i_0] [i_3] |= ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0 + 1]) : (((/* implicit */int) (signed char)-36)))) != (arr_1 [i_1 - 1])));
                        arr_22 [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)15505)) ^ (((/* implicit */int) (_Bool)0))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) & (arr_4 [i_0 - 1]))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1 + 1] [i_1 - 1] [i_0 - 1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32453)))))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) (unsigned short)41734)) | (((/* implicit */int) var_0))))));
    var_25 = ((/* implicit */unsigned long long int) min((var_25), (18446744073709551615ULL)));
}
