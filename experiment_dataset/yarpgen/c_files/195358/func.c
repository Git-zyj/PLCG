/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195358
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) (~((~(33554432U)))));
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */signed char) (~(min(((((_Bool)1) ? (33554432U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157))))), (((/* implicit */unsigned int) (_Bool)1))))));
        var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) 33554411U)) && (((/* implicit */_Bool) 547653485U)))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (~((+(4261412884U)))));
    }
    for (unsigned char i_1 = 1; i_1 < 8; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)0)), (16U))))));
        var_18 ^= ((/* implicit */short) var_10);
    }
    for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_19 = ((max((((unsigned long long int) arr_6 [i_2])), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-55))))))) <= (((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) (signed char)-12)))))));
        var_20 = ((/* implicit */unsigned short) var_7);
        var_21 = ((/* implicit */short) min((arr_8 [i_2] [i_2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_2])))))));
    }
    var_22 = ((/* implicit */unsigned short) 1247901670U);
    var_23 = ((unsigned char) var_0);
    var_24 = ((/* implicit */_Bool) var_12);
}
