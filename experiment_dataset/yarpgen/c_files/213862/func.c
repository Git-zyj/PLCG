/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213862
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45821)) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [i_0] [(signed char)0])))) ? (((unsigned long long int) 99629457)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_1])) * (((/* implicit */int) ((arr_4 [i_0] [i_0] [i_1]) > (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0]))))))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_2 [i_0] [(short)6] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0]))))) : (((((/* implicit */_Bool) -626424712042731894LL)) ? (((/* implicit */int) (short)2206)) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((long long int) var_13));
    var_18 = ((/* implicit */int) (-(var_16)));
    var_19 = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (var_16))));
}
