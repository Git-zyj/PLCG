/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220538
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
    var_20 = var_9;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) var_1);
                    arr_7 [(unsigned char)3] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (var_5) : (var_12))) >> (((((/* implicit */int) var_16)) - (58893)))))) < (min((((/* implicit */long long int) ((((/* implicit */_Bool) 8086980244671712870LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(short)0]))) : (arr_5 [i_0] [i_1] [i_2])))), (max((((/* implicit */long long int) var_10)), (arr_6 [8U] [i_1])))))));
                    var_22 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -7266105116038235357LL)) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (3ULL)))));
                    var_23 = ((/* implicit */unsigned int) arr_0 [i_0]);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((long long int) var_13)))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) arr_3 [i_3] [(unsigned char)4] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((+(((((/* implicit */unsigned long long int) 3509066254U)) & (1311472821541857225ULL)))))));
                var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3719575573691983864ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (unsigned short)9916)) ? (1311472821541857225ULL) : (((/* implicit */unsigned long long int) var_18)))))) < (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_6 [i_3] [(unsigned char)6])) ? (((/* implicit */int) arr_10 [i_3] [i_4] [i_4])) : (((/* implicit */int) arr_10 [i_3] [(unsigned char)7] [i_3])))))))));
                var_27 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (2914448333U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) | (((1311472821541857231ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))), (((/* implicit */unsigned long long int) (+(min((arr_4 [i_4]), (((/* implicit */long long int) 3234442984U)))))))));
                var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)9917))));
            }
        } 
    } 
}
