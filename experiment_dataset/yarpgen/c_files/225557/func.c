/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225557
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
    for (short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((12276286635089965017ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116)))))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_10))))) * (((unsigned long long int) (-9223372036854775807LL - 1LL)))))));
        var_15 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (short)21831))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) ((min((-1LL), (-1LL))) + (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)20364)), (var_6))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(short)3]))) : (18446744073709551607ULL)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_1])))) : (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_17 ^= min((((((/* implicit */_Bool) 137438953471ULL)) ? (((/* implicit */int) min((arr_4 [i_2]), (arr_4 [i_2])))) : (((((/* implicit */int) arr_4 [i_2])) % (((/* implicit */int) arr_8 [i_2] [i_2])))))), (((/* implicit */int) ((signed char) 14671371141910608452ULL))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-57)) && (((/* implicit */_Bool) (short)0))));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [(unsigned char)8])) ? (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_3 [i_2] [i_2])))) : ((~(-497179205)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7838))) : (arr_7 [i_2] [i_2])))));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) % (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-111))))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) var_7))))))));
}
