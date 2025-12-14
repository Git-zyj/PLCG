/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41401
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
    var_14 = var_2;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [(_Bool)1] = ((min((var_1), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [11U])) ^ (((/* implicit */int) arr_0 [i_0 - 3]))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
        var_15 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 4196274470U)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 2])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2131375441U)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 3]))))) ? (((/* implicit */int) arr_1 [i_0 - 3])) : (((/* implicit */int) min((arr_1 [i_0]), (arr_0 [(_Bool)0]))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_0 [i_0]))))) | (((arr_1 [i_0 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [4U]))) : (var_8)))))) ? (1344590011U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [(_Bool)1]))))) > (((arr_0 [6U]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_1)))))))));
    }
}
