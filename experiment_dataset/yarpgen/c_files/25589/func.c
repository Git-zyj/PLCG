/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25589
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) max((max((arr_0 [i_0 - 2] [i_0 + 1]), (2063271983800829221ULL))), (((/* implicit */unsigned long long int) ((arr_0 [i_0 - 2] [i_0 - 1]) == (((/* implicit */unsigned long long int) 917504)))))));
        arr_2 [i_0] [i_0 - 2] = ((((/* implicit */int) ((max((((/* implicit */unsigned long long int) (signed char)112)), (arr_0 [i_0] [i_0]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 4186483953U))))))) != (-1127073389));
        var_21 = ((/* implicit */_Bool) var_18);
        var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1079798063U))))), (arr_0 [i_0 + 1] [i_0 + 1])));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_23 = ((/* implicit */int) 3930571901685112474ULL);
        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)49604)) % (((/* implicit */int) (signed char)-123))));
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1127073382)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-20382)))), (((/* implicit */int) ((((/* implicit */int) var_15)) != (-1))))))) || (((/* implicit */_Bool) ((unsigned long long int) ((var_4) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120)))))))));
}
