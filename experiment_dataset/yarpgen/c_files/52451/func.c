/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52451
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((long long int) (unsigned char)255))))) ? (max((((((/* implicit */unsigned long long int) var_3)) % (var_2))), (((/* implicit */unsigned long long int) ((signed char) (unsigned char)255))))) : (var_4)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_0] = ((/* implicit */unsigned char) (_Bool)0);
                    var_12 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */long long int) ((unsigned int) arr_5 [i_0] [i_0]))) : (min((arr_4 [i_2] [i_0]), (var_1))))) % (((/* implicit */long long int) arr_0 [i_0]))));
                    var_13 = max((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned char)7)))), (max((((((/* implicit */int) (signed char)85)) << (((/* implicit */int) (unsigned char)7)))), (((/* implicit */int) ((signed char) var_5))))));
                }
            } 
        } 
    } 
}
