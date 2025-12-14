/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235501
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]);
                var_12 = ((/* implicit */unsigned long long int) var_6);
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (min((((/* implicit */long long int) arr_5 [i_0] [i_0])), (arr_3 [i_0] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_0])))))) ? (arr_3 [i_0] [i_0] [i_0]) : (max((arr_4 [i_0] [i_0]), (((/* implicit */long long int) var_0))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) max((var_5), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) min(((unsigned char)126), (((/* implicit */unsigned char) (signed char)-34))))) : (((/* implicit */int) (unsigned char)208)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) var_1);
}
