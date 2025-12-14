/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34662
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) <= (var_9)));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0 - 1])) >> (((((/* implicit */int) (signed char)34)) - (30)))));
        arr_4 [(unsigned char)12] |= ((/* implicit */unsigned short) (-(var_11)));
    }
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((var_6) ? (-1251389907499787082LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((var_9) > (((/* implicit */int) (signed char)-9)))))))), ((-(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10772857278798899527ULL))))))))));
    var_13 = ((/* implicit */int) ((long long int) ((int) ((unsigned short) var_7))));
    var_14 = ((/* implicit */short) 4294967278U);
    var_15 -= ((/* implicit */short) max((var_1), (((/* implicit */unsigned long long int) var_6))));
}
