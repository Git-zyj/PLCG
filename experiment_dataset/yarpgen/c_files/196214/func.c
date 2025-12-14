/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196214
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
    var_20 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-18)), (var_7))))))), (((unsigned long long int) ((int) var_10)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((signed char) (_Bool)1))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31207))) : (2211699355U)))));
                var_22 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1])) ? (((((/* implicit */_Bool) (unsigned short)34322)) ? (((/* implicit */int) (unsigned short)17859)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min(((unsigned short)34322), (((/* implicit */unsigned short) (_Bool)1)))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((int) 100072185U));
            }
        } 
    } 
}
