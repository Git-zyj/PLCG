/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31677
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned long long int) -2969700155888938658LL)))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)-66), ((signed char)96)))))))));
                    arr_7 [i_1] [i_1 + 3] [i_1 + 1] = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87)))))) ? (((var_10) << (((((/* implicit */int) (unsigned short)18550)) - (18494))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) (~(var_0)));
}
