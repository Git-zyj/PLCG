/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218680
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
    var_16 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767))))), (((/* implicit */long long int) (signed char)114))))) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)-107))))))) : (((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32780))) : (var_0))) % (((unsigned long long int) 18446744073709551615ULL)))));
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */signed char) (-(min((min((((/* implicit */unsigned long long int) (short)7544)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (unsigned char)217))))));
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_15);
                    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) == (((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_1 + 2])))) ? (((/* implicit */int) ((signed char) arr_5 [i_1] [i_1 - 1] [i_1 + 2]))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 1] [i_1 + 2])) ? (var_9) : (((/* implicit */int) arr_5 [5ULL] [i_1 - 1] [i_1 - 1]))))));
                }
            } 
        } 
    } 
}
