/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245425
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)210)) - (((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])) ? (arr_3 [i_1] [i_0] [i_0]) : (arr_3 [i_0] [i_1] [5]))))))));
                var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_3 [i_0] [i_1] [i_1]) : (var_12)))) ? (((200306620) / (arr_3 [i_0] [i_1] [i_0]))) : (min((((/* implicit */int) arr_2 [i_0])), (arr_3 [i_0] [i_0] [i_0])))))), (((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) var_12)) - (var_1)))))));
                arr_6 [10ULL] = ((/* implicit */long long int) var_0);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (-8482084067121578408LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (var_4)))) ? (min((-1), (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_12))))))) : ((~(var_9))))))));
    var_16 = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (8482084067121578408LL) : (((/* implicit */long long int) var_12))))), ((((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
    var_17 = ((/* implicit */_Bool) ((var_12) / (((((/* implicit */_Bool) 200306620)) ? (var_4) : (((1) * (((/* implicit */int) var_8))))))));
}
