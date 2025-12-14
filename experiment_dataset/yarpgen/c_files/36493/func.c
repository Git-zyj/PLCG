/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36493
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
    var_12 &= ((long long int) ((((/* implicit */_Bool) (~(536870911ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((7222452056377991689LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)13)) ? (-703945396) : (0)))));
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_0))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [(unsigned char)11])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((/* implicit */unsigned int) min((-703945396), (((/* implicit */int) arr_2 [(unsigned char)2] [i_0] [i_0])))))))) ? (min((arr_1 [i_0] [i_0]), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2163))) ^ (arr_1 [i_0] [i_1 - 4]))))) : (((min((arr_1 [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_0 [i_0])))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [8LL] [i_1 - 4]))))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_11) ? (var_4) : (var_0))))))), (var_7))))));
    var_16 = ((/* implicit */long long int) var_8);
    var_17 = ((/* implicit */unsigned int) var_4);
}
