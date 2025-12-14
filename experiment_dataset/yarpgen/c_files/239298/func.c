/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239298
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
    var_10 = ((/* implicit */int) min((var_10), (((((/* implicit */int) var_7)) | (((/* implicit */int) var_1))))));
    var_11 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (signed char)114))))))), (((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (var_6)))) % (var_8)))));
    var_12 &= ((/* implicit */unsigned int) ((long long int) ((int) (+(((/* implicit */int) var_5))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (arr_1 [i_0 - 1] [i_0 - 1]))) : (((/* implicit */int) var_0))))))))));
        var_14 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0 + 2] [i_0 + 1]) >= (arr_0 [i_0] [i_0 - 1]))))) % (max((arr_0 [i_0] [i_0 + 1]), (((/* implicit */unsigned long long int) (signed char)-43))))));
        var_15 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 + 2])) / (((/* implicit */int) arr_2 [i_0 + 2])))))));
    }
    for (int i_1 = 1; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (~((+(max((((/* implicit */unsigned int) var_1)), (1511958208U))))))))));
        var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(arr_0 [i_1] [i_1])))) ? (var_6) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((-597991324425798237LL) | (((/* implicit */long long int) ((/* implicit */int) var_7))))))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_5 [i_2])))) || (((/* implicit */_Bool) 2783009088U))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) /* same iter space */
        {
            var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 + 2] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 + 2]))) : (((((/* implicit */_Bool) 1188856559U)) ? (((/* implicit */unsigned long long int) 0LL)) : (9987934507547788662ULL)))));
            var_20 ^= ((/* implicit */signed char) (short)-26058);
            var_21 = ((/* implicit */int) arr_5 [i_3]);
            var_22 = ((/* implicit */unsigned long long int) var_7);
        }
        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned int) max((((/* implicit */int) ((arr_11 [i_2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) var_2)) ? (arr_10 [i_2]) : (var_3)))))), (2783009087U)));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6U)) ? (597991324425798251LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -5915682928779731252LL))))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */short) var_7)), (arr_7 [i_2] [i_4 - 1]))))))) : (arr_13 [i_2] [i_2] [(unsigned short)2]))))));
            var_25 += ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-2100688839114141518LL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) : (((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) (unsigned short)56096)) >> (((1511958208U) - (1511958190U))))))))));
        }
        for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            var_26 = (((_Bool)1) ? (((/* implicit */int) (unsigned short)58255)) : (1835008));
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) arr_12 [i_5] [i_5] [i_5])))))));
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_1))))), (arr_18 [i_2]))) : (((/* implicit */long long int) max((arr_13 [i_2] [i_2] [(unsigned char)0]), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))))))));
        }
        var_29 += ((/* implicit */unsigned long long int) var_6);
    }
    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) var_0))));
}
