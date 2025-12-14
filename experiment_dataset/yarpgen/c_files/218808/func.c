/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218808
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1180606627)) ? (1699545965) : (var_9)));
    var_14 = ((/* implicit */long long int) var_3);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) ((long long int) arr_0 [i_0 - 1]));
        var_16 = ((/* implicit */short) ((signed char) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))));
    }
    for (short i_1 = 3; i_1 < 22; i_1 += 2) 
    {
        var_17 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_1])))) - (((unsigned int) arr_4 [i_1 - 3]))))) < ((+(arr_5 [i_1] [i_1])))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(2634845316849727527LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)32477))) > (2634845316849727537LL))))));
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_18 = ((/* implicit */int) arr_9 [i_2]);
        arr_10 [i_2] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)51))) - (2583261036543342781LL)));
    }
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (min((var_12), (((/* implicit */long long int) max((((/* implicit */int) var_0)), (var_1)))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))))));
    var_20 = ((((/* implicit */_Bool) (((-(var_11))) + ((~(var_1)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((var_12) <= (((/* implicit */long long int) ((/* implicit */int) var_0))))))))) : (max((((/* implicit */long long int) var_8)), (var_7))));
}
