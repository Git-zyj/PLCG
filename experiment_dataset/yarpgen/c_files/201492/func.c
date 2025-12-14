/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201492
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
    var_12 *= ((/* implicit */signed char) var_3);
    var_13 = min((var_11), (((/* implicit */short) (!(((/* implicit */_Bool) var_10))))));
    var_14 -= ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) min(((~(arr_2 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((16310265160891449345ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) : (((/* implicit */int) min((var_0), (arr_4 [i_0] [i_1] [i_1])))))))));
                var_15 = var_1;
            }
        } 
    } 
}
