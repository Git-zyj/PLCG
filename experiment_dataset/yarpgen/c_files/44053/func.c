/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44053
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
    var_10 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(-1LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_3))))) : (((long long int) (signed char)-85))))));
                var_11 = (~((-(((/* implicit */int) arr_2 [i_0 - 2])))));
                arr_6 [i_0] = ((/* implicit */signed char) arr_1 [4LL] [(unsigned char)10]);
            }
        } 
    } 
    var_12 += ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_6)), (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20847))))))));
}
