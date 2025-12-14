/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191180
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
    var_13 -= ((/* implicit */unsigned short) ((var_3) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_11)))) ? (max((3351971476442503519LL), (((/* implicit */long long int) 1724871725)))) : (((/* implicit */long long int) 446675138U)))) - (3351971476442503494LL)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_14 = (i_0 % 2 == 0) ? (((/* implicit */short) ((((((((/* implicit */_Bool) -1724871726)) ? (8706724768935457939LL) : (((/* implicit */long long int) arr_4 [i_0] [i_1])))) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) : (arr_4 [i_0] [i_0]))) - (1U))))) << (((((6331628356134707920ULL) << (((((/* implicit */int) (unsigned short)60098)) - (60048))))) << (((((unsigned int) var_9)) - (706205090U)))))))) : (((/* implicit */short) ((((((((/* implicit */_Bool) -1724871726)) ? (8706724768935457939LL) : (((/* implicit */long long int) arr_4 [i_0] [i_1])))) << (((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) : (arr_4 [i_0] [i_0]))) - (1U))) - (4294967295U))))) << (((((6331628356134707920ULL) << (((((/* implicit */int) (unsigned short)60098)) - (60048))))) << (((((unsigned int) var_9)) - (706205090U))))))));
                    var_15 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 250852300U)) ^ (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) arr_0 [0]))))) | (max((var_4), (((/* implicit */unsigned long long int) (signed char)-80))))))));
                }
            } 
        } 
    } 
}
