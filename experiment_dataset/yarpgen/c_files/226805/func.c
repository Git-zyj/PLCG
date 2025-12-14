/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226805
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
    var_18 = ((/* implicit */int) ((((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)14498))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) max((var_15), (((/* implicit */int) var_3))))) : (((var_5) - (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) var_0))));
    var_19 = ((/* implicit */unsigned short) min((var_19), (var_3)));
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        var_20 += ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)14521))) : (arr_1 [i_0]))) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 4]))))) : (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)14498))) : (var_4))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) || (((/* implicit */_Bool) (short)-14502)))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 += ((/* implicit */long long int) (short)-14505);
            var_22 = ((/* implicit */unsigned short) max(((+(var_11))), (((/* implicit */int) ((unsigned short) arr_1 [i_1])))));
        }
        arr_4 [i_0] = ((/* implicit */unsigned int) (short)-14503);
    }
    for (int i_2 = 4; i_2 < 17; i_2 += 3) 
    {
        var_23 -= ((/* implicit */short) ((((/* implicit */int) arr_5 [i_2 + 2])) - (((/* implicit */int) ((arr_1 [i_2]) > (((/* implicit */long long int) min((((/* implicit */int) (short)14498)), (var_15)))))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)14498))) == (var_17))) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_5 [i_2 + 3])) : (((/* implicit */int) arr_5 [i_2])))) : (((/* implicit */int) max((arr_0 [i_2]), ((short)-14512))))))) ? (((/* implicit */int) min((min(((short)-14498), (var_6))), ((short)14502)))) : (((/* implicit */int) ((arr_1 [i_2 - 2]) != (arr_1 [i_2 + 2]))))));
    }
}
