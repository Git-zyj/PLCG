/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220137
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [18ULL] [18ULL] = ((/* implicit */unsigned char) var_3);
                arr_7 [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 2])) ^ (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            {
                arr_14 [8U] = ((/* implicit */int) (+(min((arr_1 [i_2] [i_2 - 1]), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_11 [i_2] [i_2 - 1] [i_2])), (var_13))))))));
                arr_15 [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [(_Bool)1])) ? (7719559616719089638LL) : (((/* implicit */long long int) 2147483632))));
            }
        } 
    } 
    var_14 = ((((/* implicit */_Bool) 2147483632)) ? (max((((((/* implicit */unsigned long long int) -2834570531185436137LL)) * (9244205040545915502ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_2)))))));
}
