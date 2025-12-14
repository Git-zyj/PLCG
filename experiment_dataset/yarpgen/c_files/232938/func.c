/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232938
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 2124618974U)) <= (arr_1 [i_0])));
        arr_5 [i_0] |= ((/* implicit */unsigned long long int) ((2170348315U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)132)))));
        arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) ((unsigned char) arr_0 [i_0])))));
        arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((2170348321U) / (arr_3 [i_0] [(unsigned char)8])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_5)));
    }
    var_20 *= ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)123)) ? (var_14) : (((/* implicit */unsigned int) var_6)))))))), ((-((-(((/* implicit */int) (unsigned char)255))))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_19))) * (var_16))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_3)) <= (2170348322U))))))) : (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_17))))), (var_1)))));
}
