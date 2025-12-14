/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31497
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
    var_13 = ((/* implicit */unsigned short) var_1);
    var_14 = ((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) max((var_2), (((/* implicit */short) var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) 6054518652223924989LL))) & (((/* implicit */int) arr_1 [i_0]))))) ? ((+(((/* implicit */int) ((signed char) arr_3 [i_1] [i_0 - 1]))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
                var_16 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (arr_2 [i_0]))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_2 [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (min((arr_2 [i_0]), (arr_2 [i_0])))));
                var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 4] [i_0 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) arr_3 [i_0] [i_1]))))) : (((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) (unsigned char)60))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))) : (((long long int) arr_2 [(signed char)8]))));
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+((~(((((/* implicit */_Bool) arr_0 [3LL])) ? (arr_2 [(unsigned short)8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))))))));
            }
        } 
    } 
}
