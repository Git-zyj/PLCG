/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54022
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
    var_19 = ((/* implicit */unsigned char) var_14);
    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = 1280467811;
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_0]) * (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 2])) || (((/* implicit */_Bool) (short)-32760)))))))) ? (((var_8) * (((/* implicit */unsigned int) ((((arr_0 [i_0]) + (2147483647))) >> (((((/* implicit */int) var_6)) + (126)))))))) : (((/* implicit */unsigned int) max((((/* implicit */int) max(((short)32757), ((short)-32756)))), (arr_0 [i_0]))))));
        var_22 = ((/* implicit */signed char) min((((/* implicit */int) ((min((((/* implicit */int) arr_1 [i_0 - 1] [i_0])), (var_4))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [1] [i_0])))))))), (arr_0 [i_0])));
        var_23 = 2147483647;
    }
    for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        var_24 ^= ((/* implicit */int) min((min((var_17), (((/* implicit */long long int) max((var_2), (arr_3 [i_1])))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) min((arr_3 [i_1 - 1]), (2099748100)))), (var_8))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) arr_5 [(unsigned char)0]);
    }
}
