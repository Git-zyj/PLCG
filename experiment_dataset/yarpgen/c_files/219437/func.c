/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219437
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
    var_18 = max(((-(var_17))), (((((/* implicit */_Bool) var_14)) ? ((((_Bool)1) ? (9223372036854775807LL) : (((/* implicit */long long int) 2147483584U)))) : (((/* implicit */long long int) var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_5))))))), (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))) / (arr_4 [i_0] [i_0] [i_0])))));
                arr_6 [i_0] [(unsigned short)2] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (short)32757))) ? (((/* implicit */int) arr_0 [(unsigned char)22] [(unsigned char)22])) : (((/* implicit */int) (unsigned char)227)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((int) var_12))), (min((((/* implicit */long long int) var_7)), (var_17)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) min((var_7), (((/* implicit */short) (_Bool)0))))))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_4 [i_0] [i_0] [i_1 - 1]) : (var_17)))));
                arr_8 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 1])) : (((/* implicit */int) var_13))))), (min((max((var_3), (var_17))), (((/* implicit */long long int) ((-4618420892106645343LL) == (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
            }
        } 
    } 
}
