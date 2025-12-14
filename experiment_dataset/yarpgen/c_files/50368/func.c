/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50368
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
    var_10 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */int) var_8))))))) ? (((var_7) % (((/* implicit */unsigned long long int) var_9)))) : (var_7));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0 - 3] [i_1 - 1] [19LL] [i_2] [i_1] [i_4] [i_3] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_1))))) : (min((-5332200601288677084LL), (((/* implicit */long long int) (signed char)40)))))));
                                var_11 = ((/* implicit */long long int) min((((((/* implicit */_Bool) -284619361)) ? (arr_6 [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)17), ((unsigned char)0))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65535)))))));
                                var_12 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) (unsigned short)33015)))));
                                var_13 = (-(-2150515984944684777LL));
                            }
                        } 
                    } 
                    arr_13 [i_0] = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) var_0)))));
                }
            } 
        } 
    } 
}
