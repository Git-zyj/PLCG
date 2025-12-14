/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196547
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
    var_15 = ((/* implicit */int) ((((-1233713137053269135LL) + (9223372036854775807LL))) >> (((395597953) - (395597924)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((var_6) < (var_6))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_12) >= (((/* implicit */int) arr_7 [i_0] [i_1] [i_0])))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)98))) | (arr_3 [i_0]))))))));
                    var_16 = ((/* implicit */long long int) -395597954);
                    arr_9 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
                    var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2 - 1])))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_14)) + (395597953)))), (((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5)))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)44279)) - (((/* implicit */int) var_13)))) + ((-(((/* implicit */int) var_4))))))) : (var_5)));
}
