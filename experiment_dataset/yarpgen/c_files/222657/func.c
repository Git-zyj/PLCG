/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222657
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
    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_5)) == (((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) (unsigned short)65535)))))))));
    var_20 = (+(((/* implicit */int) (!(var_11)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [8ULL])) ? (-2105380302) : (((/* implicit */int) arr_1 [(unsigned short)2]))))))))));
        arr_2 [(unsigned short)6] [i_0] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [(unsigned char)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [14LL]))) : (8437579068462960261ULL))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) * (18446744073709551615ULL)))));
        var_22 = (-(((/* implicit */int) arr_1 [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0])))))));
    }
    var_23 ^= ((/* implicit */_Bool) (+(18446744073709551615ULL)));
}
