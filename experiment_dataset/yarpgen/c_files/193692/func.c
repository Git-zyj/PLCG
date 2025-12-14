/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193692
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
    var_18 = ((/* implicit */short) ((unsigned long long int) var_6));
    var_19 = (!(min((((16166175977148784157ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((((/* implicit */_Bool) 1761615405U)) && (((/* implicit */_Bool) 1761615403U)))))));
    var_20 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0 - 2] = ((/* implicit */short) ((((((((/* implicit */_Bool) 16166175977148784166ULL)) || (((/* implicit */_Bool) arr_2 [i_0])))) && (((/* implicit */_Bool) arr_1 [i_0])))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (arr_1 [i_0]))))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-29213)) && ((_Bool)1))) ? (min((1761615405U), (((/* implicit */unsigned int) 635820857)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)-81)), ((short)-3064)))))))) || (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (-6628509857368367729LL)))) && (((/* implicit */_Bool) (signed char)-83))))));
        var_22 = ((max((arr_1 [i_0 - 3]), (((/* implicit */unsigned int) arr_2 [i_0 - 3])))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2])))))));
        var_23 = arr_2 [i_0];
    }
}
