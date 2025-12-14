/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22213
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
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_3) : (var_8)))) ? (var_9) : (((/* implicit */unsigned long long int) var_6))))) ? ((((!(((/* implicit */_Bool) var_5)))) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_11) : (var_18)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */unsigned long long int) var_18))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_13)) : (var_15))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (var_6) : (((/* implicit */unsigned int) var_17))))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_20 = ((arr_0 [i_0]) + (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_2 [i_0] [i_0] [i_1]))));
            arr_4 [i_0] [i_0] [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (-1064061543) : (1064061526)))) ? (arr_1 [i_0]) : (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_1]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]))))))));
        }
        for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            var_21 = ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */unsigned int) arr_0 [i_2 - 1])) : (arr_5 [i_2 + 1] [i_2 + 1]));
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_2])) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_6 [i_2])))) ? (((/* implicit */unsigned long long int) arr_5 [i_2 + 1] [i_2 + 1])) : (arr_3 [i_2 + 1] [i_2 - 1] [i_2]))))));
        }
        arr_7 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])))), ((+(arr_6 [i_0])))));
    }
}
