/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218524
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0]))), (((max((140737488355326ULL), (((/* implicit */unsigned long long int) var_11)))) / (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_1 [i_0])))))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            arr_5 [i_1] [i_0] = ((/* implicit */unsigned long long int) min((min((-24), (((/* implicit */int) ((short) arr_4 [i_1]))))), (((((/* implicit */int) (!((_Bool)1)))) % (((/* implicit */int) (_Bool)1))))));
            arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446603336221196269ULL)) && (((/* implicit */_Bool) arr_0 [(unsigned char)3]))))), (((unsigned char) arr_0 [i_1])))))) % (min((((/* implicit */long long int) ((unsigned char) arr_4 [i_0]))), (min((((/* implicit */long long int) var_2)), (arr_0 [i_0])))))));
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (140737488355326ULL))), (((/* implicit */unsigned long long int) var_6)))))));
        }
        for (unsigned short i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((var_13) ? ((+(arr_4 [i_2 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
            var_16 = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
        }
    }
    var_17 &= var_7;
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)43944))))), (((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned long long int) var_9)) : (140737488355324ULL)))))) ? (var_2) : (var_0)));
}
