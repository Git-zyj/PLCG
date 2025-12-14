/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194171
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
    var_11 -= min((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_6)) ? (var_6) : (var_0)))))), (var_8));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned int) arr_3 [i_0]));
                var_12 += ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-9662)) == (-594628121))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((arr_0 [i_0] [i_1 + 3]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1] [i_0]))) : (arr_4 [(signed char)11])))))) : ((~(((arr_5 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
            }
        } 
    } 
    var_13 = (signed char)50;
}
