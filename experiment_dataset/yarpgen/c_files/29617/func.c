/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29617
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))) & ((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))) >= (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-16396)) : (((/* implicit */int) (short)-28185)))), ((-(((/* implicit */int) arr_4 [(short)7] [i_1] [i_0]))))))));
                var_16 = ((/* implicit */int) max((min((max((arr_6 [i_1]), (((/* implicit */long long int) var_10)))), (arr_6 [i_0 + 3]))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)16389)) : (((/* implicit */int) arr_4 [i_0 + 3] [i_0] [(unsigned short)10])))))))));
                var_17 ^= ((/* implicit */unsigned int) min(((unsigned short)58820), (((/* implicit */unsigned short) (short)-16378))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_5))));
}
