/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238951
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_3 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0])))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) 149578383)), (12538744564552309768ULL))), (((/* implicit */unsigned long long int) 279349462))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (12538744564552309768ULL))), (((/* implicit */unsigned long long int) ((unsigned short) arr_2 [i_0])))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_13 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) <= (((arr_8 [i_1] [21U]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))));
        var_14 = ((/* implicit */long long int) ((unsigned int) -149578383));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_9 [i_1]))));
    }
    var_16 = ((/* implicit */unsigned short) var_1);
}
