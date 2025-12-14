/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19492
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
    var_16 = ((/* implicit */short) var_0);
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_12))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_18 *= ((/* implicit */unsigned char) ((31457280) * (((/* implicit */int) ((max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */int) var_7)))) > ((-(((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 1])))))))));
                    var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2] [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 + 1])) ? (12301849947834509783ULL) : (6144894125875041832ULL)))) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_2])) : (max((((/* implicit */int) arr_0 [i_1] [i_1])), (arr_3 [i_0] [i_0] [i_2 + 1])))))) : (var_15)));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) (signed char)54)) : (arr_3 [i_0] [i_1] [i_2])))) ? (1839379987473243707LL) : (((/* implicit */long long int) var_8))))) : (18446744073709551615ULL)));
                    var_21 = var_2;
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) 18446744073709551608ULL);
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) & (var_15)))) ? (((/* implicit */int) ((18446744073709551593ULL) > (18446744073709551615ULL)))) : (((/* implicit */int) var_5))))) : (var_15)));
}
