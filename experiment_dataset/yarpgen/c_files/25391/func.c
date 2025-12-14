/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25391
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
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)14)) / (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11871))) : (arr_0 [(unsigned char)1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_10)))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((((var_7) > (((/* implicit */long long int) ((/* implicit */int) (short)-11871))))) ? (((/* implicit */long long int) 2181708418U)) : (((var_1) >> (((((/* implicit */int) (signed char)-45)) + (60)))))))) : (((((-4653990897415956989LL) < (((/* implicit */long long int) ((/* implicit */int) (short)-10665))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_0])))) : (((var_8) << (((4294967295U) - (4294967262U)))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)2);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) (short)32752);
        var_15 = (unsigned char)245;
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) ((unsigned char) var_6))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)32752)) : (((/* implicit */int) (unsigned short)65533))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_9)))) : (var_0)));
        var_18 = ((/* implicit */signed char) (_Bool)1);
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_19 = arr_12 [i_2];
        arr_13 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (6401386062471637723LL))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)56))) < (7914573973362265329LL)))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) 3007776507U))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)10)) ? ((~(((/* implicit */int) arr_7 [i_2] [i_3])))) : (((/* implicit */int) (signed char)11))));
            var_22 = ((/* implicit */unsigned char) arr_15 [i_3]);
            var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((-7914573973362265331LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)40))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) (_Bool)1)))))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32752)) ? (((((-247238669024894538LL) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        }
    }
    var_25 = ((/* implicit */unsigned long long int) var_12);
}
