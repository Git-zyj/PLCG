/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51873
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
    for (short i_0 = 3; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [(signed char)10])) ^ (-150859151)))) ? (((((/* implicit */_Bool) var_17)) ? (11586430045180524787ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24135))))) : (2305843009213693951ULL)))) ? (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 3])))) : (((/* implicit */int) arr_1 [(unsigned char)22]))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4140882953U)) ? (var_1) : (((((/* implicit */int) arr_1 [(unsigned short)24])) << (((((int) var_17)) - (16214)))))));
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min((((((/* implicit */_Bool) var_17)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) arr_1 [i_0])))))))), (((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)24435))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-23778))) : (var_19))))))));
    }
    for (short i_1 = 3; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) arr_0 [i_1] [i_1]);
        var_24 *= ((/* implicit */unsigned short) ((min((((/* implicit */long long int) min((arr_5 [i_1]), (((/* implicit */short) (signed char)-29))))), (max((-2LL), (var_7))))) != (((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) (unsigned char)30)))) == (((((/* implicit */int) arr_2 [i_1])) - (var_4)))))))));
        var_25 = ((/* implicit */_Bool) var_6);
        var_26 = ((/* implicit */int) var_18);
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) (unsigned char)237)) - (((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) >= (((/* implicit */int) arr_1 [i_1])))))))), (((var_12) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (2648514245U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20483)))))) : ((+(var_19))))))))));
    }
    for (short i_2 = 3; i_2 < 22; i_2 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */int) max((var_28), (-1356898943)));
        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) 15290784417348934706ULL))));
    }
    var_30 = (short)-20484;
    var_31 = ((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) ((unsigned char) (short)19954))))), (((/* implicit */int) var_8))));
}
