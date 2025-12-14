/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202562
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))) == (max((1056964608U), (((/* implicit */unsigned int) (signed char)3)))))))) == (7222813426664097892LL))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 = (((!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((/* implicit */int) arr_4 [i_0] [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1 + 1]))))) : (max((1651240856), (((/* implicit */int) (short)16972)))));
                var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (min((((((/* implicit */int) (signed char)127)) & (((/* implicit */int) (_Bool)1)))), (1879048192))) : (((/* implicit */int) ((((((/* implicit */_Bool) 1228670552U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) arr_0 [i_0 - 1])))))));
            }
        } 
    } 
}
