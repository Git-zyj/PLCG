/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30258
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [0LL] = ((((/* implicit */_Bool) 18367010095829424035ULL)) ? (12448034193889070147ULL) : (12448034193889070148ULL));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_11 [i_0] [i_1]), (arr_11 [i_0] [(signed char)11])))))))));
                        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) % (((/* implicit */int) (signed char)-6))))) ? (((((/* implicit */_Bool) (short)-7668)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))) : (18446744073709551602ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-30)) ? (arr_0 [i_0]) : (arr_1 [i_2])))))))));
                        var_12 = ((/* implicit */signed char) var_6);
                        arr_13 [(short)6] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((((/* implicit */long long int) arr_1 [i_0])) != (4794979057062106707LL)))), ((unsigned char)78)));
                    }
                } 
            } 
        } 
    }
    var_13 = ((/* implicit */signed char) var_3);
}
