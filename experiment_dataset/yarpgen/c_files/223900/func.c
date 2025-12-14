/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223900
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)30))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225))) : (((1872502295U) << (((/* implicit */int) (unsigned char)30)))))))));
    var_15 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_6)) ? (var_7) : (var_2))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) ((signed char) ((long long int) ((unsigned int) arr_6 [i_2 + 2]))));
                    arr_7 [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2 + 2] [(_Bool)1])) ? (arr_3 [i_0] [i_1] [i_2]) : (((/* implicit */int) arr_1 [i_0] [1U])))), (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_1] [i_2 + 3])))))), (((((unsigned int) arr_5 [i_1])) ^ (((/* implicit */unsigned int) ((((arr_4 [8U] [17] [8U] [i_0]) + (2147483647))) >> (((arr_6 [i_0]) + (7810289412220754681LL))))))))));
                    arr_8 [i_2 + 2] [i_1] [i_1] [i_0] = ((/* implicit */short) ((unsigned int) max((((arr_2 [i_2 + 1] [i_1] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))), (arr_2 [i_2] [i_1] [i_0]))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) ((_Bool) var_1)))))), (max((var_10), (((/* implicit */unsigned int) ((int) var_3)))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_12))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_13)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((signed char) var_8))) : (((int) var_10)))))));
}
