/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47185
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
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL)))) | (((((/* implicit */int) var_5)) * (((/* implicit */int) var_12))))))), (var_7)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_9)))) << (((((min((((/* implicit */unsigned long long int) arr_0 [i_0] [(signed char)2])), (arr_2 [i_0] [i_1] [i_0]))) << (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))) - (1038ULL)))));
                var_14 = ((/* implicit */long long int) var_0);
                arr_5 [i_0] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(-1066185555)))), ((-(arr_2 [i_0] [12ULL] [i_1])))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) -1066185545)) ? (((/* implicit */int) (_Bool)1)) : (-1066185532))) >= (((/* implicit */int) max((var_10), (((/* implicit */unsigned char) var_5))))))))));
    var_16 = ((/* implicit */short) var_5);
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_9)))))))) < ((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_8))))))));
}
