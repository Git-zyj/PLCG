/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230617
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
    var_19 = ((/* implicit */int) var_10);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) min((((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_0 [i_0])))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(max((((int) arr_1 [i_0])), (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
        var_22 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_2 [i_0] [i_0])) <= (((/* implicit */int) max((arr_0 [(signed char)8]), (arr_2 [i_0] [i_0])))))), (arr_0 [i_0])));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) var_2);
        arr_9 [i_1] [i_1] = var_8;
        arr_10 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_1] [i_1])))) > (var_14)));
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_1])))) : (((((/* implicit */_Bool) var_11)) ? (arr_1 [i_1]) : (var_8)))));
        var_24 &= ((arr_8 [i_1]) << (((arr_8 [i_1]) - (3246404865017401188ULL))));
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (unsigned char)128))));
        arr_14 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((18446744073709551609ULL) < (((/* implicit */unsigned long long int) 20)))))) != (((/* implicit */int) (!(arr_0 [(signed char)6]))))));
        arr_15 [12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)145)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_2])))) * ((-(arr_1 [i_2])))))));
    }
    var_26 = ((/* implicit */int) var_10);
    var_27 = ((/* implicit */_Bool) var_17);
}
