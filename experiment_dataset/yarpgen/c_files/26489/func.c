/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26489
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(arr_1 [i_0 + 2])))), (var_4)));
                arr_5 [i_1] [(unsigned short)6] = ((/* implicit */signed char) min((((/* implicit */long long int) 1114418501)), ((~(var_1)))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_1] [i_0 + 2] [i_1])) : (((/* implicit */int) arr_2 [i_1])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)28902)) : (((/* implicit */int) var_9)))))))));
            }
        } 
    } 
    var_10 = ((/* implicit */short) (~((~(((/* implicit */int) (_Bool)1))))));
    var_11 = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) var_2))))) >= (((max((var_3), (((/* implicit */long long int) var_9)))) ^ (((/* implicit */long long int) var_6))))));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_7))))))) ? (min(((+(var_5))), ((-(((/* implicit */int) var_7)))))) : (max((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_3))))), (1114418501)))));
}
