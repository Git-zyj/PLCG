/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38371
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [18LL] = ((/* implicit */unsigned short) ((long long int) (((+(((/* implicit */int) var_5)))) != (((/* implicit */int) (short)8188)))));
                    var_11 = ((/* implicit */_Bool) var_1);
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)8184))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8188))) : (var_10)))) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)8188))))))))))));
                    arr_9 [i_1] = ((/* implicit */short) ((signed char) ((unsigned int) ((((/* implicit */_Bool) var_6)) || (var_7)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) (short)-8194);
    var_14 = ((/* implicit */unsigned long long int) var_0);
}
