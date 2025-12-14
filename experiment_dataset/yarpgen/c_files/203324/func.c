/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203324
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
    var_12 = ((/* implicit */unsigned long long int) (signed char)-1);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-5), ((signed char)0))))) : (9223372036854775807LL)));
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) arr_1 [i_0] [(signed char)15]))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_15 += ((/* implicit */short) (~(((((/* implicit */int) (signed char)-3)) * (((/* implicit */int) (signed char)18))))));
        arr_5 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */int) max((var_2), (var_6)))) >> (((/* implicit */int) (signed char)0)))), (((/* implicit */int) max((((/* implicit */short) var_5)), (arr_3 [i_1] [i_1]))))));
        var_16 += ((/* implicit */unsigned short) ((short) (signed char)-35));
        var_17 = ((/* implicit */long long int) ((((((/* implicit */int) var_11)) + (((((/* implicit */int) arr_3 [i_1] [i_1])) / (((/* implicit */int) var_5)))))) << (((/* implicit */int) arr_4 [i_1] [i_1]))));
        var_18 = (!(((/* implicit */_Bool) (short)-6750)));
    }
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */long long int) var_9);
        arr_9 [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
        arr_10 [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */int) (short)6749)), (((((var_7) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) var_10)))) * (((((/* implicit */int) (signed char)48)) / (((/* implicit */int) var_11))))))));
        var_19 = ((/* implicit */signed char) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_2])))));
        arr_11 [i_2] = ((/* implicit */int) (~(arr_6 [i_2])));
    }
    var_20 = var_1;
}
