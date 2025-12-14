/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193164
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
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (!((!(var_4)))));
        var_10 = ((/* implicit */short) (+(((((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (max((var_7), (((/* implicit */long long int) var_4))))))));
        var_11 = ((/* implicit */unsigned char) ((int) max((((long long int) arr_1 [i_0 + 1])), (((/* implicit */long long int) max((-596299078), (((/* implicit */int) arr_0 [(_Bool)1]))))))));
    }
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) -596299078))))), ((-(((/* implicit */int) var_2))))))) ? (((/* implicit */int) var_0)) : (-596299070)));
    var_13 = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) var_7))), (var_9)));
}
