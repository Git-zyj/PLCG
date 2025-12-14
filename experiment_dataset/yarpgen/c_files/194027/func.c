/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194027
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)0))))))));
                    arr_7 [i_2] = ((/* implicit */unsigned long long int) (unsigned short)0);
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(-1LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2])))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) 2732053128U)) ? (1562914167U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))), (((long long int) var_11)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 652311746335599328LL)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_7)) ? (((-904222029) + (((/* implicit */int) var_14)))) : (((int) (unsigned short)50165)))), (((((/* implicit */_Bool) (signed char)110)) ? ((+(((/* implicit */int) (short)955)))) : (((/* implicit */int) ((unsigned short) var_16)))))));
    var_21 = ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((int) (unsigned short)39905))) & (((9223372036854775807LL) >> (((1562914174U) - (1562914171U))))))));
}
