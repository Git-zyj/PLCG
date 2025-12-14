/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52677
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
    var_15 = 5473556087577832150LL;
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) 15U))), (var_14)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_5);
                var_17 += ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1])))) + (((/* implicit */int) var_6))))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))));
                var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_3 [i_1])))) ? ((-(((/* implicit */int) var_12)))) : (((((/* implicit */int) arr_0 [i_1])) * (((/* implicit */int) arr_4 [12U] [i_1 + 3]))))))) - ((-(4294967281U)))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((4294967280U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85)))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_11);
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((int) var_7)), (((/* implicit */int) ((short) var_4)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))) > (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)124)))))))) : (((/* implicit */int) var_9))));
}
