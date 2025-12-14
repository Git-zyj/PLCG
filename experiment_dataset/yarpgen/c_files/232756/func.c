/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232756
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_12)))))));
        var_15 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (var_8))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0]))))))) != ((~(((/* implicit */int) var_4))))));
        arr_3 [i_0 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])))))));
        arr_4 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-31))))), ((unsigned short)27146)));
    }
    for (unsigned short i_1 = 4; i_1 < 18; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((+(var_3))), (((/* implicit */long long int) ((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))) ? ((-(min((((/* implicit */int) arr_6 [i_1])), (var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_10)))))))));
        arr_8 [i_1 + 1] = ((/* implicit */int) min((max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_1]))))), (max((((/* implicit */unsigned short) var_6)), (var_5))))), (((/* implicit */unsigned short) var_14))));
    }
    for (short i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_2])) & (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_9 [i_2])))) && (((/* implicit */_Bool) (-(var_3)))))))));
        arr_11 [i_2] [i_2] |= arr_9 [i_2];
        arr_12 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_0 [i_2] [i_2]))))), (((((/* implicit */int) arr_10 [i_2])) & (((/* implicit */int) arr_6 [i_2])))))))));
        var_17 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_5 [i_2])), (var_3))) != (((/* implicit */long long int) (~(var_8))))));
    }
    var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) & (((/* implicit */int) var_11)))) & (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((~((~(var_10)))))));
}
