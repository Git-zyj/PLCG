/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28244
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
    var_10 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) var_4)), (var_3))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned char) arr_1 [i_0])))))) | (arr_4 [i_0] [i_1 + 1] [i_2 - 2]))), (max((min((arr_4 [i_0] [i_1] [i_2 - 2]), (arr_4 [(short)8] [i_1 + 1] [i_2]))), (min((arr_4 [(short)20] [i_1 + 1] [(short)20]), (((/* implicit */long long int) arr_5 [i_1]))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2 + 1] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 + 1]))) + (arr_3 [i_2 - 1]))) / (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)8)), ((short)11054)))))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) arr_1 [i_0]);
                    arr_11 [i_1] [i_1 - 1] [i_1] = ((/* implicit */short) ((((((/* implicit */int) (short)23720)) / (((/* implicit */int) (short)-23721)))) / (((/* implicit */int) max((arr_1 [(short)5]), (arr_7 [i_1] [i_1 - 1] [i_1 - 1] [i_2 - 2]))))));
                    var_11 = ((/* implicit */signed char) min(((~(arr_4 [(short)14] [i_1 - 1] [i_2 - 2]))), (((/* implicit */long long int) arr_2 [i_1 - 1]))));
                }
            } 
        } 
    } 
}
