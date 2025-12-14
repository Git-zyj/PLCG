/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193789
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0 + 3] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned char)255)), (((((/* implicit */_Bool) 4398046511103ULL)) ? (18446739675663040512ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
                arr_5 [i_0 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (((((((/* implicit */_Bool) 2398306155U)) ? (2U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230))))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) * (arr_0 [i_0 + 1] [i_0 + 3])))))));
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_1 - 1])))) : ((-(((((/* implicit */_Bool) (unsigned char)21)) ? (4398046511104ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]))))))));
                var_17 = ((/* implicit */_Bool) ((((1896661152U) - ((+(arr_0 [(short)2] [11LL]))))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 + 2])) ^ (((/* implicit */int) arr_3 [i_0 + 2] [i_1 - 1])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_1);
    var_19 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */long long int) -212570424)) == (var_9))))));
    var_20 = ((/* implicit */_Bool) min((((/* implicit */int) ((short) 4398046511104ULL))), (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)235))) <= (1971778100404494967LL))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
}
