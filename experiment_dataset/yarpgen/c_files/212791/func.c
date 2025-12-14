/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212791
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 + 2] [i_0 - 1]);
                var_13 = ((/* implicit */signed char) min(((-(max((var_6), (((/* implicit */long long int) arr_2 [i_1] [i_1] [i_1])))))), (((/* implicit */long long int) (_Bool)1))));
                var_14 -= ((/* implicit */long long int) ((min(((+(var_10))), (((/* implicit */long long int) (+(((/* implicit */int) var_9))))))) >= (((/* implicit */long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1] [i_0])))), (((((/* implicit */_Bool) (short)12)) || (var_7)))))))));
            }
        } 
    } 
    var_15 = max((max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-14)) : (var_1))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max((((/* implicit */short) var_9)), ((short)-12)))) : (((/* implicit */int) max((var_0), (((/* implicit */short) var_9))))))));
    var_16 = ((/* implicit */unsigned short) ((long long int) min((((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49445))))), (((((/* implicit */long long int) ((/* implicit */int) (short)21608))) / (var_6))))));
}
