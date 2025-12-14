/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235272
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
    var_13 = ((/* implicit */int) ((min((var_3), (((/* implicit */long long int) var_8)))) / (((/* implicit */long long int) (+(var_2))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) arr_1 [i_1]))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [(unsigned char)5])) ? (min((arr_4 [i_0 - 1] [i_0 - 1]), (arr_4 [i_0 + 1] [i_0 + 1]))) : (arr_4 [i_0 + 2] [i_1])));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_2)) : (var_9))) <= (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
}
