/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206501
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
    var_19 = max((((((/* implicit */_Bool) max(((unsigned char)30), (((/* implicit */unsigned char) (signed char)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1812250213) >= (((/* implicit */int) (unsigned char)184)))))) : (max((((/* implicit */unsigned int) var_6)), (var_1))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) var_15)))) / (var_17)))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) -47465792);
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))))));
    }
    for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) arr_3 [i_1 + 2])), (max((var_1), (((/* implicit */unsigned int) var_14)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_1 + 2]))))))))));
            var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)4)) ? (-959124438) : (((/* implicit */int) (unsigned short)15849))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_8 [(_Bool)1])) % (var_2)))) : (max((arr_1 [i_1 - 1] [i_1]), (arr_0 [i_1])))))) ? ((~(((/* implicit */int) max((((/* implicit */short) (signed char)-90)), (var_16)))))) : (((((/* implicit */_Bool) 1812250189)) ? (((/* implicit */int) (signed char)0)) : (-42148700)))));
        }
        for (unsigned char i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            arr_11 [i_1 + 1] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_17)), (-3158188312274468605LL)))) == (((((/* implicit */_Bool) -1)) ? (var_13) : (((/* implicit */unsigned long long int) var_1)))))) ? (((unsigned int) (-(1214490035)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0))))));
            arr_12 [i_3] [i_3 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)84)) ? (arr_7 [i_1 + 1] [i_1 - 1]) : (arr_7 [i_1 - 1] [i_1 + 1]))) >> (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)207))))));
        }
        arr_13 [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14448)) & (1884178945)));
        arr_14 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)233)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) var_4)), (3645278748U)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45661))))) << (((arr_16 [i_4]) - (16658280949849366696ULL)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL)))) ? ((-(528482304LL))) : (((/* implicit */long long int) var_11))))));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) (unsigned char)188)) : (arr_17 [i_4])))) ? (((/* implicit */int) ((short) arr_17 [i_4]))) : (((int) (signed char)-1)))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        arr_20 [i_5] [i_5] &= min((((((/* implicit */int) arr_18 [i_5])) >> (((var_11) + (1089728601))))), ((+(-808899466))));
        arr_21 [18ULL] = ((/* implicit */unsigned long long int) 1884178945);
        var_26 *= ((/* implicit */unsigned long long int) 3599802515U);
        var_27 += ((/* implicit */int) arr_19 [19] [i_5]);
        var_28 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((long long int) arr_19 [i_5] [i_5]))) > (((((/* implicit */_Bool) arr_18 [i_5])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)168))))))), ((!(((/* implicit */_Bool) max((((/* implicit */int) arr_18 [i_5])), (877933884))))))));
    }
    var_29 &= ((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */signed char) ((var_1) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
}
