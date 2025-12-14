/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245530
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) min((var_13), (max((arr_4 [i_1] [i_1 + 1] [i_1]), (((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 2] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_1] [i_1 - 3] [i_1 - 3])))))));
                var_14 += ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (10126836U))) ? (((long long int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_12))))) : (5LL));
                var_15 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (-21LL)))) ? (((((/* implicit */_Bool) (-(var_5)))) ? (max((5LL), (((/* implicit */long long int) (_Bool)1)))) : (arr_0 [i_1 - 2]))) : (((-24LL) % (135107988821114880LL))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)188)))))) == (max((var_5), (((var_6) + (((/* implicit */long long int) ((/* implicit */int) var_8))))))))))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) 1762319490U))));
    var_18 = ((/* implicit */short) 23LL);
}
