/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202522
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (-(((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (-(((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_1] [(unsigned short)20])) - (var_6)))) - (max((2633681481U), (((/* implicit */unsigned int) var_10)))))))))));
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (unsigned short)34231))));
            }
        } 
    } 
    var_15 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31290))) : (1950401720U))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
}
