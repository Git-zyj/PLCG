/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200329
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
    for (int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((16299607662417420715ULL), (((/* implicit */unsigned long long int) arr_0 [i_1 + 1] [i_1])))))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16299607662417420715ULL)) ? (1070984200U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)20523)))))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((var_4) * (938903708U))), (((/* implicit */unsigned int) (unsigned char)237))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((14566804284879441597ULL), (((/* implicit */unsigned long long int) (unsigned short)13598))))) ? (((/* implicit */int) arr_4 [i_0 + 4])) : (arr_1 [i_0] [i_0 + 3]))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((short) arr_1 [i_1 + 2] [i_1])));
            }
        } 
    } 
    var_21 *= ((/* implicit */_Bool) var_13);
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? ((~(((/* implicit */int) (unsigned char)137)))) : (((/* implicit */int) var_2))))) : (((unsigned int) var_3))));
    var_23 = ((/* implicit */short) min((((/* implicit */unsigned int) var_15)), (var_14)));
}
