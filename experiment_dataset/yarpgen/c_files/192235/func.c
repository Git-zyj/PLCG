/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192235
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((((arr_7 [i_1] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_2]))))), (max((((/* implicit */unsigned long long int) var_13)), (arr_7 [i_2] [i_1])))));
                    arr_8 [i_2] [(_Bool)1] = ((/* implicit */int) var_17);
                    arr_9 [i_2] [i_1] [i_2] [i_2] = var_15;
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_1);
    var_22 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) 2527549886U)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)45636)))) : (((/* implicit */int) ((((/* implicit */_Bool) 55478961118628086LL)) || (((/* implicit */_Bool) var_13)))))))), ((~(var_11)))));
    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-22715))) : (3639797286109924563LL))))));
}
