/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212147
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
    var_10 |= ((/* implicit */unsigned short) (((+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) + (var_5))))) + (((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) + (var_7))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) (unsigned short)40953)))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((arr_0 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */unsigned char) arr_4 [i_1]))))))))));
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (5006671783730700596ULL) : (((/* implicit */unsigned long long int) var_5)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (arr_5 [i_0]))))))))));
            }
        } 
    } 
}
