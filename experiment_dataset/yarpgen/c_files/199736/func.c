/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199736
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_10 = ((/* implicit */signed char) min((((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) 730386980)), (792759682820454511LL)))) || ((!(((/* implicit */_Bool) arr_0 [(short)5]))))))), (var_8)));
        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0])), (792759682820454500LL)))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (min((max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) -5697253379554515454LL)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (2457960399U))))))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] |= ((/* implicit */unsigned long long int) -792759682820454500LL);
        arr_8 [i_1] [i_1] = ((/* implicit */int) -1LL);
        arr_9 [i_1] = ((/* implicit */_Bool) min((-792759682820454524LL), (((/* implicit */long long int) var_6))));
        arr_10 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) 1797550553U)), (792759682820454495LL)));
        arr_11 [i_1] |= ((/* implicit */signed char) min((((/* implicit */int) (signed char)-87)), (369286176)));
    }
    var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
}
