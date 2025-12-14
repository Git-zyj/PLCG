/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210841
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
    /* LoopSeq 4 */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)97)) ? (-96291653) : (2147483647))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1]))))))))));
        var_17 = (((+(arr_2 [(_Bool)1]))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) -6583263785895595452LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)96))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */long long int) ((arr_0 [i_0] [0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((short)0), (((/* implicit */short) (signed char)(-127 - 1))))))) != (max((arr_2 [i_0]), (((/* implicit */long long int) (signed char)(-127 - 1))))))))) : (max((((/* implicit */long long int) arr_0 [i_0] [i_0 - 3])), (arr_2 [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) arr_4 [19]);
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (unsigned char)159))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)102)))), (arr_3 [i_1])))) ? (var_4) : (((/* implicit */unsigned int) (~((~(var_2))))))));
    }
    for (short i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        arr_9 [10] = ((/* implicit */unsigned short) max((((1297000942U) < (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)83))))))), (((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)21586)))))))));
        var_21 = ((/* implicit */short) max((((((1333657859870424710ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)171))))) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_8 [i_2 + 1])), (arr_4 [i_2])))))), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)96)), (max((((/* implicit */unsigned short) (signed char)121)), ((unsigned short)48567))))))));
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_1 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22780)))))) ? (((long long int) (signed char)-123)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-127)))))));
        var_23 |= ((/* implicit */unsigned int) max((arr_7 [i_3]), (max((arr_12 [i_3]), (((/* implicit */unsigned short) (signed char)107))))));
    }
    var_24 = ((/* implicit */unsigned int) var_14);
}
