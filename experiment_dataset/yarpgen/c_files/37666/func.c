/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37666
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
    var_10 |= ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((var_9) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_7)) > (var_9)))))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)195)))));
    var_11 = ((/* implicit */unsigned long long int) max(((unsigned char)60), (((/* implicit */unsigned char) var_4))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) | (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_0))))), (min((11343788141394725309ULL), (((/* implicit */unsigned long long int) (unsigned char)39))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_13 &= ((/* implicit */_Bool) (~(var_5)));
            arr_5 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) 2809625306U));
        }
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (arr_4 [i_0 + 2]) : (arr_4 [i_0]))) == (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) (unsigned char)154)) : (arr_4 [i_0 - 1]))))))));
        var_15 *= (!(((/* implicit */_Bool) 18001737401100241550ULL)));
    }
}
