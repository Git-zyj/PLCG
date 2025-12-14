/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204670
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
    var_20 = ((/* implicit */_Bool) (((_Bool)1) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_10)) >> (((/* implicit */int) (_Bool)1)))) > ((+(((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */int) ((min((max((var_1), (((/* implicit */unsigned long long int) (_Bool)1)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (0ULL) : (17638712352928737955ULL))))) * (max((((14935705000184460351ULL) >> (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) 7183009754475213200ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)))))));
        arr_2 [6U] [10U] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -909056498)) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) * (min((((/* implicit */unsigned long long int) 6821031237650516414LL)), (var_1)))))));
        var_22 &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min(((+(var_16))), (((/* implicit */long long int) ((-2098252306) <= (((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) arr_1 [9U]))))) ? (((/* implicit */unsigned long long int) ((909056477) | (((/* implicit */int) (signed char)125))))) : (2078512113257837378ULL)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) (+(17786481176259160941ULL)));
        var_24 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (10847504980150035528ULL));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) > (((/* implicit */int) (_Bool)1))));
        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) arr_6 [i_2] [(_Bool)1])))))));
        arr_8 [i_2] = (_Bool)1;
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [5U])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [(_Bool)0] [i_2 + 1]))));
    }
    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_17)))))))));
}
