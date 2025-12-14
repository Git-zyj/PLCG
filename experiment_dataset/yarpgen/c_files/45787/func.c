/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45787
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        var_18 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_19 = ((/* implicit */int) max((max((arr_0 [i_0]), (arr_0 [i_0]))), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
        var_20 = arr_0 [i_0];
        var_21 ^= ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0]))) < (min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        arr_6 [9LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_0 [i_1]), (arr_0 [i_1])))) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) min((arr_2 [i_1]), (arr_2 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)56010)) ? (-7833601623383451216LL) : (8114891915606636059LL)));
        arr_8 [i_1] = ((/* implicit */unsigned int) arr_2 [i_1]);
    }
    var_22 = ((/* implicit */long long int) min((var_22), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))) & (7833601623383451224LL))))))), (((((/* implicit */long long int) var_16)) / (min((var_3), (var_12)))))))));
    var_23 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned int) var_14))));
}
