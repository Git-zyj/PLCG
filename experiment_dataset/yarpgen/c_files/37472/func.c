/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37472
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] |= ((/* implicit */int) ((signed char) min((((/* implicit */int) arr_3 [i_1] [i_1 + 1] [i_1])), (((((/* implicit */int) arr_2 [i_0])) + (0))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8936830510563328ULL)) ? ((+(((/* implicit */int) (unsigned char)128)))) : (((/* implicit */int) (unsigned short)0))));
                var_21 = ((((/* implicit */_Bool) max((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1])))) ? (max((((/* implicit */unsigned long long int) arr_2 [i_1 + 2])), (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_0])) < (((/* implicit */int) arr_2 [i_0])))))));
                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) min(((short)17514), (((/* implicit */short) arr_2 [i_0]))))) * (((arr_4 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)65535)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_12))));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (var_0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (1496230237) : (var_2)))) ? (((((/* implicit */_Bool) var_12)) ? (var_3) : (var_19))) : (var_2)))) : ((+(var_5)))));
    var_25 = ((/* implicit */signed char) (+(var_11)));
}
