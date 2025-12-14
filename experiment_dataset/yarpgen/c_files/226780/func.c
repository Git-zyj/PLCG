/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226780
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
    var_11 = ((/* implicit */short) var_10);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = var_9;
        var_12 = ((/* implicit */short) arr_1 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = max((((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)214))) : (arr_0 [i_0]))), (((/* implicit */long long int) (-(((((/* implicit */int) var_10)) / (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) && (((/* implicit */_Bool) var_9)))) ? ((~(((/* implicit */int) (unsigned short)34964)))) : (((/* implicit */int) ((arr_0 [9U]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))))))))), (6975099480995549961ULL))))));
        var_14 = ((/* implicit */unsigned short) max((arr_5 [10U]), ((((-(arr_2 [i_1]))) * (((((/* implicit */_Bool) var_4)) ? (arr_5 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32739)))))))));
    }
}
