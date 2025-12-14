/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42915
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | ((-(((/* implicit */int) var_9))))))) ? (var_10) : (((/* implicit */unsigned int) ((((/* implicit */int) ((968633046U) > (((/* implicit */unsigned int) var_6))))) | ((~(((/* implicit */int) var_17)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_12 [(short)3] [i_3] [8LL] = ((/* implicit */unsigned int) var_1);
                                var_19 += var_16;
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((signed char) ((arr_7 [i_4 - 2] [17U] [i_0] [(_Bool)1] [i_4]) + (arr_7 [i_4 + 2] [i_1] [i_2] [16ULL] [i_4])))))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_5))));
                            }
                        } 
                    } 
                    arr_13 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [i_0]))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [(short)11] [(short)11] [(short)11]))))) ? (491655717) : (((((/* implicit */_Bool) -8905586871906987867LL)) ? (var_0) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
}
