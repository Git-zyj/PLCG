/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45817
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                var_15 -= ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (short)14841)), (var_10)))) ? (max((184846591), (((/* implicit */int) arr_2 [9ULL])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                arr_5 [(unsigned char)19] [(unsigned char)19] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (signed char)82))) / (((/* implicit */int) arr_3 [i_0] [i_0]))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483640)) ? (((/* implicit */unsigned long long int) var_9)) : (var_12))))));
}
