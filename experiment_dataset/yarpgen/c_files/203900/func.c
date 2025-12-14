/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203900
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned short) (-(max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_0))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)14)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13711))))), (((/* implicit */unsigned long long int) (short)13709))))) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (short)-13727))));
        var_12 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) ((_Bool) min((var_9), (((/* implicit */unsigned char) arr_2 [i_0] [i_0])))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (var_0))) ? (((arr_2 [i_0] [i_0]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0]))))));
        var_13 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_1] [i_1])))))));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 9; i_2 += 4) 
        {
            for (unsigned int i_3 = 2; i_3 < 8; i_3 += 2) 
            {
                {
                    arr_11 [i_3] [i_3] [i_3] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) arr_5 [i_3 + 1])) >= (((/* implicit */int) arr_5 [i_3 - 1]))))), ((+(((/* implicit */int) min((((/* implicit */short) (unsigned char)38)), (arr_4 [i_1]))))))));
                    var_15 = ((/* implicit */int) (-((+(arr_7 [i_3 + 2])))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) < (((min((((/* implicit */int) (short)-13711)), (805306368))) - (((/* implicit */int) var_9))))));
}
