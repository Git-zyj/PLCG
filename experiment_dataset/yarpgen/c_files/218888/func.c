/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218888
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_19 -= var_9;
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) || (((/* implicit */_Bool) var_2)))))));
                    }
                    var_21 -= ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)23), ((unsigned char)59))))) <= (arr_0 [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((((/* implicit */int) var_4)) < (((/* implicit */int) var_2)))) ? (((var_16) - (arr_1 [(unsigned char)19] [i_1]))) : (((/* implicit */unsigned long long int) ((arr_2 [i_0 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (-4085582181277920960LL))))))));
                }
            } 
        } 
    } 
    var_22 *= ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)23)) || (((/* implicit */_Bool) (unsigned short)55850)))) || (((/* implicit */_Bool) var_7))));
}
