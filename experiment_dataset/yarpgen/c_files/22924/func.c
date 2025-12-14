/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22924
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
    var_11 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                var_12 = 11ULL;
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) arr_4 [i_0 + 1] [i_1 + 1] [i_1]))));
                var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? ((-(18446744073709551604ULL))) : (((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [9ULL]))) : (arr_2 [i_0]))))), (12ULL)));
                var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_4 [i_1 + 2] [i_1 - 1] [i_1]) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1] [i_1]))))) ? (((long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (unsigned char)220)) : ((-(((/* implicit */int) (unsigned char)255)))))), (((/* implicit */int) var_4))));
}
