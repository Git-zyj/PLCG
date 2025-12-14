/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214830
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
    var_10 &= ((((/* implicit */_Bool) max(((+((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15872)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)15860)) & (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_0)) : (((long long int) var_7)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15874))) >= (((1729382256910270464LL) % (((/* implicit */long long int) -959077942))))));
                    arr_6 [i_0] [i_0] [i_0] [(unsigned short)14] = -7255785068343585000LL;
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((-7255785068343585004LL), (((/* implicit */long long int) var_7)))))))), (var_6)));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) var_7))))), (((var_6) + (((/* implicit */long long int) var_0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1729382256910270465LL)) ? (((/* implicit */long long int) var_0)) : (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (max((((/* implicit */unsigned int) var_5)), (var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
}
