/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232466
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
    var_13 = (~(((unsigned int) min((var_0), (((/* implicit */long long int) var_11))))));
    var_14 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) (unsigned char)120)) && (((/* implicit */_Bool) 3338265924940035902ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) > (2362622003998720694ULL))))) : (((long long int) 16084122069710830921ULL))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (signed char)-40);
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_0])))) ? (((unsigned long long int) arr_3 [(unsigned char)0] [(unsigned char)0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */long long int) arr_0 [(unsigned char)8])) : (arr_3 [i_0] [i_1])))))))));
                var_16 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) * (12683859333894393779ULL))), (((min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])), (var_9))) >> (((unsigned long long int) (unsigned char)55))))));
            }
        } 
    } 
}
