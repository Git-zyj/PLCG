/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221779
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (~((-((-(((/* implicit */int) var_0)))))))))));
    var_13 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) min((((/* implicit */short) (_Bool)0)), (var_9)))), ((-(1822442495910560410LL))))), (((/* implicit */long long int) (-(min((2147483647), (((/* implicit */int) var_4)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_0 [i_0] [i_1]), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])))))))), (min((max((18378565447871376740ULL), (((/* implicit */unsigned long long int) -5641725662389189102LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1822442495910560410LL)))))))));
                    var_14 = ((/* implicit */unsigned long long int) (-(max((max((((/* implicit */long long int) (signed char)12)), (var_11))), (max((var_11), (arr_0 [i_0] [i_2])))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_8)), (var_10))))))));
}
