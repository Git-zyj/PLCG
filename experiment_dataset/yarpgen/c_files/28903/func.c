/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28903
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [5LL] [i_0]);
                var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
                var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27761)) * (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((short) arr_4 [i_1] [i_0]))) : (((/* implicit */int) ((signed char) arr_0 [i_1]))))))));
                var_17 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)37777)) / (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)46)) & (-646965535)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20835)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37777)))))))))));
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) (short)8798)) ? (((/* implicit */long long int) max((((var_3) ? (((/* implicit */int) (unsigned short)27769)) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))))))) : (min((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)6571)), (2143289344)))), (max((var_12), (((/* implicit */long long int) var_3)))))));
}
