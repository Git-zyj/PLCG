/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210343
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
    var_14 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (2147483628)))) ? (((/* implicit */int) ((unsigned short) var_10))) : ((-(-1616968899)))));
        var_16 -= ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) var_12)))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned char)146)), (15U))))));
    }
    for (long long int i_1 = 4; i_1 < 12; i_1 += 4) 
    {
        var_18 = ((/* implicit */int) max(((-(-8419254366612463666LL))), (-8136491830161239047LL)));
        var_19 += ((/* implicit */unsigned int) ((min((min((arr_3 [2LL]), (((/* implicit */unsigned long long int) 1616968898)))), (((/* implicit */unsigned long long int) min((2147483628), (((/* implicit */int) arr_2 [i_1] [i_1]))))))) == (((arr_3 [i_1 + 1]) ^ (((arr_3 [i_1]) >> (((5426625403120893485LL) - (5426625403120893459LL)))))))));
    }
}
