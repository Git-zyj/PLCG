/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24420
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [(signed char)4] [i_1])), (9024079316475655051LL)))) || (((/* implicit */_Bool) -3215854383267756776LL))))) : (((/* implicit */int) var_6))));
                var_18 = (((!(((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 2])))) ? (((((/* implicit */_Bool) min((-977401965), (((/* implicit */int) (unsigned char)247))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))) : (arr_2 [(unsigned short)20] [21]))) : (((((/* implicit */int) arr_0 [i_1 - 1] [(unsigned char)17])) * (((/* implicit */int) (!(var_7)))))));
            }
        } 
    } 
    var_19 = (+((+(var_11))));
    var_20 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : ((-(var_11))))))));
    var_21 = var_13;
}
