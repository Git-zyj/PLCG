/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20637
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
    var_13 = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (629447336U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)234))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) min(((unsigned char)245), ((unsigned char)19)))), (((var_4) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (short)-5))))))) : (var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [(unsigned char)8] = ((/* implicit */unsigned long long int) (short)15);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(arr_1 [4LL])))), (var_6)))) * (var_8)));
                arr_7 [i_1] &= ((/* implicit */_Bool) max((((4116991813U) % (arr_4 [i_1 - 3] [i_1 + 2] [i_1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((-8517854389264210782LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-4)))))))))));
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) ((_Bool) arr_2 [i_0] [i_1])))))))));
            }
        } 
    } 
}
