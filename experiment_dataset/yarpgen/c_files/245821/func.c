/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245821
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(var_9)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) - (var_11))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)32)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)223)))))));
        var_22 = ((((((/* implicit */_Bool) 17596764457982588697ULL)) ? (3367676815939990532ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_0 + 1] [i_0]) ? (arr_2 [i_0]) : (var_3)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_19))))))))));
    }
    for (signed char i_1 = 3; i_1 < 11; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
        {
            arr_9 [2] [i_2] = ((/* implicit */short) (((!(((((/* implicit */_Bool) 1711409529)) && (((/* implicit */_Bool) 787712012160356601LL)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_7)) >> (((arr_4 [i_1]) - (3637719081297926005ULL))))), (((((/* implicit */int) (signed char)-34)) & (((/* implicit */int) var_16))))))) : (arr_4 [i_1])));
            var_23 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~((+(((/* implicit */int) var_18))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_4 [i_1 - 3])))) ? (arr_5 [i_1 - 3]) : (arr_7 [i_1 - 1])))));
            arr_10 [i_2] = ((/* implicit */short) (((!(arr_3 [i_1 - 3] [i_1 - 3]))) && ((!(arr_3 [i_1] [i_1 - 3])))));
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned char)214);
            arr_12 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) arr_3 [i_1] [i_1])), (arr_7 [i_1 + 1])))));
        }
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
        {
            var_24 ^= ((/* implicit */signed char) arr_3 [i_1] [i_1]);
            var_25 = ((/* implicit */short) (!((!((!((_Bool)0)))))));
            arr_15 [i_1] = ((/* implicit */_Bool) arr_5 [i_3]);
            var_26 += ((/* implicit */unsigned int) var_14);
        }
        arr_16 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(6019478830948379171ULL)))) ? (((-4908772596266053123LL) / (((/* implicit */long long int) 415839337U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_5)) + (arr_8 [i_1])))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_3 [i_1] [i_1 + 1])))) : (((/* implicit */int) ((arr_4 [i_1]) < (var_10)))))))));
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) min((var_13), (((/* implicit */unsigned long long int) var_5)))))));
        arr_17 [i_1] = ((/* implicit */int) arr_13 [i_1] [i_1]);
        var_28 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4095))) - (arr_8 [i_1])))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((arr_4 [i_1 - 1]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))))));
    }
    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-18531)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4095))) : (12796329563427587187ULL)));
}
