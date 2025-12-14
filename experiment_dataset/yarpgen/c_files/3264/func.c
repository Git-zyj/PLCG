/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3264
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) (_Bool)1)), (max((16232095767158558026ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)246)))) ? (3219888624779700132ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                                var_12 = ((/* implicit */unsigned long long int) ((_Bool) var_5));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) ((930759943U) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), (arr_8 [(short)6] [i_1 - 2] [i_0 + 2] [i_0 + 2] [i_0 + 2]))), (((/* implicit */long long int) var_8))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) min((((/* implicit */int) (unsigned char)19)), (182364218)));
}
