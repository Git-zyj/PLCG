/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218603
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
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_12))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(signed char)9] [i_0 + 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_3 [i_2] [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : ((-(arr_3 [i_0 - 1] [i_0 - 1] [i_2])))));
                    var_14 = ((/* implicit */long long int) max((var_14), (max((((/* implicit */long long int) ((unsigned char) (signed char)-91))), (((long long int) var_11))))));
                    var_15 *= ((/* implicit */signed char) (((~(((/* implicit */int) var_1)))) - (((/* implicit */int) var_7))));
                }
                var_16 &= ((/* implicit */signed char) (+(max((((/* implicit */int) var_4)), (var_9)))));
                var_17 = ((/* implicit */_Bool) max((var_17), (max(((!(((/* implicit */_Bool) var_2)))), (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 2305843009213693951LL))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_1);
}
