/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211824
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
    var_20 = ((/* implicit */short) var_13);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
            var_21 *= ((/* implicit */signed char) arr_4 [i_0]);
        }
        arr_6 [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) (short)-8931))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (unsigned short)65514))))) : (((((/* implicit */_Bool) 16734619945571657647ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71))) : (arr_3 [i_0] [i_0])))))));
    }
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) 18446744073709551611ULL))));
}
