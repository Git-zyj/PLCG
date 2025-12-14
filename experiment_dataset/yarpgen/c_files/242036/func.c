/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242036
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
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (+(((/* implicit */int) var_11)))))));
    var_13 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) - (var_4)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1] [i_1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42061))))))))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) / (var_4)))));
                var_15 += ((/* implicit */unsigned short) arr_5 [i_0] [i_1]);
                var_16 = ((/* implicit */_Bool) ((arr_5 [(unsigned char)5] [(unsigned char)5]) + (((((arr_4 [i_0]) - (arr_5 [i_0] [i_1]))) >> (((((/* implicit */int) var_3)) + (66)))))));
                var_17 += ((/* implicit */short) min((max((var_10), (((/* implicit */long long int) (short)-13096)))), (((/* implicit */long long int) arr_4 [11ULL]))));
            }
        } 
    } 
    var_18 = ((unsigned long long int) max((var_10), (((/* implicit */long long int) (short)13096))));
}
