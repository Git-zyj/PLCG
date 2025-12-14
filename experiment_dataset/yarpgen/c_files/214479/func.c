/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214479
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
    var_11 -= ((/* implicit */unsigned int) max((max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned char)255))))))), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1 + 1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned short)12593))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)12593))))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */short) var_0)), (arr_2 [i_0] [(unsigned short)8])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) + (var_2)))))));
                arr_5 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) arr_3 [i_1] [i_1 - 1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1 - 1])))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_0)))) : (((/* implicit */int) (_Bool)1))));
                arr_7 [i_1] [i_1 + 1] [i_1] = ((/* implicit */short) (_Bool)1);
                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (max((((/* implicit */long long int) arr_3 [i_1] [i_1])), (((long long int) var_5)))))))));
            }
        } 
    } 
}
