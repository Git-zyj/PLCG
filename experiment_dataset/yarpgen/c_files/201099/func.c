/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201099
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)26830)))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)26833))))) ? (var_6) : (((/* implicit */unsigned long long int) var_3))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 2]))))));
                                var_15 = ((/* implicit */unsigned int) (((((-(((/* implicit */int) arr_0 [(signed char)4] [i_1 + 2])))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_3] [i_1 - 1])) || (((/* implicit */_Bool) arr_5 [i_0]))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (arr_3 [i_0] [i_3])))))))));
                                arr_11 [i_0] [(short)8] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (~((-(arr_10 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1 + 2])))));
                            }
                        } 
                    } 
                    arr_12 [i_0] = ((unsigned int) ((unsigned int) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) arr_8 [i_0])))));
                    var_16 = ((/* implicit */unsigned int) ((unsigned long long int) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [(signed char)2] [i_0] [i_0])) : (((/* implicit */int) (signed char)-7)))))));
                }
            } 
        } 
    } 
}
