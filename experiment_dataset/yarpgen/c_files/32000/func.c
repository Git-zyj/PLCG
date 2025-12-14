/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32000
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (signed char)-37);
        var_15 = ((/* implicit */unsigned long long int) (+((~(((arr_1 [i_0]) & (var_7)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 3; i_2 < 15; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) (+(arr_8 [i_1])));
                    var_17 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 3666501698U)))) ? (-7509303121718533776LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned char) ((((arr_0 [i_1]) + (arr_5 [i_1]))) >= (max((((/* implicit */unsigned int) arr_8 [i_1])), (arr_0 [i_1])))));
    }
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((-7509303121718533776LL) ^ (var_12))))))));
}
