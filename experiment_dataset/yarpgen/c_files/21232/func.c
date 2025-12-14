/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21232
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] = (!(((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) arr_1 [i_1])))));
                arr_5 [i_0] [(short)8] [(signed char)4] = ((/* implicit */short) var_7);
                var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (unsigned char)102))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */int) var_7))))))) ? ((-(((((/* implicit */_Bool) arr_3 [12U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_3 [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))) - (((arr_3 [i_0]) - (((/* implicit */unsigned long long int) arr_0 [i_1]))))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))), (((((/* implicit */_Bool) var_5)) ? (max((var_10), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (var_8)))))))));
                arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_3 [(short)6])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))) : ((+(((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) ((((_Bool) var_10)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (var_1))) : (((((/* implicit */int) var_7)) & (var_1)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (arr_3 [i_1])))));
            }
        } 
    } 
    var_14 |= ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned int i_3 = 2; i_3 < 21; i_3 += 1) 
        {
            {
                var_15 += ((/* implicit */unsigned int) var_7);
                arr_15 [i_2] [i_3 + 2] = ((/* implicit */unsigned char) arr_13 [i_2] [i_2] [(signed char)9]);
                arr_16 [i_2] [i_2] [i_2] = ((/* implicit */int) var_0);
                arr_17 [9LL] [i_3 - 1] [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_11 [i_2] [i_3])) || (((/* implicit */_Bool) var_11))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((var_1) == (((/* implicit */int) var_4)))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((long long int) var_8)), (((/* implicit */long long int) var_1))))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) var_1))));
}
