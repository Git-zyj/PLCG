/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204639
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
    var_15 = ((/* implicit */_Bool) 3402904769U);
    var_16 -= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) <= (72057594004373504ULL)))) > (((/* implicit */int) max((var_1), (((/* implicit */unsigned char) (signed char)-43))))))))));
    var_17 = ((/* implicit */int) var_11);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned short)65535)), (min((((/* implicit */unsigned long long int) ((short) var_7))), (max((arr_1 [i_0 - 1]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
        var_19 = ((/* implicit */unsigned int) min((((18446744073709551602ULL) - (2975836991142020193ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 3])) * (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 3])))))));
        var_20 ^= ((/* implicit */unsigned int) max((-875624864), (((/* implicit */int) (signed char)-10))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)43))))) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) (unsigned char)43))))) ? (max((((/* implicit */int) ((signed char) (unsigned char)43))), (min((var_13), (arr_4 [i_1] [i_1]))))) : (-1)));
        arr_5 [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (var_7)))), (((((/* implicit */_Bool) 4258078437U)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_2 [i_1] [17ULL])), (1081432641U)))) : (min((-6801460565493629699LL), (((/* implicit */long long int) (short)-3932))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) (((((_Bool)0) ? (((/* implicit */unsigned int) ((2147483647) / (((/* implicit */int) (unsigned char)54))))) : (3068724640U))) / (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (5U)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) : ((-(var_5)))))));
        arr_9 [i_2] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_0 [i_2])) > (((unsigned long long int) var_6))))), (min((-7987928847159790194LL), (((/* implicit */long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_2 [i_2] [i_2])))))))));
    }
}
