/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248598
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) var_9)) ? (var_4) : (var_10))), (((/* implicit */long long int) min((var_3), (arr_7 [i_1] [i_1] [i_2] [i_0])))))), ((-((~(2519451289250244813LL)))))));
                        var_12 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(arr_0 [i_0] [i_2])))), (min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (max((84894065108806528LL), (var_10)))))));
                    }
                    arr_8 [i_0] [i_0] [i_0] [i_0] = arr_1 [i_1];
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((var_3), (arr_4 [i_0] [i_1] [i_1] [i_0])))))) ? ((-(((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2] [i_0])) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) arr_0 [i_2] [i_1])))))) : (arr_5 [i_0] [i_1] [i_1])));
                    var_14 = ((/* implicit */unsigned int) min(((+(arr_1 [i_0]))), (arr_2 [i_0] [i_1] [i_0])));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) (-(arr_2 [i_0] [i_0] [0U]))))))))));
    }
    var_16 = ((/* implicit */unsigned int) 84894065108806528LL);
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) arr_13 [i_4] [i_4]);
                var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((arr_13 [i_4] [i_4]) == (((/* implicit */long long int) min((0U), (arr_11 [i_4] [i_4]))))))), ((~(min((arr_11 [i_4] [i_4]), (arr_9 [i_4])))))));
            }
        } 
    } 
}
