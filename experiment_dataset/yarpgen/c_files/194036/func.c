/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194036
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) (~(arr_2 [i_0]))))), (max((((/* implicit */unsigned int) ((unsigned char) 18446744073709551615ULL))), (min((arr_1 [14U] [i_0]), (((/* implicit */unsigned int) -12185928))))))));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) 12185927)) < (arr_0 [i_0])));
        arr_5 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 12185956))));
        arr_6 [i_0] = ((/* implicit */unsigned char) (unsigned short)30786);
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_11 [i_1] = ((/* implicit */unsigned char) max((max((arr_0 [i_1]), (((/* implicit */unsigned int) -12185928)))), (((/* implicit */unsigned int) max((12185928), (((/* implicit */int) (_Bool)1)))))));
        arr_12 [i_1] [i_1] = (short)-13064;
    }
    var_11 &= ((/* implicit */unsigned char) ((min((max((14176134923377218972ULL), (((/* implicit */unsigned long long int) -12185928)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))))) <= (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (var_4))))));
}
