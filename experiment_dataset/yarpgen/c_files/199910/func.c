/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199910
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
    var_10 = ((/* implicit */unsigned int) var_5);
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 457506355)) && (((/* implicit */_Bool) (short)-26694))))), (var_5)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */int) 281470681743360ULL);
        var_13 = ((/* implicit */unsigned long long int) 457506360);
        arr_4 [(_Bool)1] = ((/* implicit */int) ((_Bool) ((arr_0 [i_0]) / (arr_0 [i_0]))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (201326592U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [11]))))))))))))));
        arr_7 [15LL] [i_1] = max((max((arr_3 [i_1]), (arr_3 [i_1]))), (((short) -457506355)));
        arr_8 [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) arr_3 [i_1]))))), ((signed char)-6)))) && (((var_1) && ((!(((/* implicit */_Bool) arr_0 [(signed char)5]))))))));
    }
    var_15 = ((/* implicit */unsigned long long int) var_7);
}
