/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44771
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
    for (int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [8] &= ((/* implicit */unsigned short) ((unsigned int) 1891537603));
                var_13 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_1 - 3]) : (arr_5 [(unsigned char)8])))));
                var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_5 [i_0 - 2])))) ? (((/* implicit */int) arr_3 [i_0 + 3] [2])) : ((-(arr_5 [i_0 + 1])))));
                arr_7 [i_0 - 1] [i_0 - 1] [i_0] = ((((/* implicit */_Bool) ((unsigned char) 604653057))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (32767U));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) var_5);
}
