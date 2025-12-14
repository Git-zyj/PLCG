/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52969
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
    var_12 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)82)) != (((/* implicit */int) (short)13746)))))) : (8889288899009814674LL))), ((~(((long long int) (_Bool)1))))));
    var_13 = ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((var_8) >= (((/* implicit */int) var_4))))), (min((var_0), (((/* implicit */unsigned int) var_10))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) var_3);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) var_4))) % (arr_2 [i_0] [i_0] [i_1]));
            var_15 -= ((/* implicit */_Bool) arr_0 [(short)12]);
        }
    }
    var_16 = ((/* implicit */long long int) var_9);
    var_17 = ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */_Bool) (signed char)48)) && (((/* implicit */_Bool) var_9))))) <= (((/* implicit */long long int) var_0))));
}
