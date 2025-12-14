/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199314
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
    var_10 = ((/* implicit */unsigned short) ((signed char) var_6));
    var_11 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [9LL] [(short)0] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)74))) ^ (var_4)))) ? (((/* implicit */int) (!(var_1)))) : (((((/* implicit */int) (signed char)-117)) & (((/* implicit */int) (unsigned short)8192))))))));
                    var_12 = ((/* implicit */int) ((unsigned short) var_9));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) max(((unsigned char)243), ((unsigned char)255))))));
                    arr_10 [i_0] [8U] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((_Bool) (unsigned char)19)) ? (((((/* implicit */_Bool) 47237442U)) ? (14LL) : (((/* implicit */long long int) 47237463U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_2] [i_0])))))), (max((((((/* implicit */_Bool) 47237441U)) ? (var_5) : (((/* implicit */unsigned long long int) var_9)))), ((((_Bool)1) ? (var_5) : (((/* implicit */unsigned long long int) arr_3 [i_0] [6ULL] [(_Bool)1]))))))));
                    var_13 = ((/* implicit */unsigned int) min((((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) -691545344291102798LL)))))), (((short) (+(((/* implicit */int) var_6)))))));
                }
            } 
        } 
    } 
}
