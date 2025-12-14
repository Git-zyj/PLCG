/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203912
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31079)) - (((/* implicit */int) (unsigned short)31079))));
    var_19 = ((/* implicit */unsigned short) ((min((min((((/* implicit */unsigned long long int) var_9)), (var_3))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned char) var_9))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((arr_3 [i_0] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((arr_2 [i_0] [i_0]), (arr_3 [i_0 + 2] [i_1])))))))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_0 [i_0] [(unsigned char)12]))));
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned char) max((arr_0 [i_0] [10]), (arr_0 [i_0] [(unsigned char)2]))))), (arr_2 [i_0] [i_0]))))));
                var_23 |= ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_0 [(unsigned char)14] [(unsigned char)14]))) | (((/* implicit */int) ((unsigned char) arr_0 [i_0] [(_Bool)1])))))) <= (min((((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0 - 2] [i_1]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [0ULL]))) - (arr_2 [i_0] [i_1]))))));
            }
        } 
    } 
}
