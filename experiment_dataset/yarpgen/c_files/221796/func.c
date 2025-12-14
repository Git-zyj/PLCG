/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221796
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)58262)) ? (((/* implicit */int) (unsigned short)40272)) : (((/* implicit */int) (unsigned char)22))));
    var_12 = ((/* implicit */long long int) (unsigned short)4168);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */int) (unsigned char)245)) & (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)129)) && (((/* implicit */_Bool) arr_0 [7LL] [i_0]))))))));
        arr_3 [i_0] [i_0] = max((((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) (unsigned short)3332)) : (((/* implicit */int) (unsigned short)25724)))), ((-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [(unsigned short)3] [i_0])))))));
    }
    for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) ((((7111388000376401845LL) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_7)))))) ? (((/* implicit */int) ((0ULL) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)161)) ? (arr_1 [i_1]) : (((/* implicit */int) (signed char)-124)))))))) : (((/* implicit */int) (unsigned char)31))));
        var_14 *= ((/* implicit */unsigned short) ((int) ((((/* implicit */int) var_1)) / (var_6))));
    }
    var_15 = ((/* implicit */short) max((((/* implicit */long long int) (unsigned short)65534)), ((+(-3484371235889191652LL)))));
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_3))));
}
