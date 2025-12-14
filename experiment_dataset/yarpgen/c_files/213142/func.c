/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213142
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_3 [i_0])), (((((((/* implicit */_Bool) var_6)) ? (-1215211591) : (arr_1 [i_0]))) & (((var_1) | (((/* implicit */int) var_5))))))));
                var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) var_9)), (((unsigned char) (unsigned char)255))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) 2047LL);
        arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (arr_7 [i_2]) : (arr_7 [i_2])))) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_7 [i_2]))))));
    }
}
