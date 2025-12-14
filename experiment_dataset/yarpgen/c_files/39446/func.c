/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39446
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
    var_11 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (var_2)))) ? (var_8) : (min((((/* implicit */unsigned long long int) var_4)), (var_8)))))) ? (((((_Bool) var_9)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : (max((var_10), (var_1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3)))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_7)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [(signed char)15] [(_Bool)1] = ((/* implicit */signed char) var_1);
        arr_3 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_1 [i_0]))) : (((/* implicit */long long int) (~(arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_12 &= ((/* implicit */unsigned char) max(((+(max((arr_1 [i_0]), (((/* implicit */long long int) arr_4 [i_0] [i_1])))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_5 [15] [i_0] [i_0])))) ? (arr_6 [i_0] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [5LL] [5LL]))))))) / (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (arr_6 [i_0] [i_0] [i_0])))));
        }
        var_14 *= ((/* implicit */short) arr_4 [i_0] [i_0]);
    }
}
