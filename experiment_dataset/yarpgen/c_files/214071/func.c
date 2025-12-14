/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214071
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                var_13 = ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0 + 1]))) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1 - 1])) : (((((arr_3 [i_0 + 1] [i_0] [i_1 - 3]) <= (((/* implicit */unsigned long long int) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9285)) && (((/* implicit */_Bool) arr_6 [i_0])))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_11))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_8);
    var_15 = ((/* implicit */int) min((min(((unsigned char)202), ((unsigned char)98))), (((/* implicit */unsigned char) var_1))));
    var_16 |= ((/* implicit */unsigned short) (unsigned char)54);
    var_17 = ((/* implicit */unsigned long long int) var_7);
}
