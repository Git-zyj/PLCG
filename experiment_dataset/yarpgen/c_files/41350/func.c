/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41350
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
    var_11 = ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)122)), ((unsigned short)7794)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1 - 2] = ((/* implicit */unsigned int) max((arr_4 [i_1 + 1]), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (_Bool)0)), (arr_0 [i_1]))) > (((/* implicit */long long int) min((21), (((/* implicit */int) arr_1 [i_1] [i_1]))))))))));
                arr_7 [6] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 3])) ? (max((((/* implicit */unsigned long long int) (unsigned short)36046)), (arr_4 [i_0]))) : (((arr_4 [i_0]) << (((var_3) - (5324171452301180778ULL)))))))) ? (((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_1 [i_0] [i_1 - 3])) - (186))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-20153))))), (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)0))))))));
                var_12 = ((/* implicit */short) 42);
            }
        } 
    } 
    var_13 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) max(((+(((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (var_8))))))) < (var_8)));
}
