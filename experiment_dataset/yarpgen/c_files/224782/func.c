/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224782
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    var_11 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (max((((/* implicit */unsigned long long int) arr_1 [(signed char)14])), ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8064))) : (arr_0 [i_1] [i_2]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)29090)))))));
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2])))))))) ? (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) -1065182072))))), (max((arr_1 [i_0]), (var_9)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_3 [6LL] [i_2]))))))))));
                    arr_7 [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(-1770418366)))) ? (var_5) : (((/* implicit */int) var_3))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */int) (signed char)21)) | (((/* implicit */int) (signed char)24))));
}
