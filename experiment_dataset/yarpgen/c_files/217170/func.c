/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217170
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
    var_12 = ((/* implicit */int) min((var_6), (var_2)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_6 [i_0 + 2] [i_1] [(unsigned short)5] = ((/* implicit */signed char) ((long long int) -1LL));
                    var_13 = ((/* implicit */signed char) min((min((arr_3 [6LL] [i_0 - 1]), (arr_3 [i_0 - 1] [i_0 - 1]))), (((/* implicit */long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)42))) != (arr_4 [10LL] [(unsigned short)10] [(short)3] [i_2]))))))));
                }
            } 
        } 
    } 
    var_14 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= ((~(((((/* implicit */long long int) ((/* implicit */int) (signed char)47))) / (9223372036854775807LL)))))));
}
