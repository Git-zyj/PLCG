/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201800
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
    var_14 = ((((max((var_2), (((/* implicit */long long int) var_12)))) < (((/* implicit */long long int) ((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)7680)) <= (((/* implicit */int) var_12)))) ? (((((/* implicit */_Bool) -7415480072708234847LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-7680)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-57)), (var_1))))))) : ((~(var_2))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) var_5);
        var_15 = ((unsigned long long int) 287948901175001088LL);
        /* LoopNest 3 */
        for (long long int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (short)12288))));
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-7681))) ^ (((unsigned int) (short)-7680))))))))));
                        var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-7415480072708234847LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-67)))))) ? ((+(-6030126648803568167LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))), ((+(arr_7 [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3 + 1])))));
                        var_19 = ((/* implicit */unsigned long long int) ((long long int) (short)7680));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */long long int) (short)-29947);
    }
    var_21 = ((/* implicit */_Bool) ((long long int) 233584266));
    var_22 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)114))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)196))))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)21541)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107)))))) >= (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_10)))))))));
}
