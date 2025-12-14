/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47637
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_6))));
    var_14 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned int) ((int) 949847134)))), (15115048238657084220ULL)));
    var_15 += (+(((((/* implicit */_Bool) (+(15115048238657084220ULL)))) ? (15115048238657084220ULL) : (((/* implicit */unsigned long long int) var_5)))));
    var_16 &= ((/* implicit */long long int) ((0U) != (((/* implicit */unsigned int) 1344171349))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) min((210732400), (((/* implicit */int) ((((((/* implicit */_Bool) 1U)) ? (1350630432) : (-356065106))) > (2147483621))))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) min((max((((/* implicit */unsigned int) 80235957)), (var_8))), (((/* implicit */unsigned int) max((var_5), (arr_0 [i_0])))))))));
        arr_4 [i_0 - 2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 15115048238657084221ULL)) && (((/* implicit */_Bool) -1LL))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_19 = ((/* implicit */int) (~(((((var_3) > (((/* implicit */unsigned int) arr_2 [8] [8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_0)))))) : (var_11)))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (int i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 1072577620U)) ? (((/* implicit */unsigned long long int) -955548368)) : (0ULL)));
                        arr_18 [i_1] [1] [i_3] [2] = (+(max((((((/* implicit */_Bool) 2147483611)) ? (632391502U) : (415813591U))), (((/* implicit */unsigned int) -1818849263)))));
                        arr_19 [7LL] [i_2] [6] [i_4] = ((/* implicit */int) ((long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -365945339))))))));
                        var_21 = 481035845;
                        arr_20 [i_1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_6)) ? (arr_15 [i_3 + 1] [i_3] [i_3 - 1] [2U] [10] [10]) : (arr_15 [i_3 + 1] [i_3] [i_3 + 2] [i_3 + 2] [6] [i_1]))));
                    }
                } 
            } 
        } 
    }
}
