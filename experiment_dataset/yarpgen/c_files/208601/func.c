/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208601
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_1 - 1]))))), (min((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1])))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) min((min((max((arr_2 [i_1]), (((/* implicit */unsigned long long int) arr_1 [2LL] [i_1 - 1])))), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_3 [i_0])), (arr_6 [i_0])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_4 [i_1 - 1]) : (((/* implicit */int) arr_5 [i_0]))))) ? (min((17774744788710267159ULL), (((/* implicit */unsigned long long int) 4567096656810701169LL)))) : (min((((/* implicit */unsigned long long int) arr_6 [i_0])), (arr_0 [i_0])))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((max((((/* implicit */long long int) var_1)), (var_0))), (max((((/* implicit */long long int) var_2)), (var_0))))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
}
