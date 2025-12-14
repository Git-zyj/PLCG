/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235151
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
    var_13 = (+(max((var_9), (((/* implicit */long long int) var_5)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (((~(max((-6802867814377932448LL), (((/* implicit */long long int) arr_2 [i_0] [(unsigned short)6])))))) > (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 - 2]))) * (var_12)))))))));
                var_15 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1 + 2] [i_0 - 2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_0 + 3])) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_0 - 1])) : (((/* implicit */int) arr_4 [i_1 - 2] [i_0 + 2]))))) : (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_0 + 2])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 2] [i_0 + 1]))))));
                var_16 = ((/* implicit */unsigned short) (~((~(4146082825U)))));
                arr_6 [(short)1] [i_1 - 1] = ((/* implicit */unsigned short) var_5);
            }
        } 
    } 
}
