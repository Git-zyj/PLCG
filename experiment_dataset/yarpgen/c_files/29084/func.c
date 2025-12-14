/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29084
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
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0 - 1])), (var_11)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (min((((/* implicit */int) (signed char)-110)), (-746533948)))));
        arr_4 [i_0 + 1] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) max(((unsigned short)3118), (((/* implicit */unsigned short) var_5))))) || (((/* implicit */_Bool) (~(var_6)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_8 [i_1]) : (arr_8 [i_1])));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            arr_12 [i_1] [i_2] = (!(((/* implicit */_Bool) ((unsigned char) arr_7 [i_1]))));
            /* LoopSeq 2 */
            for (int i_3 = 4; i_3 < 16; i_3 += 2) 
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_5 [i_1] [i_1]))));
                var_16 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [i_1])) | (((/* implicit */int) var_12)))));
                arr_15 [i_1] [i_1] [i_1] = arr_10 [i_1];
            }
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                arr_18 [i_1] [i_1] [i_1] [i_1] = arr_14 [i_1] [i_1] [i_1];
                arr_19 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124)))));
                arr_20 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1]);
            }
            var_17 = ((/* implicit */_Bool) arr_8 [i_1]);
        }
        var_18 = ((/* implicit */_Bool) var_4);
    }
    var_19 = ((/* implicit */_Bool) ((unsigned long long int) max((min((1ULL), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) max((1525595941U), (((/* implicit */unsigned int) -1))))))));
}
