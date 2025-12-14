/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222709
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))), (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [4])) ? (((/* implicit */unsigned int) (+(max((((/* implicit */int) arr_0 [i_0] [i_0])), (1536)))))) : (min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), ((~(var_0)))))));
        var_20 = min(((+(((/* implicit */int) arr_1 [(_Bool)1] [i_0 + 1])))), (min((min((((/* implicit */int) (short)0)), (var_7))), (1108288124))));
    }
    /* LoopSeq 1 */
    for (int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1]))));
        var_22 = ((/* implicit */int) ((((var_10) ? (arr_5 [7U] [i_1 - 1]) : (arr_5 [i_1 + 1] [i_1 - 1]))) < (((/* implicit */int) (!((_Bool)1))))));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1]);
        arr_7 [i_1] = ((/* implicit */_Bool) arr_3 [i_1 + 1]);
    }
    var_23 += ((/* implicit */unsigned int) var_6);
}
