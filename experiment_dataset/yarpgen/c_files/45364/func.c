/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45364
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
    var_12 = min((min((max((((/* implicit */unsigned long long int) var_11)), (var_10))), (((/* implicit */unsigned long long int) (short)20256)))), (((/* implicit */unsigned long long int) var_2)));
    var_13 = ((/* implicit */unsigned long long int) (-(((long long int) ((unsigned short) (unsigned short)47092)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) max((arr_3 [i_0]), (((/* implicit */short) arr_2 [i_1] [i_1]))))), (((long long int) (signed char)-22)))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)2047)) <= (((/* implicit */int) (signed char)0))))) / (((/* implicit */int) arr_2 [i_0] [i_1])))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) ((unsigned char) 1148793170U));
                arr_6 [(signed char)5] [i_0] [i_0] = ((/* implicit */short) min((((unsigned int) (short)15)), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_1])) != (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
