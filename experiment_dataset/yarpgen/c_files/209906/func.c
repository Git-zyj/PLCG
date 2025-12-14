/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209906
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
    var_16 = ((/* implicit */short) -1375357035);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (((unsigned long long int) 65535)))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 52805690)) : (arr_2 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)124)) || (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) : (max((4494654743772376085LL), (arr_2 [i_0] [i_0]))))))));
                var_17 ^= ((/* implicit */unsigned char) var_7);
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_10))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) (_Bool)1)))))) : (261680364U)));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (var_3)))) / (min((10538864044414109981ULL), (((/* implicit */unsigned long long int) (unsigned char)15))))))) || (((/* implicit */_Bool) max((13395551774546773872ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))))))));
            }
        } 
    } 
}
