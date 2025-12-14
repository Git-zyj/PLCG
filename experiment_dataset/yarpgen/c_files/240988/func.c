/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240988
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
    var_14 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)88)) * (((/* implicit */int) (signed char)-127)))) % (max(((-(((/* implicit */int) var_8)))), (((((/* implicit */int) var_3)) & (((/* implicit */int) var_13))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_11))));
        var_16 = ((/* implicit */signed char) (-(2400858508571321701ULL)));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((7ULL), (11ULL))), (((((/* implicit */_Bool) var_13)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) var_11))))))) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 18446744073709551608ULL)) ? (18446744073709551605ULL) : (30ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (arr_3 [(signed char)3] [i_1]))))))))));
        var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */unsigned long long int) min((arr_2 [i_1]), (arr_2 [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))) ? (max((var_1), (18446744073709551594ULL))) : (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */long long int) var_5)))))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(6ULL)))) ? (min((((/* implicit */unsigned long long int) ((unsigned int) 11ULL))), (max((18446744073709551608ULL), (((/* implicit */unsigned long long int) var_11)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 18446744073709551607ULL)))))))));
    }
    var_20 *= ((/* implicit */unsigned short) var_13);
}
