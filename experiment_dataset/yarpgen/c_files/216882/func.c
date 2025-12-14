/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216882
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
    for (unsigned int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) ((max((3ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 - 3])))) << (((max((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1])))) - (8153177409938993385ULL)))));
        var_16 = (signed char)-64;
        arr_2 [i_0] [i_0 - 1] = (~(-1770471090));
    }
    for (long long int i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (+(arr_1 [i_1 + 1])))))) < (((unsigned long long int) min((arr_5 [i_1 + 1]), (((/* implicit */unsigned long long int) arr_0 [i_1])))))));
        var_18 = (short)3477;
        var_19 = ((/* implicit */unsigned long long int) (unsigned short)0);
    }
    var_20 = ((/* implicit */short) (~(min((var_12), (min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)80))))))));
    var_21 = ((/* implicit */long long int) ((((1770471090) > (((/* implicit */int) var_2)))) ? (((/* implicit */unsigned long long int) (-(var_11)))) : (min((6336203460915880627ULL), (((/* implicit */unsigned long long int) (short)-32752))))));
    var_22 |= ((/* implicit */_Bool) var_14);
}
