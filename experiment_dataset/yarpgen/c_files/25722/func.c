/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25722
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
    var_10 = ((/* implicit */short) var_2);
    var_11 = ((/* implicit */short) (+(((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : ((-(((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */signed char) (+(arr_0 [i_0])));
                var_13 = (~(((/* implicit */int) ((signed char) (unsigned short)33387))));
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-115))) <= (((((/* implicit */_Bool) min(((short)2040), (arr_2 [i_0])))) ? (max((((/* implicit */long long int) (short)-2048)), (var_7))) : (((long long int) 15934534740186610809ULL)))))))));
                var_15 -= ((((/* implicit */_Bool) ((long long int) (short)30188))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((819024900U), (((/* implicit */unsigned int) (short)30900))))), (var_7)))) : (arr_1 [i_0] [i_1]));
                var_16 = ((/* implicit */unsigned short) var_4);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_1))));
    var_18 = ((/* implicit */signed char) (+((+(((1227480799760882240LL) % (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
}
