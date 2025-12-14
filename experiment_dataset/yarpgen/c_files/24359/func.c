/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24359
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)30)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) -6642656762727207640LL)) ? (((/* implicit */int) (signed char)92)) : (1924720860))) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) min((((/* implicit */int) (short)-16796)), (var_0))))))));
    var_12 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-86)))))) : (((((/* implicit */_Bool) 0ULL)) ? (var_1) : (((/* implicit */long long int) 4294967286U))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((signed char) var_0))), (arr_5 [i_1] [i_0] [i_0])))) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (signed char)-65))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) var_0);
                var_13 += ((/* implicit */int) ((((/* implicit */_Bool) (~(((arr_0 [i_0]) / (((/* implicit */int) (short)16793))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-88))) : (((long long int) 688987998U))));
                arr_8 [i_1] |= ((/* implicit */unsigned short) arr_0 [i_0]);
            }
        } 
    } 
}
