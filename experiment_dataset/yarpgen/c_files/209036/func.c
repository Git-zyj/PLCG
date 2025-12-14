/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209036
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_19 -= ((/* implicit */signed char) max((max((arr_6 [i_0] [i_2 - 2] [i_2]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_0])) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_1] [i_1])))))), (((/* implicit */long long int) ((arr_1 [i_2 - 1] [i_1]) - (arr_1 [i_2 - 1] [i_2 - 1]))))));
                        var_20 = ((/* implicit */short) max((((unsigned int) arr_8 [i_0] [i_0] [i_2] [i_0])), (((/* implicit */unsigned int) min((((/* implicit */int) arr_9 [i_2 - 1])), (arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1]))))));
                        var_21 *= ((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_9 [i_0])), (arr_6 [i_0] [i_1] [6LL]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_3] [i_0] [i_0])), (arr_7 [i_0] [i_2] [i_3])))))))));
                        var_22 = ((/* implicit */short) max((((unsigned long long int) arr_7 [i_2 + 1] [i_2 - 2] [i_2 - 1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_0])), (arr_7 [i_1] [i_2 - 1] [i_3])))) ? (((/* implicit */int) ((arr_9 [i_3]) && (((/* implicit */_Bool) arr_4 [i_2] [(short)3]))))) : (((int) arr_6 [i_0] [i_1] [i_3])))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) ((_Bool) 1975382891U));
    }
    var_24 = (+(((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_0)))));
}
