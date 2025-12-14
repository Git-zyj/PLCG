/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198121
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) 4294967295U);
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_3 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 4; i_1 < 11; i_1 += 3) 
    {
        var_16 = var_8;
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_1 - 2] [i_2])) ? (((/* implicit */int) arr_1 [i_1 + 3])) : (((/* implicit */int) (signed char)7))))) ? (((/* implicit */unsigned int) arr_4 [i_1])) : (var_9)));
            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)50048))));
            arr_11 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5386676539742121455LL)) ? (3068599035U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50041)))))) ? (var_2) : (((/* implicit */int) arr_3 [i_2]))));
        }
        arr_12 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_2 [i_1 - 2] [i_1 + 2])) : (-1LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -993563365)) ? (2147483620) : (((/* implicit */int) arr_7 [i_1 + 3]))))) : (((((/* implicit */_Bool) (short)-1173)) ? (arr_9 [i_1 + 1] [i_1 - 4] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 3])))))));
        var_19 = ((/* implicit */short) 2312155815981858129ULL);
    }
    var_20 += ((/* implicit */unsigned short) var_2);
    var_21 = ((/* implicit */short) var_3);
    var_22 *= ((/* implicit */unsigned char) var_0);
}
