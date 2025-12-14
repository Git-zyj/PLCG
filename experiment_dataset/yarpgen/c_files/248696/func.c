/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248696
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_1 [i_0])));
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_8))));
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) arr_4 [i_2 - 1]))));
                }
                var_14 = ((/* implicit */int) min(((~(((((/* implicit */unsigned long long int) arr_5 [i_0] [8U])) & (arr_6 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_0 [(signed char)4])), (((unsigned short) var_9)))))));
                var_15 = ((/* implicit */unsigned short) ((signed char) max((18446744073709551595ULL), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)11132))))));
                arr_7 [i_0] [i_1] [8ULL] |= ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)11132));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
    var_17 = ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)54403))))) - (81440210U));
}
