/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43095
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
    var_11 |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((~(var_7)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_12 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)18255)) > (((/* implicit */int) var_4))))) + (((((/* implicit */int) (short)-17963)) & (((/* implicit */int) (short)-18275))))))) ? (((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (arr_6 [i_1])))) << ((((+(arr_3 [i_1]))) - (1059043246667419605ULL))))) : (((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) (short)-17961)))))))));
                var_13 *= ((/* implicit */_Bool) ((signed char) arr_0 [i_0]));
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (arr_3 [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1]))))) * (max((arr_3 [i_1]), (((/* implicit */unsigned long long int) var_10)))))) : ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (var_7)))))));
            }
        } 
    } 
}
