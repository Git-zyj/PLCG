/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26703
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
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) min((var_0), (((/* implicit */int) (unsigned char)141))))) ? (var_12) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)1008)))))))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) 1537395360))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) 140737488355327ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (4731960005752105045ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8989607068696576LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)30))))) >= (((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_0))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_15)))), (((/* implicit */int) (short)-32230))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (!(((((/* implicit */int) arr_0 [i_0])) > (1537395360))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) & (((/* implicit */int) var_16))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (2017335526301546223ULL))))) != (((((/* implicit */_Bool) 1562802121352004917ULL)) ? (var_14) : (((/* implicit */unsigned long long int) 302277063U))))))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) min((((/* implicit */signed char) var_2)), ((signed char)11)))) : (((/* implicit */int) min((var_1), (((/* implicit */short) (signed char)-118)))))))));
}
