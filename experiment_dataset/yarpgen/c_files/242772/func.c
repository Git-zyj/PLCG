/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242772
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
    var_18 = ((/* implicit */signed char) min((var_15), (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))));
    var_19 *= ((/* implicit */short) (-(min((((/* implicit */int) (short)13397)), (min((((/* implicit */int) (_Bool)1)), (1928442522)))))));
    var_20 = ((/* implicit */unsigned int) ((var_9) * (((((/* implicit */long long int) ((/* implicit */int) var_1))) * (min((var_10), (((/* implicit */long long int) var_5))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_0)), (((var_9) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (short)-1331);
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) arr_4 [i_1] [i_1])))));
        arr_6 [i_1] = ((/* implicit */unsigned int) ((_Bool) ((arr_5 [i_1]) == (((/* implicit */long long int) ((/* implicit */int) var_1))))));
    }
}
