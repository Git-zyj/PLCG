/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23931
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [11ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) < (var_1))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) ((arr_3 [i_0] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) var_12))))))))) ? (min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) > (arr_3 [i_0] [i_1])))), (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                arr_7 [i_0] = ((/* implicit */_Bool) var_9);
                var_20 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_14))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_1]) == (((/* implicit */long long int) var_9))))))));
                var_21 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) min((var_22), (4318594645599365788LL)));
}
