/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52076
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
    var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (var_10)))) ? ((~(2683037982U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)11947)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_3))))))) < (((/* implicit */unsigned int) max((var_1), (((/* implicit */int) (unsigned short)65535)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((((unsigned long long int) (short)32599)) >> (((max((((((/* implicit */_Bool) var_9)) ? (arr_6 [i_1 + 2]) : (((/* implicit */unsigned long long int) arr_2 [i_1] [(unsigned short)10])))), (((/* implicit */unsigned long long int) min(((unsigned short)47159), (((/* implicit */unsigned short) var_11))))))) - (5480406949973729165ULL)))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_0 [i_1 + 2] [i_0])) << (((453458835) - (453458827))))), (((((/* implicit */_Bool) (short)32327)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_6))))));
                    var_14 -= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) << (((453458835) - (453458833)))))) ? (max((var_5), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)18376)) >= (((/* implicit */int) (unsigned char)189))))) : (((((/* implicit */int) ((_Bool) var_7))) << (((/* implicit */int) min(((unsigned char)166), (((/* implicit */unsigned char) (_Bool)1)))))))));
    var_16 = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_1) : (((/* implicit */int) (signed char)-109)));
}
