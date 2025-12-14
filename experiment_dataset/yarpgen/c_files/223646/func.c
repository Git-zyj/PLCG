/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223646
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
    var_10 = ((/* implicit */unsigned long long int) var_6);
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) var_4))));
    var_12 = 7385444194729782234ULL;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_5)))));
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (short)25317)))), (((((/* implicit */int) ((((/* implicit */_Bool) (short)25339)) || (((/* implicit */_Bool) (short)9932))))) & (((/* implicit */int) arr_2 [i_0] [i_2]))))));
                    var_13 = ((/* implicit */long long int) var_2);
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) var_5);
                    var_14 = ((/* implicit */unsigned int) ((-242384969) & (((/* implicit */int) (short)-25319))));
                }
            } 
        } 
    } 
}
