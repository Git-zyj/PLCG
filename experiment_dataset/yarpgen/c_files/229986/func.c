/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229986
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
    var_16 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) var_11);
                var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_12))))) ? (max((((/* implicit */long long int) (short)-24601)), (var_13))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_1]))))) - (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_1 - 4])))) != (((/* implicit */int) var_12))))))));
                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-24582))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 7; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            {
                var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_2 + 2]), (var_2))))) | ((+((-(arr_2 [i_2] [i_2])))))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 + 3] [i_2 + 3])))))) ? ((~(((/* implicit */int) (short)32767)))) : (((((/* implicit */int) var_12)) * (((/* implicit */int) arr_4 [i_2 - 1] [i_3]))))));
            }
        } 
    } 
}
