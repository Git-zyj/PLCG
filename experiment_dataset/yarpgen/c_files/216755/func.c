/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216755
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
    var_13 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_14 = ((/* implicit */long long int) (unsigned char)10);
            var_15 = min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0 - 1] [(unsigned short)5]))))) ? ((-(arr_2 [i_0] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [1U]))))))), (arr_2 [i_1] [i_0]));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) (+((~(16848918903623271246ULL))))));
        }
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1486120265)) ? (((/* implicit */int) (unsigned short)30281)) : (((/* implicit */int) arr_3 [i_0] [i_0])))), ((-(((/* implicit */int) arr_7 [i_0]))))))) ? (min((((/* implicit */unsigned int) (+(arr_1 [i_0])))), (((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_4 [i_2] [i_2] [i_0]) : (((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_2])))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) arr_3 [i_0] [i_0]))))))))));
            arr_9 [i_2] |= ((/* implicit */signed char) arr_4 [i_0] [i_0 + 2] [6ULL]);
        }
        var_17 |= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_3 [(short)16] [(short)16])) ? (((/* implicit */int) arr_3 [(signed char)0] [(signed char)0])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1])))));
    }
    var_18 = ((/* implicit */unsigned long long int) 1847425375);
}
