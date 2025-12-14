/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51696
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_0)) ^ (var_3))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))) == (((((/* implicit */_Bool) -1LL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)26830)))))))) : (var_3)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (2452365918718457771ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0])))))))) << (((unsigned int) (short)5))));
                var_16 = ((/* implicit */signed char) min((var_16), (arr_6 [i_1] [i_1 + 1] [i_1 + 1])));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15994378154991093846ULL)) ? (((/* implicit */unsigned int) -3)) : (13U)))) && (((/* implicit */_Bool) min((arr_1 [i_1 - 1] [i_1 + 1]), (((/* implicit */int) (unsigned short)9)))))));
            }
        } 
    } 
    var_18 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_6), ((unsigned char)168)))) ? (((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_9)))) : (((/* implicit */int) ((unsigned short) (_Bool)1)))))), ((-(var_13)))));
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-((+(var_13))))))));
    var_20 = ((/* implicit */unsigned short) ((_Bool) ((short) var_7)));
}
