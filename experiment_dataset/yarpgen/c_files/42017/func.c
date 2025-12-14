/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42017
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
    var_18 = ((/* implicit */_Bool) var_4);
    var_19 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-2544326376001201598LL) : (7578877399703624973LL))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 6; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                arr_4 [i_0 + 3] [i_0 + 4] [i_1 + 3] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) var_17))))));
                var_20 = ((/* implicit */int) ((unsigned long long int) (((!(((/* implicit */_Bool) 7578877399703624973LL)))) ? (-2544326376001201598LL) : (((/* implicit */long long int) var_12)))));
                arr_5 [i_0 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) var_3)) : (var_11)))) && (((/* implicit */_Bool) arr_1 [i_1]))))) + (((/* implicit */int) arr_0 [i_0]))));
                var_21 *= ((/* implicit */long long int) min((((/* implicit */unsigned short) (((-(-2895695267862168592LL))) > (((/* implicit */long long int) ((((/* implicit */_Bool) 419693586U)) ? (((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 3] [i_0 + 1])) : (((/* implicit */int) var_9)))))))), (((unsigned short) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1] [(signed char)2])))))));
                var_22 += ((/* implicit */unsigned short) min((((/* implicit */long long int) (-((-(((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)0)), (3875273708U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2034))) : (7578877399703624973LL)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_17);
}
