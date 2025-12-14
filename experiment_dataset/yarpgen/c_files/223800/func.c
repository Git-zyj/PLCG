/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223800
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [(unsigned short)5] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_0 [i_0]))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65527)) != (((/* implicit */int) (unsigned char)113))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((max((max((7597644552566537921LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_17))))))) >> (((/* implicit */int) ((signed char) max((var_8), (var_10)))))));
    var_19 = ((/* implicit */unsigned short) var_15);
}
