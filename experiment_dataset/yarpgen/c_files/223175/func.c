/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223175
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
    var_11 = ((/* implicit */unsigned long long int) var_10);
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)25380)))), ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (signed char)50)) : ((~(((/* implicit */int) var_9))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) (signed char)37);
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((+(var_5))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44582)))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) (~(((/* implicit */int) var_6))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) var_9))))), (min((arr_0 [i_1] [i_1]), (var_0))))));
    }
    for (unsigned char i_2 = 4; i_2 < 15; i_2 += 2) 
    {
        arr_12 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) -1560135892)), (var_0))))));
        var_15 = ((/* implicit */short) 2671014713981100785LL);
        var_16 = ((/* implicit */long long int) ((unsigned int) var_7));
    }
    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 3) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-((+(var_3)))))), ((+(var_1))))))));
        var_18 = min((((((/* implicit */_Bool) (unsigned short)65531)) ? (var_0) : (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_14 [i_3 + 1])), (arr_13 [i_3 + 1])))));
        var_19 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
    }
}
