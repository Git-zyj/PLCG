/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205241
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [19] = (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) / (arr_3 [i_0] [i_1])))) ? (arr_5 [i_0]) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0] [i_0])))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_1]);
                arr_8 [i_0] |= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned char) (signed char)-56))), (min((((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1] [i_0]))))), (((6477572394455277573LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_12 = (+(((/* implicit */int) var_1)));
}
