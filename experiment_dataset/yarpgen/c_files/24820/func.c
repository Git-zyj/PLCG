/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24820
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_12 = 4989920507767787824ULL;
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 5099200002348497196LL))));
        arr_4 [i_0 - 1] = ((/* implicit */short) var_10);
    }
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            {
                var_14 -= ((/* implicit */unsigned short) ((9416358682379346090ULL) % (((/* implicit */unsigned long long int) 1795545240U))));
                arr_9 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_5 [i_2]) / (arr_5 [i_2])))) || (((/* implicit */_Bool) arr_5 [i_1]))));
                arr_10 [i_1] [i_2] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2])) || (((/* implicit */_Bool) arr_6 [i_1])))))));
                arr_11 [i_2] = ((/* implicit */int) ((min((arr_0 [i_1]), (arr_0 [i_1]))) % (arr_0 [i_1])));
                var_15 |= ((/* implicit */unsigned short) arr_2 [i_2] [i_2]);
            }
        } 
    } 
}
