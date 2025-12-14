/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222800
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) arr_0 [14] [i_0]);
        var_19 = ((/* implicit */short) ((int) max((min((((/* implicit */unsigned int) (_Bool)1)), (1731114138U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-119))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) var_0)) % (((/* implicit */int) max((arr_0 [i_1 - 2] [i_1 - 1]), (arr_0 [i_1 + 1] [i_1 + 1])))))))));
        arr_4 [i_1] = ((/* implicit */unsigned long long int) max((max((var_5), (((/* implicit */unsigned int) ((short) 23ULL))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */int) var_1))))))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 2]))))) * (((((/* implicit */int) arr_0 [i_1 - 2] [i_1 + 1])) ^ (((/* implicit */int) arr_0 [i_1 - 2] [i_1 + 1]))))));
        arr_5 [i_1 - 1] = ((/* implicit */long long int) ((short) max((var_17), (((/* implicit */int) var_15)))));
    }
    var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((short)(-32767 - 1)), ((short)-32762)))) ? (((((((/* implicit */long long int) var_10)) - (var_12))) + (((/* implicit */long long int) ((((/* implicit */int) (short)-32235)) + (((/* implicit */int) var_1))))))) : (((/* implicit */long long int) max((((/* implicit */int) max(((unsigned short)13505), (((/* implicit */unsigned short) var_2))))), (((((/* implicit */int) (signed char)-11)) + (((/* implicit */int) (short)-30382)))))))));
}
