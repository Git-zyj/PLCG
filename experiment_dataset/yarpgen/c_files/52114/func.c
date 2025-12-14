/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52114
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
    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) ((2706992455U) == (1587974854U)))))));
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1587974853U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51810))) : ((-9223372036854775807LL - 1LL))))))) ? (var_5) : (((/* implicit */long long int) ((int) ((1719745314) | (((/* implicit */int) (_Bool)1))))))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2706992462U)) || (((((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */int) (unsigned short)51803)))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) ((_Bool) arr_1 [i_0])))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_0 [i_0]))) ? (((var_10) + (((/* implicit */long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned short)51806))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))));
        arr_4 [i_0] = ((unsigned short) (((-(var_7))) / (((/* implicit */int) ((((/* implicit */int) (unsigned short)51780)) <= (var_2))))));
    }
    for (short i_1 = 3; i_1 < 10; i_1 += 2) 
    {
        var_15 = ((/* implicit */_Bool) ((unsigned short) ((2706992460U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4403))))));
        var_16 = ((/* implicit */unsigned int) ((unsigned short) ((arr_6 [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
    }
}
