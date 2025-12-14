/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19900
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
    var_19 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))))), (max((((/* implicit */long long int) var_8)), (((long long int) var_11))))));
    var_20 = ((/* implicit */_Bool) max((max((var_9), (((/* implicit */long long int) (~(((/* implicit */int) var_8))))))), (((/* implicit */long long int) -279488950))));
    var_21 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((((/* implicit */unsigned int) -279488965)) ^ (40554748U)))))), (var_2)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 3])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1 + 1])) || (((/* implicit */_Bool) var_11))))) : (max((279488989), (-279488953)))));
                arr_5 [i_1] [i_1] = ((/* implicit */int) var_4);
                arr_6 [i_1] [i_1] = ((/* implicit */_Bool) 4254412520U);
            }
        } 
    } 
}
