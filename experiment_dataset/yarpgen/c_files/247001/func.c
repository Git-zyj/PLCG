/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247001
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_20 = var_7;
                var_21 = ((/* implicit */unsigned int) ((((unsigned long long int) (short)-2354)) * (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 1; i_2 < 23; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))) >= (6427810142145193703ULL))) ? ((~(((/* implicit */int) (short)-30770)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_6 [i_2] [i_2 + 2])) : (((/* implicit */int) arr_6 [i_2] [i_2 + 1]))))));
        var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)32765)) ^ (((/* implicit */int) (short)30759))))), (2992931538U)));
        var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2 - 1])) ? (((/* implicit */int) arr_8 [i_2 - 1])) : (((/* implicit */int) (short)-1565))))), (((((/* implicit */_Bool) arr_8 [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 1]))) : (1302035754U)))));
        var_24 = ((/* implicit */short) 0ULL);
        arr_10 [i_2] [i_2] = ((/* implicit */short) min((((((/* implicit */int) max((var_3), (var_7)))) > (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_7 [i_2]))))))), ((!(((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) 18446744073709551610ULL))))))));
    }
    var_25 = ((/* implicit */unsigned int) max((var_4), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (max((3305028907U), (((/* implicit */unsigned int) var_8)))))))));
    var_26 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_1)) == (((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned long long int) var_15))))));
}
