/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240436
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) max((((12873289953612603310ULL) | (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) (short)-2032))))))));
        arr_3 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (max((((/* implicit */unsigned long long int) -2145088490)), (8020317067508264469ULL)))));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) - (((/* implicit */int) (signed char)44))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534))) >= (((((/* implicit */unsigned long long int) 3195888927U)) * (8020317067508264469ULL)))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) 4095ULL)) ? (1570127396235735098ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29566))))) * (min((((/* implicit */unsigned long long int) (short)-12511)), (8793198684825827334ULL)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((arr_0 [i_2]) * (((/* implicit */unsigned int) (-(1824957588))))));
        arr_12 [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) & (arr_1 [i_2]))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2]))))))));
    }
    var_13 = ((/* implicit */int) ((unsigned int) (~(((((/* implicit */_Bool) 7608574650173350236ULL)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) var_1)))))));
    var_14 = ((/* implicit */unsigned short) (+(min((((/* implicit */long long int) var_5)), (((((/* implicit */long long int) ((/* implicit */int) (short)-12511))) / (var_0)))))));
}
