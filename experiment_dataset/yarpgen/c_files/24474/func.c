/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24474
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) (~(max((((/* implicit */int) ((((/* implicit */int) (unsigned char)129)) > (arr_1 [i_0])))), (((((/* implicit */_Bool) (short)9244)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) arr_0 [i_0]))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) (signed char)-112)))) ? (((((/* implicit */_Bool) (short)-26769)) ? (arr_2 [2LL]) : (arr_1 [i_0]))) : (((/* implicit */int) arr_0 [i_0]))))) ? (min((arr_1 [i_0]), (((/* implicit */int) (unsigned char)79)))) : (((/* implicit */int) (short)-11950))));
    }
    var_12 = var_6;
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (unsigned char)177))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) (short)-128)) & (((/* implicit */int) max((((((/* implicit */int) (short)4304)) >= (((/* implicit */int) var_3)))), ((!(((/* implicit */_Bool) 925929182053646860ULL)))))))));
    var_15 = ((/* implicit */short) ((unsigned short) max((((/* implicit */long long int) var_1)), (-2607581424895508271LL))));
}
