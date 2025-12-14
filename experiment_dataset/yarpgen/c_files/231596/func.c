/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231596
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((4611685468671574016ULL), (13835058605037977600ULL)))) ? (((/* implicit */unsigned long long int) arr_5 [i_1 - 3] [i_0] [i_1 - 3])) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) 2999991015U))))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (1294976280U)))))) : (min((arr_6 [i_0] [i_0] [i_2]), ((~(-5419506723225127679LL)))))));
                    var_18 = arr_4 [i_0] [i_0] [i_2];
                }
                /* LoopSeq 1 */
                for (unsigned int i_3 = 4; i_3 < 24; i_3 += 3) 
                {
                    var_19 -= ((/* implicit */unsigned long long int) ((short) min((arr_6 [i_3] [(signed char)20] [i_3 - 1]), (((/* implicit */long long int) arr_8 [(short)18] [i_1 + 1] [11U] [i_1 - 1])))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_6 [i_1 - 2] [(signed char)2] [i_3]), (arr_6 [i_1 - 1] [(short)24] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : ((+(((((/* implicit */_Bool) (short)30310)) ? (arr_6 [i_0] [18ULL] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_0]))))))))))));
                }
                var_21 = ((/* implicit */unsigned int) arr_11 [i_0] [i_0] [(signed char)6]);
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */long long int) var_17)), (min((((/* implicit */long long int) var_11)), (var_0))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_3), (329144193997681204ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)29363)))))))))));
}
