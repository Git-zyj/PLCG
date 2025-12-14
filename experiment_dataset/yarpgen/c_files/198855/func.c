/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198855
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
    var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
    var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)255)) : (var_10)))))) << (((((/* implicit */int) max((var_2), (((/* implicit */unsigned short) (_Bool)1))))) - (11408)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (short)-16908);
        var_15 = ((/* implicit */signed char) (!(arr_0 [i_0 + 3])));
    }
    for (long long int i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_1]), (max(((-2147483647 - 1)), (2147483647)))))) ? (((/* implicit */unsigned int) ((arr_0 [i_1]) ? (((/* implicit */int) min(((short)-1), (((/* implicit */short) var_9))))) : (arr_3 [i_1 + 1])))) : (((max((0U), (((/* implicit */unsigned int) (unsigned short)17378)))) & (((/* implicit */unsigned int) arr_3 [i_1 + 2]))))));
        var_17 = ((max((((/* implicit */int) var_12)), (((var_5) ? ((-2147483647 - 1)) : (var_6))))) / ((+(2147483632))));
        arr_5 [i_1 + 2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3592476387U)) ? (arr_1 [i_1] [(unsigned char)10]) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)48158)))))))));
    }
    var_18 = ((short) -2147483632);
    var_19 = ((((/* implicit */_Bool) ((unsigned char) max((2311175856U), (var_4))))) ? (var_11) : ((-(((/* implicit */int) (_Bool)1)))));
}
