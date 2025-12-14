/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28007
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
    var_16 = ((/* implicit */_Bool) max((((short) max((-531038573), (((/* implicit */int) var_4))))), (var_14)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((max((((/* implicit */long long int) 4294967295U)), (-317630736258968205LL))) << ((((+(((/* implicit */int) arr_0 [i_0] [i_0])))) - (28019)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            arr_5 [i_0] |= ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(signed char)17] [i_0]))) : (arr_4 [i_0] [i_0] [i_0]))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (0))))));
            var_17 = ((/* implicit */int) ((short) min((((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 3])), (1852488506))));
            var_18 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) var_12)) != (min((10984277231752090017ULL), (((/* implicit */unsigned long long int) var_2)))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) != ((+(980008432U)))))));
        }
        var_19 = ((/* implicit */short) max((1048575), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
    }
    var_20 = ((/* implicit */long long int) var_9);
}
