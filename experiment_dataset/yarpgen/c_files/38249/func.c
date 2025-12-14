/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38249
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_15 += ((/* implicit */short) (~(arr_2 [i_0 + 2])));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */int) ((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 2])))));
            arr_7 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_0 [i_0])))));
        }
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [i_0 + 3])) : (((/* implicit */int) var_0)))))));
    }
    for (int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_17 += ((/* implicit */unsigned int) (+((((+(((/* implicit */int) arr_8 [i_2])))) - ((-(((/* implicit */int) arr_8 [5ULL]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) var_14);
                    arr_17 [i_4] [i_3] [6ULL] [i_2] = ((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_4]))))), (((signed char) arr_16 [i_2]))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) || (var_13)))) >> (((var_11) - (1283976435U)))));
    }
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (12963369560766007196ULL)));
    var_21 = ((/* implicit */short) ((unsigned long long int) var_11));
}
