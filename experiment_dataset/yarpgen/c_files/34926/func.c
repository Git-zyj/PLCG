/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34926
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
    var_12 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)52080)) | (-8)))) ? (min((4024656056U), (((/* implicit */unsigned int) -810605061)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))))))));
    var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_7))))) == (min((7713571840769139430LL), (((/* implicit */long long int) var_11)))))))));
    var_14 = ((/* implicit */long long int) var_5);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (+(((unsigned int) (short)8200)))))));
        var_16 = ((/* implicit */unsigned short) (short)-11675);
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65506)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) var_7))))) ? ((-(7713571840769139430LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) (((-(16013293012438678905ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)21434), ((short)-20108)))))));
        var_19 = min((min((arr_2 [i_1 + 1]), (((/* implicit */long long int) (unsigned char)117)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1]))))));
    }
}
