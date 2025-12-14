/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26667
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 7; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_18 |= ((/* implicit */unsigned short) arr_7 [i_0]);
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)247)), (4682269459292136532LL))))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 281474976710655LL)) ? (281474976710655LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))))), (((/* implicit */long long int) arr_5 [i_1 + 3] [i_1 - 3]))))) ? (((unsigned long long int) min((((/* implicit */int) arr_1 [i_1])), (1291928772)))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)57666)) ? (arr_6 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) ((unsigned short) -281474976710656LL))))))));
                    }
                    arr_10 [2U] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((_Bool) 0U))), (((unsigned short) (((_Bool)0) || (((/* implicit */_Bool) (unsigned char)1)))))));
                    var_20 ^= ((unsigned char) max((((unsigned long long int) -18182929)), (((/* implicit */unsigned long long int) var_14))));
                    var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_7)), (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 4])), (max((((/* implicit */unsigned long long int) arr_4 [1LL])), (arr_2 [i_0] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
    var_23 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)247))));
    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))));
}
