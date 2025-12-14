/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207128
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) 3611173326U)) ? (3611173318U) : (491835738U))), (((/* implicit */unsigned int) (short)-19225)))), (max(((~(683793978U))), (arr_0 [i_2 + 1])))));
                    var_17 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_0]))))))), (((((((/* implicit */long long int) 491835738U)) > (6470859386975337416LL))) ? (3347717143U) : (((((/* implicit */_Bool) -588168820)) ? (((/* implicit */unsigned int) 1076694031)) : (3611173326U)))))));
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */unsigned int) var_8);
    var_19 = ((/* implicit */unsigned long long int) var_12);
    var_20 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (-6470859386975337417LL) : (((/* implicit */long long int) 3611173318U))))))) ? (((/* implicit */int) (!(((var_12) >= (((/* implicit */long long int) 683793974U))))))) : (((/* implicit */int) ((max((var_14), (((/* implicit */unsigned long long int) var_7)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))));
}
