/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238918
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_1 - 1]), (arr_2 [i_1 - 1])))) ? ((+(((((/* implicit */_Bool) (signed char)-43)) ? (arr_4 [i_0] [i_0]) : (2229342541U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (3464726740U))))))))));
                var_20 = ((/* implicit */signed char) arr_4 [i_0] [i_1 + 1]);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 4; i_2 < 17; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_7 [i_2 - 1])) : (((/* implicit */int) ((arr_9 [i_2] [(signed char)18]) <= (arr_9 [i_2] [i_2]))))));
        var_21 -= ((/* implicit */short) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2 + 1])) ? (arr_6 [i_2 - 2]) : (arr_6 [i_2 - 4])));
        arr_11 [(unsigned short)0] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_2])) : (arr_9 [i_2] [i_2])))) | ((-(2065624754U)))));
    }
    for (unsigned short i_3 = 3; i_3 < 16; i_3 += 3) 
    {
        arr_14 [i_3] [i_3 + 2] = ((/* implicit */short) min((((unsigned int) arr_7 [i_3])), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_7 [10U])) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) var_16)))))))));
        var_23 = ((/* implicit */signed char) (_Bool)1);
    }
}
