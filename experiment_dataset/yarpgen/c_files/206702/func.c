/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206702
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        var_10 = ((/* implicit */unsigned long long int) (~((-(arr_2 [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_2 [i_0]))))));
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [7ULL])) : (((/* implicit */int) arr_0 [i_0]))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) var_4))))) ? (arr_2 [i_0]) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0]))))))))));
    }
    var_12 = ((/* implicit */short) (-(var_6)));
    var_13 = ((/* implicit */long long int) (+((~(var_8)))));
    /* LoopNest 3 */
    for (short i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) (~(min(((+(((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) arr_5 [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        for (long long int i_5 = 1; i_5 < 17; i_5 += 3) 
                        {
                            {
                                arr_17 [2LL] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */long long int) arr_16 [i_1 - 1] [i_5] [i_5] [i_5] [i_5]);
                                var_15 = ((/* implicit */short) arr_13 [i_1] [i_1] [i_5 - 1] [i_1]);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (min((arr_7 [i_3] [i_2] [i_1]), (((/* implicit */unsigned long long int) min((arr_6 [i_1] [i_1 + 1]), (arr_6 [i_1 + 1] [i_1 + 1]))))))));
                }
            } 
        } 
    } 
}
