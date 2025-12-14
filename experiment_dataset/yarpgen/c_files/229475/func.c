/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229475
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
    var_15 = ((/* implicit */signed char) min((var_7), (((/* implicit */unsigned short) (signed char)63))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)477))))), (((((/* implicit */_Bool) var_7)) ? (-7459065843343820016LL) : (((/* implicit */long long int) 3801634662U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (((/* implicit */signed char) var_2)))))) : (((((/* implicit */_Bool) ((var_6) >> (((((/* implicit */int) (unsigned short)63353)) - (63315)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))) : (min((var_6), (((/* implicit */unsigned long long int) var_10))))))));
    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_12)), (((min((var_6), (((/* implicit */unsigned long long int) var_9)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967291U)) ? (5U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)12061))))))))));
    var_18 = ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 1719875085U)) != (var_6))) ? (((var_2) ? (var_6) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) (unsigned short)477)))))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 5U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12))))) / (((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (0U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((((/* implicit */int) var_1)) | (((/* implicit */int) var_9)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (+((~(((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_2 [i_0]))))))));
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0]) : (((/* implicit */long long int) 5U)))) : (((/* implicit */long long int) 5U)));
        arr_5 [i_0] = ((/* implicit */int) 3827634328U);
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (((/* implicit */int) var_11))))));
        var_20 += ((/* implicit */unsigned int) (((~(arr_6 [i_1]))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    }
}
