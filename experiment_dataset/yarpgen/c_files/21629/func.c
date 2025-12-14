/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21629
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */long long int) ((((/* implicit */int) min((arr_2 [i_1 - 3] [i_1 - 3]), (arr_2 [i_1 + 1] [i_1 + 1])))) != (((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) var_6))), (arr_4 [i_1 - 2] [i_1 - 3]))))));
                    arr_7 [(unsigned short)17] [i_1] [i_2 - 1] = ((/* implicit */long long int) 3644166359U);
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)234))))) ? (min((((unsigned int) (short)-30418)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)8191)) : (((/* implicit */int) (unsigned short)57345)))) | (-1060919915))))));
                }
            } 
        } 
    } 
    var_13 -= ((/* implicit */unsigned short) (((+(var_0))) << (((((/* implicit */int) var_2)) - (1)))));
}
