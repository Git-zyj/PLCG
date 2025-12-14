/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42323
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((1044480) * (((/* implicit */int) (unsigned char)0))))) : (var_2)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned int) var_7);
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) arr_2 [i_0 + 1] [i_0] [i_0]))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((arr_5 [i_0 + 2]) & (((/* implicit */long long int) arr_6 [i_0 + 2] [i_1] [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) 3043366077U)))))) != (((((/* implicit */unsigned long long int) 850287323)) + (13418709656477608029ULL))))))))))));
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_16 [2U] [i_0] [i_1] [i_2] [(signed char)5] [(signed char)5] [i_4] = ((/* implicit */signed char) (+(arr_6 [8U] [i_1] [8U])));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((8321499136ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-126)))))))) ^ (((arr_15 [i_1] [i_1] [i_2] [i_1] [i_1] [i_4] [i_0 + 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [2U] [i_4] [i_4])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(((/* implicit */int) var_16)))))));
}
