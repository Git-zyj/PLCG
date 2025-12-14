/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235386
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
    var_12 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) + (var_9))), (((((((/* implicit */_Bool) var_4)) ? (var_5) : (var_2))) | (((/* implicit */unsigned long long int) var_0))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */int) arr_2 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_3);
        arr_4 [(short)13] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (arr_2 [i_0]))) + (min((((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)27580))))), (-2467598056377372436LL)))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) arr_8 [i_1]))));
        var_15 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [6U] [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_0 [2U] [i_1]))))), (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (var_10))));
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)1)), (max((((/* implicit */unsigned short) (signed char)-2)), ((unsigned short)2047)))))) ? (88465959157285946ULL) : (((/* implicit */unsigned long long int) var_0))));
    }
}
