/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205949
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
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (signed char)17)), (var_11))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))))));
    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))) || (((/* implicit */_Bool) var_10))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */_Bool) var_6);
                    arr_9 [i_0] [i_2] [i_0] = ((/* implicit */signed char) min((((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((var_4) / (((/* implicit */int) arr_7 [i_2]))))) : (((unsigned int) (unsigned short)10)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_2] [i_2 + 1] [i_1 - 1])) ^ (((/* implicit */int) arr_6 [i_2] [9U] [i_2 - 1] [i_1 + 1])))))));
                    arr_10 [i_0] [i_1 - 1] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_2 [i_2] [i_2 + 2] [i_2 + 1]);
                }
            } 
        } 
    } 
}
