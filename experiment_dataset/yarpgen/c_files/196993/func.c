/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196993
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */short) var_2);
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned char)0);
                var_11 += ((/* implicit */short) ((((/* implicit */int) min((arr_2 [i_1 - 3]), (arr_2 [i_1 - 1])))) / (min((((/* implicit */int) min(((unsigned char)236), (((/* implicit */unsigned char) (signed char)-38))))), ((+(((/* implicit */int) arr_3 [i_0] [i_1]))))))));
                var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) (unsigned short)63038))), (((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) arr_2 [i_1 - 1]))))));
            }
        } 
    } 
    var_13 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) max((var_3), (var_1))))))) ? (((((/* implicit */_Bool) min((14455883627271234675ULL), (((/* implicit */unsigned long long int) (short)24860))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (var_8))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) : (max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (var_8)))))));
    var_14 = var_5;
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) var_5)) : (-8095032))), (((/* implicit */int) min((var_4), (var_4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((var_3) ? (min((((/* implicit */unsigned long long int) (signed char)64)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
}
