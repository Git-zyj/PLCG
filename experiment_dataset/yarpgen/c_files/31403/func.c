/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31403
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
    var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (var_17)))) ? (var_15) : (var_10)))));
    var_20 = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_17)) >= (var_13)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_1] |= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))));
                arr_6 [16ULL] [i_0] [i_0] = ((/* implicit */short) min((((unsigned int) min((((/* implicit */unsigned int) arr_3 [i_0] [i_0])), (arr_2 [(unsigned short)17])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_1])) + (((((/* implicit */int) arr_0 [i_1])) * (((/* implicit */int) var_16)))))))));
                var_21 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) arr_2 [i_0])) : (min((((/* implicit */long long int) arr_0 [11ULL])), (arr_4 [(short)2])))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_10)))) ? (((unsigned long long int) arr_3 [i_1] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) : (var_10)));
            }
        } 
    } 
}
