/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222568
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_10 = ((/* implicit */int) ((max((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [(short)16])))))) > (min((arr_0 [i_1] [i_0]), (2077591158)))));
            arr_4 [i_0] [i_0] [i_1] = ((((/* implicit */int) ((signed char) var_1))) & (((/* implicit */int) ((arr_0 [i_0] [i_0]) <= (((/* implicit */int) arr_2 [i_1]))))));
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            arr_7 [(signed char)5] [(signed char)5] [(signed char)5] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [(short)13])) : (2077591140)))) ? (arr_6 [i_0] [i_2]) : (2077591173))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_6 [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2262282607U))))));
            var_11 = ((/* implicit */unsigned int) var_8);
        }
        arr_8 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) max((-186563967), (2077591138)))) : (var_4))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_6 [i_0] [i_0]) >= (-2077591138))) || (((/* implicit */_Bool) var_2))))))));
    }
    var_12 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) / (((/* implicit */int) ((signed char) var_1)))))) * (((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) + (max((var_1), (((/* implicit */unsigned int) var_6))))))));
    var_13 = ((/* implicit */short) var_1);
    var_14 = ((/* implicit */signed char) var_7);
}
