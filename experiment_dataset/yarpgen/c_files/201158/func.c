/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201158
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_1 [21U]))))))));
                arr_5 [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_3 [1U] [3U])))))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (229376U))));
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_9))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */_Bool) 3602388862U)) ? (((/* implicit */int) (unsigned short)11191)) : (((/* implicit */int) (unsigned char)229)))) * (((/* implicit */int) arr_0 [4U])))) : (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_3)))))))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) var_11)) : ((-(((/* implicit */int) var_1))))))) ? (((((/* implicit */int) var_14)) + (((/* implicit */int) arr_2 [i_2] [i_2] [i_2])))) : (((/* implicit */int) arr_0 [(short)12]))));
    }
}
