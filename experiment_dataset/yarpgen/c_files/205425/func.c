/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205425
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_18);
        var_20 = ((/* implicit */signed char) max((min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (var_11)))), (((((/* implicit */int) var_12)) >> (((var_19) - (8234007179399094816LL))))))), ((-(min((((/* implicit */int) (_Bool)0)), (var_16)))))));
        arr_4 [i_0] = (~(min((var_19), (((/* implicit */long long int) var_3)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((var_4) <= (((/* implicit */long long int) ((/* implicit */int) var_12)))))), (var_1))))) <= (min((((/* implicit */unsigned int) arr_5 [i_0 + 2])), (var_11)))));
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_6 [i_0 + 2] [i_1])), (arr_2 [i_0 + 2]))))));
            arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)32)) != (((/* implicit */int) var_10))))) <= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_0 + 1]))))));
            arr_10 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))) ? (((/* implicit */int) arr_5 [i_0])) : (var_16)));
        }
    }
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), ((~(((/* implicit */int) (unsigned char)98)))))))));
}
